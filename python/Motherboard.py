from Komponen import Komponen

class Motherboard(Komponen):
    def __init__(self, id='', warranty_months=0, merk='', nama='', harga=0.0,
                 form_factor='', chipset='', socket='', max_ram_capacity=0,
                 ram_slots=0, pcie_slots=0, sata_connectors=0, m2_slots=0,
                 power_consumption=0):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.form_factor = form_factor
        self.chipset = chipset
        self.socket = socket
        self.max_ram_capacity = max_ram_capacity
        self.ram_slots = ram_slots
        self.pcie_slots = pcie_slots
        self.sata_connectors = sata_connectors
        self.m2_slots = m2_slots
        self.power_consumption = power_consumption

    def set_form_factor(self, form_factor):
        self.form_factor = form_factor

    def set_chipset(self, chipset):
        self.chipset = chipset

    def set_socket(self, socket):
        self.socket = socket

    def set_max_ram_capacity(self, max_ram_capacity):
        self.max_ram_capacity = max_ram_capacity

    def set_ram_slots(self, ram_slots):
        self.ram_slots = ram_slots

    def set_pcie_slots(self, pcie_slots):
        self.pcie_slots = pcie_slots

    def set_sata_connectors(self, sata_connectors):
        self.sata_connectors = sata_connectors

    def set_m2_slots(self, m2_slots):
        self.m2_slots = m2_slots

    def set_power_consumption(self, watts):
        self.power_consumption = watts

    def get_form_factor(self):
        return self.form_factor

    def get_chipset(self):
        return self.chipset

    def get_socket(self):
        return self.socket

    def get_max_ram_capacity(self):
        return self.max_ram_capacity

    def get_ram_slots(self):
        return self.ram_slots

    def get_pcie_slots(self):
        return self.pcie_slots

    def get_sata_connectors(self):
        return self.sata_connectors

    def get_m2_slots(self):
        return self.m2_slots

    def get_power_consumption(self):
        return self.power_consumption

    def display_info(self):
        super().display_info()
        print(f"Motherboard Specs: {self.form_factor}, {self.chipset}, Socket {self.socket}")
        print(f"Max RAM: {self.max_ram_capacity}GB, RAM Slots: {self.ram_slots}")
        print(f"PCIe Slots: {self.pcie_slots}, SATA: {self.sata_connectors}, M.2: {self.m2_slots}")
        print(f"Power Consumption: {self.power_consumption}W")