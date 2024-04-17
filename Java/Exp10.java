abstract class Shape {
    abstract int numberOfSides();
}
class Trapezoid extends Shape {
    public int numberOfSides() {
        return 4;
    }
}
class Triangle extends Shape {
    public int numberOfSides() {
        return 3;
    }
}
class Rectangle extends Shape {
    public int numberOfSides() {
        return 4;
    }
}
class Hexagon extends Shape {
    public int numberOfSides() {
        return 6;
    }
}
public class Exp10 {
    public static void main(String[] args) {
        Shape trapezoid = new Trapezoid();
        Shape triangle = new Triangle();
        Shape rectangle = new Rectangle();
        Shape hexagon = new Hexagon();

        System.out.println("Trapezoid has " + trapezoid.numberOfSides() + " sides.");
        System.out.println("Triangle has " + triangle.numberOfSides() + " sides.");
        System.out.println("Rectangle has " + rectangle.numberOfSides() + " sides.");
        System.out.println("Hexagon has " + hexagon.numberOfSides() + " sides.");
    }
}