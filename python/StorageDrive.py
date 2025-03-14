from Komponen import Komponen

class StorageDrive(Komponen):
    def __init__(self, id="", warranty_months=0, merk="", nama="", harga=0.0,
                 kapasitas_gb=0, read_speed=0, write_speed=0, power_consumption=0):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.kapasitas_gb = kapasitas_gb
        self.read_speed = read_speed
        self.write_speed = write_speed
        self.power_consumption = power_consumption
    
    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb
    
    def set_read_speed(self, read_speed):
        self.read_speed = read_speed
    
    def set_write_speed(self, write_speed):
        self.write_speed = write_speed
    
    def set_power_consumption(self, watts):
        self.power_consumption = watts
    
    def get_kapasitas_gb(self):
        return self.kapasitas_gb
    
    def get_read_speed(self):
        return self.read_speed
    
    def get_write_speed(self):
        return self.write_speed
    
    def get_power_consumption(self):
        return self.power_consumption
    
    def get_drive_type(self):
        pass
    
    def display_info(self):
        super().display_info()
        print(f"Storage: {self.kapasitas_gb}GB, Read: {self.read_speed}MB/s, Write: {self.write_speed}MB/s")
        print(f"Power Consumption: {self.power_consumption}W")
