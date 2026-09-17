// Employee.java
import java.util.Date;

public class Employee {
    // constructors
    public Employee() {
        init("unknown", "unknown", 0);
    }

    public Employee(String first, String last) {
        init(first, last, 0);
    }

    public Employee(String first, String last, int s) {
        init(first, last, s);
    }

    // get/set methods
    public void setFirstName(String first) {
        fname = first;
    }

    public String getFirstName() {
        return fname;
    }

    public void setLastName(String last) {
        lname = last;
    }

    public String getLastName() {
        return lname;
    }

    public void setSalary(int s) {
        sal = s;
    }

    public int getSalary() {
        return sal;
    }

    public Date getStartDate() {
        return start;
    }

    // print method
    public void dump() {
        System.out.println();
        System.out.println("First name: " + fname);
        System.out.println("Last name: " + lname);
        System.out.println("Salary: $" + sal);
        System.out.println("Start date: " + start);
    }

    // low-level method and implementation fields
    private void init(String f, String l, int s) {
        fname = f;
        lname = l;
        sal = s;
        start = new Date(); // today
    }

    private String fname;
    private String lname;
    private int sal;
    private Date start;
}
