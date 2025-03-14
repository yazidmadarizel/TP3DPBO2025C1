from Komponen import Komponen

class Case(Komponen):
    def __init__(self, id="", warranty_months=0, merk="", nama="", harga=0.0,
                 form_factor="", supported_motherboards=None, fan_mounts=0, has_glass_panel=False):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.form_factor = form_factor
        self.supported_motherboards = supported_motherboards if supported_motherboards is not None else []
        self.fan_mounts = fan_mounts
        self.has_glass_panel = has_glass_panel

    def set_form_factor(self, form_factor):
        self.form_factor = form_factor

    def set_supported_motherboards(self, supported_motherboards):
        self.supported_motherboards = supported_motherboards

    def add_supported_motherboard(self, motherboard_type):
        self.supported_motherboards.append(motherboard_type)

    def set_fan_mounts(self, fan_mounts):
        self.fan_mounts = fan_mounts

    def set_has_glass_panel(self, has_glass_panel):
        self.has_glass_panel = has_glass_panel

    def get_form_factor(self):
        return self.form_factor

    def get_supported_motherboards(self):
        return self.supported_motherboards

    def get_fan_mounts(self):
        return self.fan_mounts

    def get_has_glass_panel(self):
        return self.has_glass_panel

    def display_info(self):
        super().display_info()
        print(f"Case Specs: {self.form_factor}, Fan Mounts: {self.fan_mounts}")
        print(f"Glass Panel: {'Yes' if self.has_glass_panel else 'No'}")
        print("Supported Motherboards: ", end="")
        print(", ".join(self.supported_motherboards))

