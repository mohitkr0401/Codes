import java.util.*;
class InvalidAgeException extends Exception{
    public InvalidAgeException(String message){
        super(message);
    }
}
public class ageexp {
    public static void main(String[] args) {
        int age;
        try (Scanner n = new Scanner(System.in)) {
            try {
                System.out.println("Enter your Age : ");
                age = n.nextInt();
                if (age<18) {
                    throw new InvalidAgeException("you are not eligible to work");
                } else {
                    System.out.println("You are eligible to work.");
                }
            } catch (InvalidAgeException e) {
                System.out.println(e.getMessage());
            }
        }
        System.out.println("Adyanshi Singh \nIT-3 \n03776803121");
    }
    
}