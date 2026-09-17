import java.util.Scanner;

public class TestMovable {
    public static void main(String[] args) {
        MovablePoint point = new MovablePoint(0, 0);
        Scanner scanner = new Scanner(System.in);
        int choice = 0;
        while (choice != 5) {
            System.out.println("Select an action:");
            System.out.println("1: moveUp");
            System.out.println("2: moveDown");
            System.out.println("3: moveLeft");
            System.out.println("4: moveRight");
            System.out.println("5: exit");
            System.out.print("Enter your choice: ");
            if (scanner.hasNextInt()) {
                choice = scanner.nextInt();
                switch (choice) {
                    case 1:
                        point.moveUp();
                        System.out.println("Current position: " + point);
                        break;
                    case 2:
                        point.moveDown();
                        System.out.println("Current position: " + point);
                        break;
                    case 3:
                        point.moveLeft();
                        System.out.println("Current position: " + point);
                        break;
                    case 4:
                        point.moveRight();
                        System.out.println("Current position: " + point);
                        break;
                    case 5:
                        System.out.println("Exiting. Final position: " + point);
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                }
            } else {
                System.out.println("Invalid input. Please enter a number.");
                scanner.next(); // consume invalid input
            }
        }
        scanner.close();
    }
}