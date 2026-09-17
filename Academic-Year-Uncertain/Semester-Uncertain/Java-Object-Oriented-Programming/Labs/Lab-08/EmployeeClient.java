// EmployeeClient.java
public class EmployeeClient {
    public static void main(String[] args) {
        // construct 3 instances of Employee class and dump each
        Employee john = new Employee();
        Employee amy = new Employee("Amalia", "Thompson", 32000);
        Employee fred = new Employee("Frederick", "Morison", 44000);

        john.dump();
        amy.dump();
        fred.dump();

        // test setFirstName
        amy.setFirstName("Amalia");
        amy.dump();
        
        // test setLastName
        fred.setLastName("Morison, Jr");
        fred.dump();

        // test setSalary
        amy.setSalary(36000);
        amy.dump();

        // test getStartDate()
        System.out.println(john.getStartDate());
    }
}
