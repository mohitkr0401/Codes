class InvalidMarksException extends Exception{
    public InvalidMarksException(String message){
        super(message);
    }
}
class Student{
    public void checkMarks(String m1) throws InvalidMarksException, NumberFormatException, ArrayIndexOutOfBoundsException{
        int marks= Integer.parseInt(m1);
        if(marks<0){
            InvalidMarksException me=new InvalidMarksException("Invalid Marks");
            throw(me);
        }
        else{
            System.out.println("Your Marks : "+ m1);
        }
        
    }
}
public class exph {
    public static void main(String[] args) {
        try {
            Student st = new Student();
            st.checkMarks(args[0]);
        } catch (ArrayIndexOutOfBoundsException ae) {
            System.out.println("Please provide your marks as command line arguement");
        }
        catch(NumberFormatException ne){
            System.out.println("Please enter integer value");
        }
        catch(InvalidMarksException ie){
            System.out.println("Inavelid marks can not be negative numbers");
        }
        finally{
            System.out.println("Finally block executing");
        }
        System.out.println("Adyanshi Singh \nIT-3 \n03776803121");
    }
}