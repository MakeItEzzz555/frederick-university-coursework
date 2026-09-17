// Rectangle.java
public class Rectangle {
    private double width;
    private double length;
    private double area;
    private String color;

    // Constructor with no arguments
    public Rectangle() {
        this.width = 1.0;
        this.length = 1.0;
        this.color = "white";
        this.area = findArea(); // Calculate area on initialization
    }

    // Constructor with parameters
    public Rectangle(double width, double length, String color) {
        this.width = width;
        this.length = length;
        this.color = color;
        this.area = findArea(); // Calculate area on initialization
    }

    // Getters and setters
    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
        this.area = findArea(); // Recalculate area when width is changed
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
        this.area = findArea(); // Recalculate area when length is changed
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    // Method to calculate area
    public double findArea() {
        return width * length;
    }

    // Method to print rectangle details
    public void printDetails() {
        System.out.println("Width: " + width);
        System.out.println("Length: " + length);
        System.out.println("Color: " + color);
        System.out.println("Area: " + area);
    }
}

