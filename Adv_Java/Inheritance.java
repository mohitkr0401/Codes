class Parent {

    void displayParent() {
        System.out.println("This is the Parent Class");
    }
}

class Child1 extends Parent {

    void displayChild1() {
        System.out.println("This is the First Child Class");
    }
}

class Child2 extends Parent {

    void displayChild2() {
        System.out.println("This is the Second Child Class");
    }
}

class Grandchild extends Child1 {

    void displayGrandchild() {
        System.out.println("This is the Grandchild Class");
    }
}

public class Inheritance {

    public static void main(String[] args) {
        Grandchild grandchild = new Grandchild();
        grandchild.displayParent();
        grandchild.displayChild1();
        grandchild.displayGrandchild();
        Child2 child2 = new Child2();
        child2.displayParent();
        child2.displayChild2();
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
    }
}