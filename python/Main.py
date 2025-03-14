from Motherboard import Motherboard
from Cpu import Cpu
from SSD import SSD
from Harddrive import Harddrive
from Ram import Ram
from StorageDrive import StorageDrive
from GPU import GPU
from PowerSupply import PowerSupply
from GPU import GPU
from PowerSupply import PowerSupply
from Case import Case
from Cooling import Cooling
from Komputer import Komputer
        
# Create components
mobo = Motherboard("MB001", 36, "ASUS", "ROG Strix Z790-E Gaming", 4999000, "ATX", "Z790", "LGA1700", 128, 4, 3, 6, 2, 15)
cpu = Cpu("CPU001", 36, "Intel", "Core i9-14900K", 8299000, 24, 6, "LGA1700", True, 125)
ram1 = Ram("RAM001", 24, "Corsair", "Vengeance RGB Pro", 1799000, 32, "DDR5", 6000, 3)
ram2 = Ram("RAM002", 24, "Corsair", "Vengeance RGB Pro", 1799000, 32, "DDR5", 6000, 3)
storage1 = SSD("SSD001", 60, "Samsung", "980 PRO", 2499000, 2000, 7000, 5000, 8, "PCIe 4.0 NVMe", "V-NAND")
storage2 = Harddrive("HDD001", 24, "Seagate", "Barracuda", 899000, 4000, 210, 190, 5, 7200, 256)
gpu = GPU("GPU001", 36, "NVIDIA", "GeForce RTX 4090", 29999000, 24, 16384, "Ada Lovelace", 450, 4500, "Triple Fan")
psu = PowerSupply("PSU001", 60, "Corsair", "RM1000x", 2899000, 1000, "80+ Gold", True)
casing = Case("CASE001", 24, "Lian Li", "PC-O11 Dynamic", 2199000, "Mid Tower", ["ATX", "Micro-ATX", "Mini-ITX"], 9, True)
cpuCooler = Cooling("COOL001", 72, "Noctua", "NH-D15", 1499000, "Air", 1500, "Dual Tower", 5)
caseFan1 = Cooling("FAN001", 24, "Lian Li", "Uni Fan SL120", 299000, "Air", 1900, "RGB Fan", 3)
caseFan2 = Cooling("FAN002", 24, "Lian Li", "Uni Fan SL120", 299000,"Air", 1900, "RGB Fan", 3)
caseFan3 = Cooling("FAN003", 24, "Lian Li", "Uni Fan SL120", 299000,"Air", 1900, "RGB Fan", 3)

# Create computer
computer = Komputer("Gaming PC 2025", "High-End Gaming", mobo, cpu, [ram1, ram2], [storage1, storage2], [gpu], psu, casing, [cpuCooler, caseFan1, caseFan2, caseFan3])
computer.display_info()
