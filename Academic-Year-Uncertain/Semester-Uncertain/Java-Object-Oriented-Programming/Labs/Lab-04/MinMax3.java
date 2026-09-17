import java.util.Scanner;

class MinMax3 {
    public static void main(String[] args) {
        // Declare the variables to hold the entered numbers
        int num1, num2, num3;

        // Create a Scanner object for user input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter three integer numbers
        System.out.print("Enter the first integer number: ");
        num1 = scanner.nextInt();
        System.out.print("Enter the second integer number: ");
        num2 = scanner.nextInt();
        System.out.print("Enter the third integer number: ");
        num3 = scanner.nextInt();

        // Show the user which numbers they have entered
        System.out.println("You entered: " + num1 + ", " + num2 + ", " + num3);

        // Find the minimum and maximum values
        int min = num1;
        int max = num1;

        if (num2 < min) {
            min = num2;
        }
        if (num3 < min) {
            min = num3;
        }
        if (num2 > max) {
            max = num2;
        }
        if (num3 > max) {
            max = num3;
        }

        // Show the user the found minimum and maximum values
        System.out.println("Minimum value: " + min);
        System.out.println("Maximum value: " + max);

        // Close the scanner
        scanner.close();
    }
}
