from Komponen import Komponen

class PowerSupply(Komponen):
    def __init__(self, id='', warranty_months=0, merk='', nama='', harga=0.0,
                 wattage=0, certification='', modular=False):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.wattage = wattage
        self.certification = certification
        self.modular = modular

    def set_wattage(self, wattage):
        self.wattage = wattage

    def set_certification(self, certification):
        self.certification = certification

    def set_modular(self, modular):
        self.modular = modular

    def get_wattage(self):
        return self.wattage

    def get_certification(self):
        return self.certification

    def is_modular(self):
        return self.modular

    def display_info(self):
        super().display_info()
        print(f"PSU Specs: {self.wattage}W, {self.certification} certified")
        print(f"Modular: {'Yes' if self.modular else 'No'}")