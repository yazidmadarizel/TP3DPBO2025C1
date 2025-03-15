public class Komponen extends BaseComponent {
    private String merk;
    private String nama;
    private double harga;
    private int powerConsumption;
    private int wattage;
    private String driveType;

    public Komponen() {
        super("", 0);
        this.merk = "";
        this.nama = "";
        this.harga = 0.0;
  
    }

    public Komponen(String id, int warrantyMonths, String merk, String nama, double harga) {
        super(id, warrantyMonths);
        this.merk = merk;
        this.nama = nama;
        this.harga = harga;

    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setHarga(double harga) {
        this.harga = harga;
    }

    public String getMerk() {
        return merk;
    }

    public String getNama() {
        return nama;
    }

    public double getHarga() {
        return harga;
    }

    public int getPowerConsumption() {  
        return powerConsumption;
    }

    public int getWattage() { 
        return wattage;
    }

    public String getDriveType() {
        return driveType;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Merk: " + merk + ", Nama: " + nama + ", Harga: Rp" + String.format("%,.0f", harga));
    }
}
