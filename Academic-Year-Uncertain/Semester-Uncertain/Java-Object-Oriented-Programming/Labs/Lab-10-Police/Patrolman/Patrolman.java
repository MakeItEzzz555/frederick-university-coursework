public class Patrolman extends Policeman {
    protected static double basePatrolPay = 3600;

    public Patrolman(String first, String last, int y) {
        super(first, last, y);
    }

    public double getBasePatrolPay() {
        return basePatrolPay;
    }

    @Override
    public double earnings() {
        return 0.85 * basePatrolPay + 0.06 * Math.sqrt(basePatrolPay) * yearsOfService;
    }

    @Override
    public int benefitLevel() {
        return 1;
    }
}