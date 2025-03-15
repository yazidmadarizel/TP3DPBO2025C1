import java.util.ArrayList;
import java.util.List;

public class Komputer {
    private String nama;
    private String kategori;
    private Komponen motherboard;
    private Komponen cpu;
    private List<Komponen> ramList;
    private List<Komponen> storageList;
    private List<Komponen> gpuList;
    private Komponen powerSupply;
    private Komponen casing;
    private List<Komponen> coolingList;
    private double totalHarga;
    private int totalPowerConsumption;

    public Komputer() {
        this.nama = "";
        this.kategori = "";
        this.motherboard = null;
        this.cpu = null;
        this.ramList = new ArrayList<>();
        this.storageList = new ArrayList<>();
        this.gpuList = new ArrayList<>();
        this.powerSupply = null;
        this.casing = null;
        this.coolingList = new ArrayList<>();
        this.totalHarga = 0.0;
        this.totalPowerConsumption = 0;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }

    public Komputer(String nama, String kategori, Komponen motherboard, Komponen cpu, List<Komponen> ramList,
                    List<Komponen> storageList, List<Komponen> gpuList, Komponen powerSupply, Komponen casing,
                    List<Komponen> coolingList) {
        this.nama = nama;
        this.kategori = kategori;
        this.motherboard = motherboard;
        this.cpu = cpu;
        this.ramList = (ramList != null) ? new ArrayList<>(ramList) : new ArrayList<>();
        this.storageList = (storageList != null) ? new ArrayList<>(storageList) : new ArrayList<>();
        this.gpuList = (gpuList != null) ? new ArrayList<>(gpuList) : new ArrayList<>();
        this.powerSupply = powerSupply;
        this.casing = casing;
        this.coolingList = (coolingList != null) ? new ArrayList<>(coolingList) : new ArrayList<>();
        this.totalHarga = 0.0;
        this.totalPowerConsumption = 0;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }

    public void calculateTotalHarga() {
        totalHarga = 0.0;
        if (motherboard != null) totalHarga += motherboard.getHarga();
        if (cpu != null) totalHarga += cpu.getHarga();
        for (Komponen ram : ramList) totalHarga += ram.getHarga();
        for (Komponen storage : storageList) totalHarga += storage.getHarga();
        for (Komponen gpu : gpuList) totalHarga += gpu.getHarga();
        if (powerSupply != null) totalHarga += powerSupply.getHarga();
        if (casing != null) totalHarga += casing.getHarga();
        for (Komponen cooling : coolingList) totalHarga += cooling.getHarga();
    }

    public void calculateTotalPowerConsumption() {
        totalPowerConsumption = 0;
        if (motherboard != null) totalPowerConsumption += motherboard.getPowerConsumption();
        if (cpu != null) totalPowerConsumption += cpu.getPowerConsumption();
        for (Komponen ram : ramList) totalPowerConsumption += ram.getPowerConsumption();
        for (Komponen storage : storageList) totalPowerConsumption += storage.getPowerConsumption();
        for (Komponen gpu : gpuList) totalPowerConsumption += gpu.getPowerConsumption();
        for (Komponen cooling : coolingList) totalPowerConsumption += cooling.getPowerConsumption();
    }

    public boolean isPowerSufficient() {
        return powerSupply != null && powerSupply.getWattage() >= totalPowerConsumption;
    }

    private String repeat(String s, int count) {
        return String.join("", java.util.Collections.nCopies(count, s));
    }
    

    public void displayInfo() {
        System.out.println(repeat("=", 50));

        System.out.println("COMPUTER INFORMATION");
        System.out.println(repeat("=", 50));

        System.out.println("Name: " + nama);
        System.out.println("Category: " + kategori);
        System.out.printf("Total Price: Rp%,.0f%n", totalHarga);
        System.out.println("Total Power Consumption: " + totalPowerConsumption + "W");
        System.out.println("Power Supply Sufficient: " + (isPowerSufficient() ? "Yes" : "No"));
        System.out.println();

        if (motherboard != null) {
            System.out.println("MOTHERBOARD:");
            motherboard.displayInfo();
            System.out.println();
        }

        if (cpu != null) {
            System.out.println("CPU:");
            cpu.displayInfo();
            System.out.println();
        }

        System.out.println("RAM MODULES (" + ramList.size() + "):");
        int i = 1;
        for (Komponen ram : ramList) {
            System.out.println("RAM " + i++ + ":");
            ram.displayInfo();
            System.out.println();
        }

        System.out.println("STORAGE DEVICES (" + storageList.size() + "):");
        i = 1;
        for (Komponen storage : storageList) {
            System.out.println("Storage " + i++ + " (" + storage.getDriveType() + "):");
            storage.displayInfo();
            System.out.println();
        }

        System.out.println("GRAPHICS CARDS (" + gpuList.size() + "):");
        i = 1;
        for (Komponen gpu : gpuList) {
            System.out.println("GPU " + i++ + ":");
            gpu.displayInfo();
            System.out.println();
        }

        if (powerSupply != null) {
            System.out.println("POWER SUPPLY:");
            powerSupply.displayInfo();
            System.out.println();
        }

        if (casing != null) {
            System.out.println("CASE:");
            casing.displayInfo();
            System.out.println();
        }

        System.out.println("COOLING SYSTEMS (" + coolingList.size() + "):");
        i = 1;
        for (Komponen cooling : coolingList) {
            System.out.println("Cooling " + i++ + ":");
            cooling.displayInfo();
            System.out.println();
        }

        System.out.println(repeat("=", 50));

    }
}
