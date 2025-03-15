public class CPU extends Komponen {
    private int jumlahCore;
    private double kecepatanGhz;
    private String socket;
    private boolean hasIntegratedGraphics;
    private int powerConsumption;

    public CPU() {
        super();
        this.jumlahCore = 0;
        this.kecepatanGhz = 0.0;
        this.socket = "";
        this.hasIntegratedGraphics = false;
        this.powerConsumption = 0;
    }

    public CPU(String id, int warrantyMonths, String merk, String nama, double harga,
               int jumlahCore, double kecepatanGhz, String socket, boolean hasIntegratedGraphics, int powerConsumption) {
        super(id, warrantyMonths, merk, nama, harga);
        this.jumlahCore = jumlahCore;
        this.kecepatanGhz = kecepatanGhz;
        this.socket = socket;
        this.hasIntegratedGraphics = hasIntegratedGraphics;
        this.powerConsumption = powerConsumption;
    }

    public void setJumlahCore(int jumlahCore) {
        this.jumlahCore = jumlahCore;
    }

    public void setKecepatanGhz(double kecepatanGhz) {
        this.kecepatanGhz = kecepatanGhz;
    }

    public void setSocket(String socket) {
        this.socket = socket;
    }

    public void setHasIntegratedGraphics(boolean hasIntegratedGraphics) {
        this.hasIntegratedGraphics = hasIntegratedGraphics;
    }

    public void setPowerConsumption(int powerConsumption) {
        this.powerConsumption = powerConsumption;
    }

    public int getJumlahCore() {
        return jumlahCore;
    }

    public double getKecepatanGhz() {
        return kecepatanGhz;
    }

    public String getSocket() {
        return socket;
    }

    public boolean hasIntegratedGraphics() {
        return hasIntegratedGraphics;
    }

    public int getPowerConsumption() {
        return powerConsumption;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("CPU Specs: " + jumlahCore + " Core, " + kecepatanGhz + "GHz, Socket: " + socket);
        System.out.println("Integrated Graphics: " + (hasIntegratedGraphics ? "Yes" : "No"));
        System.out.println("Power Consumption: " + powerConsumption + "W");
    }
}
