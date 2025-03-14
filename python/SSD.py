from StorageDrive import StorageDrive

class SSD(StorageDrive):
    def __init__(self, id='', warranty_months=0, merk='', nama='', harga=0.0,
                 kapasitas_gb=0, read_speed=0, write_speed=0, power_consumption=0,
                 interface='', nand_type=''):
        super().__init__(id, warranty_months, merk, nama, harga,
                         kapasitas_gb, read_speed, write_speed, power_consumption)
        self.interface = interface
        self.nand_type = nand_type

    def set_interface(self, interface):
        self.interface = interface
    
    def set_nand_type(self, nand_type):
        self.nand_type = nand_type
    
    def get_interface(self):
        return self.interface
    
    def get_nand_type(self):
        return self.nand_type
    
    def get_drive_type(self):
        return "SSD"
    
    def display_info(self):
        super().display_info()
        print(f"Drive Type: SSD, Interface: {self.interface}, NAND Type: {self.nand_type}")
