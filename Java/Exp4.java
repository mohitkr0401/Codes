import static java.lang.Math.*;

class Quadratic {
    int a, b, c, d;
    double r1, r2;
    void inputequation(int a1, int b1, int c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    void findroots() {
        d = b * b - 4 * a * c;
        if (d > 0) {
            r1 = (-b + sqrt(d)) / 2 * a;
            r2 = (-b - sqrt(d)) / 2 * a;
        } else if (d == 0) {
            r1 = -b / 2 * a;
            r2 = -b / 2 * a;

        }
    }
    void display() {
        if (d > 0 || d == 0) {
            System.out.println("The Real Roots of the Equations are " + r1 + " and " + r2);
        } else {
            System.out.println("The Given Equation has no Real Roots!");
        }
    }
}
class Exp4 {
    public static void main(String[] args) {
        Quadratic q = new Quadratic();
        q.inputequation(2, 5, 3);
        q.findroots();
        q.display();
    }
}
