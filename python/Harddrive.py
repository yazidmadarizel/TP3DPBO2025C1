from StorageDrive import StorageDrive

class Harddrive(StorageDrive):
    def __init__(self, id='', warranty_months=0, merk='', nama='', harga=0.0,
                 kapasitas_gb=0, read_speed=0, write_speed=0, power_consumption=0,
                 rpm=0, cache_size=0):
        super().__init__(id, warranty_months, merk, nama, harga, kapasitas_gb, read_speed, write_speed, power_consumption)
        self.rpm = rpm
        self.cache_size = cache_size

    def set_rpm(self, rpm):
        self.rpm = rpm

    def set_cache_size(self, cache_size):
        self.cache_size = cache_size

    def get_rpm(self):
        return self.rpm

    def get_cache_size(self):
        return self.cache_size

    def get_drive_type(self):
        return "HDD"

    def display_info(self):
        super().display_info()
        print(f"Drive Type: HDD, RPM: {self.rpm}, Cache: {self.cache_size}MB")