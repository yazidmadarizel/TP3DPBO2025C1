public class SSD extends StorageDrive {
    private String interfaceType;
    private String nandType;

    public SSD() {
        super();
        this.interfaceType = "";
        this.nandType = "";
    }

    public SSD(String id, int warrantyMonths, String merk, String nama, double harga,
               int kapasitasGB, int readSpeed, int writeSpeed, int powerConsumption,
               String interfaceType, String nandType) {
        super(id, warrantyMonths, merk, nama, harga, kapasitasGB, readSpeed, writeSpeed, powerConsumption);
        this.interfaceType = interfaceType;
        this.nandType = nandType;
    }

    public void setInterfaceType(String interfaceType) {
        this.interfaceType = interfaceType;
    }

    public void setNandType(String nandType) {
        this.nandType = nandType;
    }

    public String getInterfaceType() {
        return interfaceType;
    }

    public String getNandType() {
        return nandType;
    }

    @Override
    public String getDriveType() {
        return "SSD";
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Drive Type: SSD, Interface: " + interfaceType + ", NAND Type: " + nandType);
    }
}
