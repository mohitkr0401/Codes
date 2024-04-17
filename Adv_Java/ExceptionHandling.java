import java.util.Scanner;

class InvalidMarksException extends Exception {
    public InvalidMarksException(String message) {
        super(message);
    }
}

class Student {
    public void checkMarks(int m) throws InvalidMarksException, NumberFormatException, ArrayIndexOutOfBoundsException {
        // int marks = Integer.parseInt(m1);
        if (m < 0) {
            InvalidMarksException me = new InvalidMarksException("Invalid Marks");
            throw (me);
        } else {
            System.out.println("Your Marks : " + m);
        }

    }
}

public class ExceptionHandling {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Marks: ");

        try {
            int num = scanner.nextInt();
            Student st = new Student();
            st.checkMarks(num);
        } catch (NumberFormatException ne) {
            System.out.println("Please Enter Integer Value");
        } catch (InvalidMarksException ie) {
            System.out.println("Invalid Marks can not be Negative Numbers");
        } finally {
            System.out.println("Finally Block Executing");
        }
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
    }
}