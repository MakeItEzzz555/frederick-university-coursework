import java.io.*;
import java.util.Scanner;

public class Lab4Ass {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Current working directory: " + System.getProperty("user.dir"));
        System.out.println("Choose conversion type: ");

        System.out.println("1. Fahrenheit to Celsius (F to C)");
        System.out.println("2. Celsius to Fahrenheit (C to F)");
        int choice = scanner.nextInt();

        if (choice == 1) {
            convertFtoC();
        } else if (choice == 2) {
            convertCtoF();
        } else {
            System.out.println("Invalid choice.");
        }
        scanner.close();
    }

    private static void convertFtoC() {
        try {
            BufferedReader reader = new BufferedReader(new FileReader("FtoC.txt"));
            BufferedWriter writer = new BufferedWriter(new FileWriter("FtoC_Converted.txt"));
            String line;

            while ((line = reader.readLine()) != null) {
                double fahrenheit = Double.parseDouble(line);
                double celsius = (5.0 / 9) * (fahrenheit - 32);
                writer.write(fahrenheit + " F = " + celsius + " C");
                writer.newLine();
            }
            reader.close();
            writer.close();
            System.out.println("Conversion from Fahrenheit to Celsius completed.");
        } catch (IOException e) {
            System.out.println("Error reading or writing files: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Invalid number format in input file.");
        }
    }

    private static void convertCtoF() {
        try {
            BufferedReader reader = new BufferedReader(new FileReader("CtoF.txt"));


            BufferedWriter writer = new BufferedWriter(new FileWriter("CtoF_Converted.txt"));
            String line;

            while ((line = reader.readLine()) != null) {
                double celsius = Double.parseDouble(line);
                double fahrenheit = (9.0 / 5) * celsius + 32;
                writer.write(celsius + " C = " + fahrenheit + " F");
                writer.newLine();
            }
            reader.close();
            writer.close();
            System.out.println("Conversion from Celsius to Fahrenheit completed.");
        } catch (IOException e) {
            System.out.println("Error reading or writing files: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Invalid number format in input file.");
        }
    }
}
