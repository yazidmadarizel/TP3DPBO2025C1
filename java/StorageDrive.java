public abstract class StorageDrive extends Komponen {
    private int kapasitasGb;
    private int readSpeed;
    private int writeSpeed;
    private int powerConsumption;

    public StorageDrive() {
        super();
        this.kapasitasGb = 0;
        this.readSpeed = 0;
        this.writeSpeed = 0;
        this.powerConsumption = 0;
    }

    public StorageDrive(String id, int warrantyMonths, String merk, String nama, double harga,
                        int kapasitasGb, int readSpeed, int writeSpeed, int powerConsumption) {
        super(id, warrantyMonths, merk, nama, harga);
        this.kapasitasGb = kapasitasGb;
        this.readSpeed = readSpeed;
        this.writeSpeed = writeSpeed;
        this.powerConsumption = powerConsumption;
    }

    public void setKapasitasGb(int kapasitasGb) {
        this.kapasitasGb = kapasitasGb;
    }

    public void setReadSpeed(int readSpeed) {
        this.readSpeed = readSpeed;
    }

    public void setWriteSpeed(int writeSpeed) {
        this.writeSpeed = writeSpeed;
    }

    public void setPowerConsumption(int watts) {
        this.powerConsumption = watts;
    }

    public int getKapasitasGb() {
        return kapasitasGb;
    }

    public int getReadSpeed() {
        return readSpeed;
    }

    public int getWriteSpeed() {
        return writeSpeed;
    }

    public int getPowerConsumption() {
        return powerConsumption;
    }

    public abstract String getDriveType();

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Storage: " + kapasitasGb + "GB, Read: " + readSpeed + "MB/s, Write: " + writeSpeed + "MB/s");
        System.out.println("Power Consumption: " + powerConsumption + "W");
    }
}
