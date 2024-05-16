public class Bean_Main {
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        Person_Bean person = new Person_Bean();
        person.setFirstName("Mohit");
        person.setLastName("Kumar");
        person.setAge(22);
        person.displayPersonInfo();
        Person_Bean anotherPerson = new Person_Bean("Akash", "Verma", 20);
        anotherPerson.displayPersonInfo();
    }
}