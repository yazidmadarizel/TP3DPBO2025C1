class Komputer:
    def __init__(self, nama="", kategori="", motherboard=None, cpu=None,
                 ram_list=None, storage_list=None, gpu_list=None,
                 power_supply=None, casing=None, cooling_list=None):
        self.nama = nama
        self.kategori = kategori
        self.motherboard = motherboard
        self.cpu = cpu
        self.ram_list = ram_list if ram_list is not None else []
        self.storage_list = storage_list if storage_list is not None else []
        self.gpu_list = gpu_list if gpu_list is not None else []
        self.power_supply = power_supply
        self.casing = casing
        self.cooling_list = cooling_list if cooling_list is not None else []
        self.total_harga = 0.0
        self.total_power_consumption = 0
        self.calculate_total_harga()
        self.calculate_total_power_consumption()
    
    def calculate_total_harga(self):
        self.total_harga = 0.0
        if self.motherboard:
            self.total_harga += self.motherboard.get_harga()
        if self.cpu:
            self.total_harga += self.cpu.get_harga()
        self.total_harga += sum(ram.get_harga() for ram in self.ram_list)
        self.total_harga += sum(storage.get_harga() for storage in self.storage_list)
        self.total_harga += sum(gpu.get_harga() for gpu in self.gpu_list)
        if self.power_supply:
            self.total_harga += self.power_supply.get_harga()
        if self.casing:
            self.total_harga += self.casing.get_harga()
        self.total_harga += sum(cooling.get_harga() for cooling in self.cooling_list)
    
    def calculate_total_power_consumption(self):
        self.total_power_consumption = 0
        if self.motherboard:
            self.total_power_consumption += self.motherboard.get_power_consumption()
        if self.cpu:
            self.total_power_consumption += self.cpu.get_power_consumption()
        self.total_power_consumption += sum(ram.get_power_consumption() for ram in self.ram_list)
        self.total_power_consumption += sum(storage.get_power_consumption() for storage in self.storage_list)
        self.total_power_consumption += sum(gpu.get_power_consumption() for gpu in self.gpu_list)
        self.total_power_consumption += sum(cooling.get_power_consumption() for cooling in self.cooling_list)
    
    def is_power_sufficient(self):
        return self.power_supply and self.power_supply.get_wattage() >= self.total_power_consumption
    
    def display_info(self):
        print("=" * 50)
        print("COMPUTER INFORMATION")
        print("=" * 50)
        print(f"Name: {self.nama}")
        print(f"Category: {self.kategori}")
        print(f"Total Price: Rp{self.total_harga:,.0f}")
        print(f"Total Power Consumption: {self.total_power_consumption}W")
        print(f"Power Supply Sufficient: {'Yes' if self.is_power_sufficient() else 'No'}")
        print()
        
        if self.motherboard:
            print("MOTHERBOARD:")
            self.motherboard.display_info()
            print()
        
        if self.cpu:
            print("CPU:")
            self.cpu.display_info()
            print()
        
        print(f"RAM MODULES ({len(self.ram_list)}):")
        for i, ram in enumerate(self.ram_list, 1):
            print(f"RAM {i}:")
            ram.display_info()
            print()
        
        print(f"STORAGE DEVICES ({len(self.storage_list)}):")
        for i, storage in enumerate(self.storage_list, 1):
            print(f"Storage {i} ({storage.get_drive_type()}):")
            storage.display_info()
            print()
        
        print(f"GRAPHICS CARDS ({len(self.gpu_list)}):")
        for i, gpu in enumerate(self.gpu_list, 1):
            print(f"GPU {i}:")
            gpu.display_info()
            print()
        
        if self.power_supply:
            print("POWER SUPPLY:")
            self.power_supply.display_info()
            print()
        
        if self.casing:
            print("CASE:")
            self.casing.display_info()
            print()
        
        print(f"COOLING SYSTEMS ({len(self.cooling_list)}):")
        for i, cooling in enumerate(self.cooling_list, 1):
            print(f"Cooling {i}:")
            cooling.display_info()
            print()
        
        print("=" * 50)
