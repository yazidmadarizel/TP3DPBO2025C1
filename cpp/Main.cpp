#include <iostream>
#include <vector>
#include <memory>
#include "Komputer.cpp"

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    // Create motherboard
    Motherboard mobo("MB001", 36, "ASUS", "ROG Strix Z790-E Gaming", 4999000,
                    "ATX", "Z790", "LGA1700", 128, 4, 3, 6, 2, 15);
    
    // Create CPU
    Cpu cpu("CPU001", 36, "Intel", "Core i9-14900K", 8299000,
            24, 5.8, "LGA1700", true, 125);
    
    // Create RAM modules
    Ram ram1("RAM001", 24, "Corsair", "Vengeance RGB Pro", 1799000,
             32, "DDR5", 6000, 3);
    Ram ram2("RAM002", 24, "Corsair", "Vengeance RGB Pro", 1799000,
             32, "DDR5", 6000, 3);
    
    // Create storage drives
    SSD* ssd = new SSD("SSD001", 60, "Samsung", "980 PRO", 2499000,
                      2000, 7000, 5000, 8, "PCIe 4.0 NVMe", "V-NAND");
    
    Harddrive* hdd = new Harddrive("HDD001", 24, "Seagate", "Barracuda", 899000,
                                 4000, 210, 190, 5, 7200, 256);
    
    // Create GPU
    GPU gpu("GPU001", 36, "NVIDIA", "GeForce RTX 4090", 29999000,
            24, 16384, "Ada Lovelace", 450, 4500, "Triple Fan");
    
    // Create power supply
    PowerSupply psu("PSU001", 60, "Corsair", "RM1000x", 2899000,
                   1000, "80+ Gold", true);
    
    // Create case
    Case casing("CASE001", 24, "Lian Li", "PC-O11 Dynamic", 2199000,
               "Mid Tower", {"ATX", "Micro-ATX", "Mini-ITX"}, 9, true);
    
    // Create cooling systems
    Cooling cpuCooler("COOL001", 72, "Noctua", "NH-D15", 1499000,
                     "Air", 1500, "Dual Tower", 5);
    
    Cooling caseFan1("FAN001", 24, "Lian Li", "Uni Fan SL120", 299000,
                    "Air", 1900, "RGB Fan", 3);
    
    Cooling caseFan2("FAN002", 24, "Lian Li", "Uni Fan SL120", 299000,
                    "Air", 1900, "RGB Fan", 3);
    
    Cooling caseFan3("FAN003", 24, "Lian Li", "Uni Fan SL120", 299000,
                    "Air", 1900, "RGB Fan", 3);
    
    // Create computer
    Komputer gaming("Gaming PC 2025", "High-End Gaming", mobo, cpu, 
                  {ram1, ram2}, {ssd, hdd}, {gpu}, psu, casing, 
                  {cpuCooler, caseFan1, caseFan2, caseFan3});
    
    // Display all information
    gaming.displayInfo();
    
    // No need to delete storage drives manually as the Komputer destructor will handle it
    
    return 0;
}