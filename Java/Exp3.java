class Outer {
    private int outer_x = 100;

    void test() {
        Inner inner = new Inner();
        inner.display();
        inner.hello();
    }

    class Inner {
        private void hello() {
            System.out.println("Private Method Hello() of Inner Class");
        }

        void display() {
            System.out.println("Display: outer_x = " + outer_x);
            Outer o = new Outer();
            System.out.println("Display: outer_x = " + o.outer_x);
        }
    }
}

class Exp3 {
    public static void main(String args[]) {
        Outer outer = new Outer();
        outer.test();
    }
}