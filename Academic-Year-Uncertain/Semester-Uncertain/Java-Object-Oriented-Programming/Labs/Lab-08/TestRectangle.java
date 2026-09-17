// TestRectangle.java
public class TestRectangle {
    public static void main(String[] args) {
        // Test using default constructor
        Rectangle rect1 = new Rectangle();
        System.out.println("Rectangle 1 (default):");
        rect1.printDetails();

        // Test using parameterized constructor
        Rectangle rect2 = new Rectangle(5.0, 10.0, "blue");
        System.out.println("\nRectangle 2 (custom):");
        rect2.printDetails();

        // Modify Rectangle 1
        rect1.setWidth(3.5);
        rect1.setLength(7.0);
        rect1.setColor("green");
        System.out.println("\nRectangle 1 (modified):");
        rect1.printDetails();
    }
}
