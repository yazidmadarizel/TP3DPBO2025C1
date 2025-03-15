public class Motherboard extends Komponen {
    private String formFactor;
    private String chipset;
    private String socket;
    private int maxRamCapacity;
    private int ramSlots;
    private int pcieSlots;
    private int sataConnectors;
    private int m2Slots;
    private int powerConsumption;

    public Motherboard() {
        super();
        this.formFactor = "";
        this.chipset = "";
        this.socket = "";
        this.maxRamCapacity = 0;
        this.ramSlots = 0;
        this.pcieSlots = 0;
        this.sataConnectors = 0;
        this.m2Slots = 0;
        this.powerConsumption = 0;
    }

    public Motherboard(String id, int warrantyMonths, String merk, String nama, double harga, 
                       String formFactor, String chipset, String socket, int maxRamCapacity,
                       int ramSlots, int pcieSlots, int sataConnectors, int m2Slots, int powerConsumption) {
        super(id, warrantyMonths, merk, nama, harga);
        this.formFactor = formFactor;
        this.chipset = chipset;
        this.socket = socket;
        this.maxRamCapacity = maxRamCapacity;
        this.ramSlots = ramSlots;
        this.pcieSlots = pcieSlots;
        this.sataConnectors = sataConnectors;
        this.m2Slots = m2Slots;
        this.powerConsumption = powerConsumption;
    }

    public void setFormFactor(String formFactor) {
        this.formFactor = formFactor;
    }

    public void setChipset(String chipset) {
        this.chipset = chipset;
    }

    public void setSocket(String socket) {
        this.socket = socket;
    }

    public void setMaxRamCapacity(int maxRamCapacity) {
        this.maxRamCapacity = maxRamCapacity;
    }

    public void setRamSlots(int ramSlots) {
        this.ramSlots = ramSlots;
    }

    public void setPcieSlots(int pcieSlots) {
        this.pcieSlots = pcieSlots;
    }

    public void setSataConnectors(int sataConnectors) {
        this.sataConnectors = sataConnectors;
    }

    public void setM2Slots(int m2Slots) {
        this.m2Slots = m2Slots;
    }

    public void setPowerConsumption(int powerConsumption) {
        this.powerConsumption = powerConsumption;
    }

    public String getFormFactor() {
        return formFactor;
    }

    public String getChipset() {
        return chipset;
    }

    public String getSocket() {
        return socket;
    }

    public int getMaxRamCapacity() {
        return maxRamCapacity;
    }

    public int getRamSlots() {
        return ramSlots;
    }

    public int getPcieSlots() {
        return pcieSlots;
    }

    public int getSataConnectors() {
        return sataConnectors;
    }

    public int getM2Slots() {
        return m2Slots;
    }

    public int getPowerConsumption() {
        return powerConsumption;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Motherboard Specs: " + formFactor + ", " + chipset + ", Socket " + socket);
        System.out.println("Max RAM: " + maxRamCapacity + "GB, RAM Slots: " + ramSlots);
        System.out.println("PCIe Slots: " + pcieSlots + ", SATA: " + sataConnectors + ", M.2: " + m2Slots);
        System.out.println("Power Consumption: " + powerConsumption + "W");
    }
}
