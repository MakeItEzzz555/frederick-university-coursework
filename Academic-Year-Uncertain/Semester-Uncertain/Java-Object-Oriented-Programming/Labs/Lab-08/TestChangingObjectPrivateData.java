// TestChangingObjectPrivateData.java
public class TestChangingObjectPrivateData {
    public static void main(String[] args) {
        // create object with specific color and radius
        Circle myCircle = new Circle(5.0, "white");
        printCircle(myCircle);
        myCircle.setColor(myCircle, "black");
        printCircle(myCircle); // passing object as argument (by reference)
    }

    public static void printCircle(Circle c) {
        System.out.println("The area of the circle of the radius " + c.getRadius() + " is " + c.findArea());
        System.out.println("The color of the circle is " + c.getColor());
    }
}

class Circle {
    private double radius; // private modifier
    private String color;

    public Circle(double r, String c) { // constructor
        radius = r;
        color = c;
    }

    public Circle() { // constructor with no argument
        radius = 1.0;
        color = "white";
    }

    public double getRadius() { // getter
        return radius;
    }

    public String getColor() { // getter
        return color;
    }

    public void setColor(Circle c, String color) { // setter
        c.color = color;
    }

    public double findArea() {
        return radius * radius * Math.PI; // Math – built-in class; PI - constant
    }
}
