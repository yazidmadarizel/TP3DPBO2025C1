import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Motherboard mobo = new Motherboard("MB001", 36, "ASUS", "ROG Strix Z790-E Gaming", 4999000, "ATX", "Z790", "LGA1700", 128, 4, 3, 6, 2, 15);
        CPU cpu = new CPU("CPU001", 36, "Intel", "Core i9-14900K", 8299000, 24, 6, "LGA1700", true, 125);
        RAM ram1 = new RAM("RAM001", 24, "Corsair", "Vengeance RGB Pro", 1799000, 32, "DDR5", 6000, 3);
        RAM ram2 = new RAM("RAM002", 24, "Corsair", "Vengeance RGB Pro", 1799000, 32, "DDR5", 6000, 3);
        SSD storage1 = new SSD("SSD001", 60, "Samsung", "980 PRO", 2499000, 2000, 7000, 5000, 8, "PCIe 4.0 NVMe", "V-NAND");
        HardDrive storage2 = new HardDrive("HDD001", 24, "Seagate", "Barracuda", 899000, 4000, 210, 190, 5, 7200, 256);
        GPU gpu = new GPU("GPU001", 36, "NVIDIA", "GeForce RTX 4090", 29999000, 24, 16384, "Ada Lovelace", 450, 4500, "Triple Fan");
        PowerSupply psu = new PowerSupply("PSU001", 60, "Corsair", "RM1000x", 2899000, 1000, "80+ Gold", true);
        Case casing = new Case("CASE001", 24, "Lian Li", "PC-O11 Dynamic", 2199000, "Mid Tower", Arrays.asList("ATX", "Micro-ATX", "Mini-ITX"), 9, true);
        Cooling cpuCooler = new Cooling("COOL001", 72, "Noctua", "NH-D15", 1499000, "Air", 1500, "Dual Tower", 5);
        Cooling caseFan1 = new Cooling("FAN001", 24, "Lian Li", "Uni Fan SL120", 299000, "Air", 1900, "RGB Fan", 3);
        Cooling caseFan2 = new Cooling("FAN002", 24, "Lian Li", "Uni Fan SL120", 299000, "Air", 1900, "RGB Fan", 3);
        Cooling caseFan3 = new Cooling("FAN003", 24, "Lian Li", "Uni Fan SL120", 299000, "Air", 1900, "RGB Fan", 3);

        Komputer computer = new Komputer("Gaming PC 2025", "High-End Gaming", mobo, cpu, 
    Arrays.asList(ram1, ram2), 
    Arrays.asList(storage1, storage2), 
    Arrays.asList(gpu), 
    psu, 
    casing, 
    Arrays.asList(cpuCooler, caseFan1, caseFan2, caseFan3));

        computer.displayInfo();
    }
}
