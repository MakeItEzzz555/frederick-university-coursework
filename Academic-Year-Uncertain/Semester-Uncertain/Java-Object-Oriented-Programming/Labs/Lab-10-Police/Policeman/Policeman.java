public abstract class Policeman {
    protected String firstName;
    protected String lastName;
    protected int yearsOfService;

    public Policeman(String firstName, String lastName, int yearsOfService) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.yearsOfService = yearsOfService;
    }

    public abstract double earnings();
    public abstract int benefitLevel();
}