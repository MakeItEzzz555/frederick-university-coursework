
import java.util.ArrayList;

class Ship {
    private String name;
    private String yearBuilt;

    public Ship(String name, String yearBuilt) {
        this.name = name;
        this.yearBuilt = yearBuilt;
    }

    public String getName() { return name; }
    public void setName(String name) { this.name = name; }

    public String getYearBuilt() { return yearBuilt; }
    public void setYearBuilt(String yearBuilt) { this.yearBuilt = yearBuilt; }

    public String showInfo() {
        return "Ship Name: " + name + ", Year Built: " + yearBuilt;
    }
}

class CruiseShip extends Ship {
    private int maxPassengers;

    public CruiseShip(String name, String yearBuilt, int maxPassengers) {
        super(name, yearBuilt);
        this.maxPassengers = maxPassengers;
    }

    public int getMaxPassengers() { return maxPassengers; }
    public void setMaxPassengers(int maxPassengers) { this.maxPassengers = maxPassengers; }

    @Override
    public String showInfo() {
        return "Cruise Ship: " + getName() + ", Max Passengers: " + maxPassengers;
    }
}

class CargoShip extends Ship {
    private int cargoCapacity;

    public CargoShip(String name, String yearBuilt, int cargoCapacity) {
        super(name, yearBuilt);
        this.cargoCapacity = cargoCapacity;
    }

    public int getCargoCapacity() { return cargoCapacity; }
    public void setCargoCapacity(int cargoCapacity) { this.cargoCapacity = cargoCapacity; }

    @Override
    public String showInfo() {
        return "Cargo Ship: " + getName() + ", Cargo Capacity: " + cargoCapacity + " tons";
    }
}

public class ShipDemo {
    public static void main(String[] args) {
        Ship[] ships = new Ship[3];
        ships[0] = new Ship("Lolipop", "1960");
        ships[1] = new CruiseShip("Disney Magic", "1998", 2400);
        ships[2] = new CargoShip("Black Pearl", "1800", 50000);

        for (Ship ship : ships) {
            System.out.println(ship.showInfo());
        }
    }
}
