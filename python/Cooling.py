from Komponen import Komponen

class Cooling(Komponen):
    def __init__(self, id="", warranty_months=0, merk="", nama="", harga=0.0,
                 type="", cooling_capacity=0, cooling_type="", power_consumption=0):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.type = type
        self.cooling_capacity = cooling_capacity
        self.cooling_type = cooling_type
        self.power_consumption = power_consumption

    def set_type(self, type):
        self.type = type

    def set_cooling_capacity(self, capacity):
        self.cooling_capacity = capacity

    def set_cooling_type(self, cooling_type):
        self.cooling_type = cooling_type

    def set_power_consumption(self, watts):
        self.power_consumption = watts

    def get_type(self):
        return self.type

    def get_cooling_capacity(self):
        return self.cooling_capacity

    def get_cooling_type(self):
        return self.cooling_type

    def get_power_consumption(self):
        return self.power_consumption

    def display_info(self):
        super().display_info()
        print(f"Cooling Specs: {self.type}, Cooling Capacity: {self.cooling_capacity} RPM")
        print(f"Cooling Type: {self.cooling_type}")
        print(f"Power Consumption: {self.power_consumption}W")

