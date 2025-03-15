public class GPU extends Komponen {
    private int vram;
    private int cudaCores;
    private String architecture;
    private int powerConsumption;
    private int coolingCapacity;
    private String coolingType;

    public GPU() {
        super();
        this.vram = 0;
        this.cudaCores = 0;
        this.architecture = "";
        this.powerConsumption = 0;
        this.coolingCapacity = 0;
        this.coolingType = "";
    }

    public GPU(String id, int warrantyMonths, String merk, String nama, double harga,
               int vram, int cudaCores, String architecture, int powerConsumption,
               int coolingCapacity, String coolingType) {
        super(id, warrantyMonths, merk, nama, harga);
        this.vram = vram;
        this.cudaCores = cudaCores;
        this.architecture = architecture;
        this.powerConsumption = powerConsumption;
        this.coolingCapacity = coolingCapacity;
        this.coolingType = coolingType;
    }

    public void setVram(int vram) {
        this.vram = vram;
    }

    public void setCudaCores(int cudaCores) {
        this.cudaCores = cudaCores;
    }

    public void setArchitecture(String architecture) {
        this.architecture = architecture;
    }

    public void setPowerConsumption(int powerConsumption) {
        this.powerConsumption = powerConsumption;
    }

    public void setCoolingCapacity(int coolingCapacity) {
        this.coolingCapacity = coolingCapacity;
    }

    public void setCoolingType(String coolingType) {
        this.coolingType = coolingType;
    }

    public int getVram() {
        return vram;
    }

    public int getCudaCores() {
        return cudaCores;
    }

    public String getArchitecture() {
        return architecture;
    }

    public int getPowerConsumption() {
        return powerConsumption;
    }

    public int getCoolingCapacity() {
        return coolingCapacity;
    }

    public String getCoolingType() {
        return coolingType;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("GPU Specs: " + vram + "GB VRAM, " + cudaCores + " CUDA Cores, " + architecture + " architecture");
        System.out.println("Power Consumption: " + powerConsumption + "W");
        System.out.println("Cooling: " + coolingType + ", Capacity: " + coolingCapacity + " RPM");
    }
}
