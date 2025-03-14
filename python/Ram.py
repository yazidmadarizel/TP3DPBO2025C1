from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, id="", warranty_months=0, merk="", nama="", harga=0.0,
                 kapasitas_gb=0, ddr="", clock_speed=0, power_consumption=0):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.kapasitas_gb = kapasitas_gb
        self.ddr = ddr
        self.clock_speed = clock_speed
        self.power_consumption = power_consumption

    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb

    def set_ddr(self, ddr):
        self.ddr = ddr

    def set_clock_speed(self, clock_speed):
        self.clock_speed = clock_speed

    def set_power_consumption(self, watts):
        self.power_consumption = watts

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def get_ddr(self):
        return self.ddr

    def get_clock_speed(self):
        return self.clock_speed

    def get_power_consumption(self):
        return self.power_consumption

    def display_info(self):
        super().display_info()
        print(f"RAM Specs: {self.kapasitas_gb}GB {self.ddr}, {self.clock_speed}MHz")
        print(f"Power Consumption: {self.power_consumption}W")
