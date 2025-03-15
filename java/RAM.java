public class RAM extends Komponen {
    private int kapasitasGB;
    private String ddr;
    private int clockSpeed;
    private int powerConsumption;

    public RAM() {
        super();
        this.kapasitasGB = 0;
        this.ddr = "";
        this.clockSpeed = 0;
        this.powerConsumption = 0;
    }

    public RAM(String id, int warrantyMonths, String merk, String nama, double harga,
               int kapasitasGB, String ddr, int clockSpeed, int powerConsumption) {
        super(id, warrantyMonths, merk, nama, harga);
        this.kapasitasGB = kapasitasGB;
        this.ddr = ddr;
        this.clockSpeed = clockSpeed;
        this.powerConsumption = powerConsumption;
    }

    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }

    public void setDdr(String ddr) {
        this.ddr = ddr;
    }

    public void setClockSpeed(int clockSpeed) {
        this.clockSpeed = clockSpeed;
    }

    public void setPowerConsumption(int powerConsumption) {
        this.powerConsumption = powerConsumption;
    }

    public int getKapasitasGB() {
        return kapasitasGB;
    }

    public String getDdr() {
        return ddr;
    }

    public int getClockSpeed() {
        return clockSpeed;
    }

    public int getPowerConsumption() {
        return powerConsumption;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("RAM Specs: " + kapasitasGB + "GB " + ddr + ", " + clockSpeed + "MHz");
        System.out.println("Power Consumption: " + powerConsumption + "W");
    }
}
