public class Cooling extends Komponen {
    private String type;
    private int coolingCapacity;
    private String coolingType;
    private int powerConsumption;

    public Cooling() {
        super();
        this.type = "";
        this.coolingCapacity = 0;
        this.coolingType = "";
        this.powerConsumption = 0;
    }

    public Cooling(String id, int warrantyMonths, String merk, String nama, double harga,
                   String type, int coolingCapacity, String coolingType, int powerConsumption) {
        super(id, warrantyMonths, merk, nama, harga);
        this.type = type;
        this.coolingCapacity = coolingCapacity;
        this.coolingType = coolingType;
        this.powerConsumption = powerConsumption;
    }

    public void setType(String type) {
        this.type = type;
    }

    public void setCoolingCapacity(int coolingCapacity) {
        this.coolingCapacity = coolingCapacity;
    }

    public void setCoolingType(String coolingType) {
        this.coolingType = coolingType;
    }

    public void setPowerConsumption(int powerConsumption) {
        this.powerConsumption = powerConsumption;
    }

    public String getType() {
        return type;
    }

    public int getCoolingCapacity() {
        return coolingCapacity;
    }

    public String getCoolingType() {
        return coolingType;
    }

    public int getPowerConsumption() {
        return powerConsumption;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Cooling Specs: " + type + ", Cooling Capacity: " + coolingCapacity + " RPM");
        System.out.println("Cooling Type: " + coolingType);
        System.out.println("Power Consumption: " + powerConsumption + "W");
    }
}
