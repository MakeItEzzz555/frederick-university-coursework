public class TestPolice {
    public static void main(String[] args) {
        Patrolman p = new Patrolman("Road", "Runner", 5);
        Sergeant s = new Sergeant("Elmer", "Fudd", 12);
        Lieutenant l = new Lieutenant("Daffy", "Duck", 14);

        System.out.println("Patrolman: " + p.firstName + " " + p.lastName);
        System.out.println("Years of service: " + p.yearsOfService);
        System.out.println("Earnings: " + p.earnings());
        System.out.println("Benefit level: " + p.benefitLevel());

        System.out.println("sergeant: " + s.firstName + " " + s.lastName);
        System.out.println("Years of service: " + s.yearsOfService);
        System.out.println("Earnings: " + s.earnings());
        System.out.println("Benefit level: " + s.benefitLevel());

        System.out.println("Lieutenant: " + l.firstName + " " + l.lastName);
        System.out.println("Years of service: " + l.yearsOfService);
        System.out.println("Earnings: " + l.earnings());
        System.out.println("Benefit level: " + l.benefitLevel());

        double avgBasePay = (Patrolman.basePatrolPay + Sergeant.baseSgtPay + Lieutenant.baseLieutenantPay) / 3.0;
        System.out.println("The average of the base bay of a patrolman, sergeant and lieutenant is");
        System.out.println(avgBasePay + " per month");
    }
}