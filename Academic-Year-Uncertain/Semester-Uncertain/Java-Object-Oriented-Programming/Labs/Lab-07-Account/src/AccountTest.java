import java.util.Scanner;

public class AccountTest {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // 1
        Account accA = new Account(50.00);
        Account accB = new Account(10.00);

        // 2
        System.out.println("Account A Balance: " + accA.getBalance());
        System.out.println("Account B Balance: " + accB.getBalance());
        // 3
        System.out.print("Enter withdrawal amount for Account A: ");
        double withdrawAmount = input.nextDouble();
        accA.debit(withdrawAmount);
        // 4
        System.out.print("Enter deposit amount for Account B: ");
        double depositAmount = input.nextDouble();
        accB.credit(depositAmount);

        // 5
        System.out.println("Updated Account A Balance: " + accA.getBalance());
        System.out.println("Updated Account B Balance: " + accB.getBalance());

        input.close();
    }
}
