from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, id="", warranty_months=0, merk="", nama="", harga=0.0,
                 jumlah_core=0, kecepatan_ghz=0.0, socket="", has_integrated_graphics=False, power_consumption=0):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz
        self.socket = socket
        self.has_integrated_graphics = has_integrated_graphics
        self.power_consumption = power_consumption

    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core

    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.kecepatan_ghz = kecepatan_ghz

    def set_socket(self, socket):
        self.socket = socket

    def set_has_integrated_graphics(self, has_integrated_graphics):
        self.has_integrated_graphics = has_integrated_graphics

    def set_power_consumption(self, watts):
        self.power_consumption = watts

    def get_jumlah_core(self):
        return self.jumlah_core

    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz

    def get_socket(self):
        return self.socket

    def get_has_integrated_graphics(self):
        return self.has_integrated_graphics

    def get_power_consumption(self):
        return self.power_consumption

    def display_info(self):
        super().display_info()
        print(f"CPU Specs: {self.jumlah_core} Core, {self.kecepatan_ghz}GHz, Socket: {self.socket}")
        print(f"Integrated Graphics: {'Yes' if self.has_integrated_graphics else 'No'}")
        print(f"Power Consumption: {self.power_consumption}W")

