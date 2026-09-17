public class Lieutenant extends Sergeant {
    protected static double baseLieutenantPay = 5900;

    public Lieutenant(String first, String last, int y) {
        super(first, last, y);
    }

    public double getBaseLieutenantPay() {
        return baseLieutenantPay;
    }

    @Override
    public double earnings() {
        return 0.80 * baseLieutenantPay + 1.3 * Math.sqrt(baseLieutenantPay) * yearsOfService;
    }

    @Override
    public int benefitLevel() {
        return super.benefitLevel() + 3;
    }
}