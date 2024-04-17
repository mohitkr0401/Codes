class student {

    void me() {
        int a = 1, b = 2, c = a + b;
        System.out.println("The value at student: " + c);
    }
}

class mohit extends student {

    void me() {
        int a = 4, b = 3, c = a + b;
        System.out.println("The value of child: " + c);
    }
}

class alex extends mohit {

    void me() {
        int a = 43, b = 33, c = a + b;
        System.out.println("The value of child: " + c);
    }
}

class wicked extends alex {

    void me() {
        int a = 43, b = 63, c = a + b;
        System.out.println("The value of child: " + c);
    }
}

class Dynamic_Poly {

    public static void main(String[] args) {
        student random = new mohit();
        student random1 = new alex();
        student random2 = new wicked();

        random.me();
        random1.me();
        random2.me();
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");

    }
}
