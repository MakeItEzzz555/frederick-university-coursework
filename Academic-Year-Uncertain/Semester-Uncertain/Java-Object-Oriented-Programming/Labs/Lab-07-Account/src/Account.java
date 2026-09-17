public class Account {
    private double balance;  // Attribute should be private to enforce encapsulation

    // Constructor with validation
    public Account(double balance) {
        if (balance > 0) {
            this.balance = balance;
        } else {
            System.out.println("Invalid balance. Setting balance to 0.");
            this.balance = 0;
        }
    }

    // Method to get balance
    public double getBalance() {
        return balance;
    }

    // Method to add funds
    public void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Transaction successful! New balance: " + balance);
        } else {
            System.out.println("Invalid amount. Cannot deposit.");
        }
    }

    // Method to withdraw funds
    public void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Transaction successful! New balance: " + balance);
        } else {
            System.out.println("Insufficient balance or invalid amount.");
        }
    }
}
