public class HardDrive extends StorageDrive {
    private int rpm;
    private int cacheSize;

    public HardDrive() {
        super();
        this.rpm = 0;
        this.cacheSize = 0;
    }

    public HardDrive(String id, int warrantyMonths, String merk, String nama, double harga,
                     int kapasitasGb, int readSpeed, int writeSpeed, int powerConsumption,
                     int rpm, int cacheSize) {
        super(id, warrantyMonths, merk, nama, harga, kapasitasGb, readSpeed, writeSpeed, powerConsumption);
        this.rpm = rpm;
        this.cacheSize = cacheSize;
    }

    public void setRpm(int rpm) {
        this.rpm = rpm;
    }

    public void setCacheSize(int cacheSize) {
        this.cacheSize = cacheSize;
    }

    public int getRpm() {
        return rpm;
    }

    public int getCacheSize() {
        return cacheSize;
    }

    public String getDriveType() {
        return "HDD";
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Drive Type: HDD, RPM: " + rpm + ", Cache: " + cacheSize + "MB");
    }
}
