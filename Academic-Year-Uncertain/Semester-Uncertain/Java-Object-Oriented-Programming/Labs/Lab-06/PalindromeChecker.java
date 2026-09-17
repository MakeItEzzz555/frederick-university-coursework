import java.io.*;

public class PalindromeChecker {
    // Method to check if a number is palindrome
    public static boolean isPalindrome(int number) {
        int original = number;
        int reverse = 0;
        
        while (number > 0) {
            int digit = number % 10;
            reverse = reverse * 10 + digit;
            number /= 10;
        }
        return original == reverse;
    }

    public static void main(String[] args) {
        try {
            // Read number from input.txt
            BufferedReader reader = new BufferedReader(new FileReader("input.txt"));
            int num = Integer.parseInt(reader.readLine().trim());
            reader.close();
            
            // Check if the number is palindrome
            String result = num + (isPalindrome(num) ? " is a palindrome." : " is not a palindrome.");
            
            // Write result to output.txt
            BufferedWriter writer = new BufferedWriter(new FileWriter("output.txt"));
            writer.write(result);
            writer.close();
            
            System.out.println("Result written to output.txt");
        } catch (IOException | NumberFormatException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
