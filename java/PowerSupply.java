public class PowerSupply extends Komponen {
    private int wattage;
    private String certification;
    private boolean modular;

    public PowerSupply() {
        super();
        this.wattage = 0;
        this.certification = "";
        this.modular = false;
    }

    public PowerSupply(String id, int warrantyMonths, String merk, String nama, double harga,
                       int wattage, String certification, boolean modular) {
        super(id, warrantyMonths, merk, nama, harga);
        this.wattage = wattage;
        this.certification = certification;
        this.modular = modular;
    }

    public void setWattage(int wattage) {
        this.wattage = wattage;
    }

    public void setCertification(String certification) {
        this.certification = certification;
    }

    public void setModular(boolean modular) {
        this.modular = modular;
    }

    public int getWattage() {
        return wattage;
    }

    public String getCertification() {
        return certification;
    }

    public boolean isModular() {
        return modular;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("PSU Specs: " + wattage + "W, " + certification + " certified");
        System.out.println("Modular: " + (modular ? "Yes" : "No"));
    }
}
