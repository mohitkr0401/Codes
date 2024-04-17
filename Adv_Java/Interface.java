interface Walkable {
    void walk();
}

interface Swimmable {
    void swim();
}

class Duck implements Walkable, Swimmable {
    public void walk() {
        System.out.println("Duck is walking.");
    }

    public void swim() {
        System.out.println("Duck is swimming.");
    }
}

public class Interface {
    public static void main(String[] args) {
        Duck duck = new Duck();
        duck.walk();
        duck.swim();
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
    }
}
