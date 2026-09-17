import java.util.Scanner;

public class FactorialCalculator {
    // Recursive method to calculate factorial
    public static long factorialRecursive(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorialRecursive(n - 1);
    }

    // Iterative method to calculate factorial
    public static long factorialIterative(int n) {
        long result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int num = scanner.nextInt();
        
        if (num < 0) {
            System.out.println("Factorial is not defined for negative numbers.");
        } else {
            System.out.println("Factorial (Recursive) of " + num + " is: " + factorialRecursive(num));
            System.out.println("Factorial (Iterative) of " + num + " is: " + factorialIterative(num));
        }
        scanner.close();
    }
}