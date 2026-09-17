public class Sergeant extends Patrolman {
    protected static double baseSgtPay = 4700;

    public Sergeant(String first, String last, int y) {
        super(first, last, y);
    }

    public double getBaseSgtPay() {
        return baseSgtPay;
    }

    @Override
    public double earnings() {
        return 0.82 * baseSgtPay + 1.2 * Math.sqrt(baseSgtPay) * yearsOfService;
    }

    @Override
    public int benefitLevel() {
        return super.benefitLevel() + 2;
    }
}