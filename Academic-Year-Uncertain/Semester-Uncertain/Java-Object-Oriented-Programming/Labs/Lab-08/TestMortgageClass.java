// TestMortgageClass.java
import java.util.Scanner;

public class TestMortgageClass {
    public static void main(String[] args) {
        double interestRate;
        int year;
        double loan;

        // Create Scanner object for input
        Scanner sc = new Scanner(System.in);

        // Enter input
        System.out.println("Enter yearly interest rate, for example 8.25:");
        interestRate = sc.nextDouble();
        System.out.println("Enter number of years as an integer, for example 5: ");
        year = sc.nextInt();
        System.out.println("Enter loan amount, for example 120000.95: ");
        loan = sc.nextDouble();

        // Creating Mortgage object
        Mortgage m = new Mortgage(interestRate, year, loan);

        // Display results
        System.out.println("The monthly pay is " + m.monthlyPay());
        System.out.println("The total paid is " + m.totalPay());

        sc.close();  // Close the Scanner to avoid resource leaks
    }
}

class Mortgage {
    private double interest;
    private int year;
    private double loan;

    public Mortgage(double i, int y, double l) {
        interest = i / 1200.0;
        year = y;
        loan = l;
    }

    public double interest() {
        return interest;
    }

    public double year() {
        return year;
    }

    public double loan() {
        return loan;
    }

    public double monthlyPay() {
        return loan * interest / (1 - (Math.pow(1 / (1 + interest), year * 12)));
    }

    public double totalPay() {
        return monthlyPay() * year * 12;
    }
}
