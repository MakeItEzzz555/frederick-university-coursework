import java.io.*;

public class task2 {
    public static void main(String[] args) {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        System.out.print("Enter a number: ");
        
        try {

            int number = Integer.parseInt(br.readLine());
            boolean isEven = (number % 2 == 0);
            System.out.println("Input: " + number + " Output: " + isEven);

        } catch (IOException e) {
            
            System.out.println("An error occurred while reading input.");

        } catch (NumberFormatException e) {

            System.out.println("Please enter a valid integer.");

        }
    }
}
