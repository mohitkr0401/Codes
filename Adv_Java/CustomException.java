import java.util.*;

class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

public class CustomException {
    public static void main(String[] args) {
        int age;
        try (Scanner n = new Scanner(System.in)) {
            try {
                System.out.println("Enter your Age : ");
                age = n.nextInt();
                if (age < 18) {
                    throw new InvalidAgeException("Not eligible to Work. Age must be 18 or Above.");
                } else {
                    System.out.println("You are Eligible to Work.");
                }
            } catch (InvalidAgeException e) {
                System.out.println(e.getMessage());
            }
        }
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
    }

}