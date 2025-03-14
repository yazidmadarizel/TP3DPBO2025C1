from Komponen import Komponen

class GPU(Komponen):
    def __init__(self, id=None, warranty_months=0, merk="", nama="", harga=0.0,
                 vram=0, cuda_cores=0, architecture="", power_consumption=0,
                 cooling_capacity=0, cooling_type=""):
        super().__init__(id, warranty_months, merk, nama, harga)
        self.vram = vram
        self.cuda_cores = cuda_cores
        self.architecture = architecture
        self.power_consumption = power_consumption
        self.cooling_capacity = cooling_capacity
        self.cooling_type = cooling_type

    def set_vram(self, vram):
        self.vram = vram

    def set_cuda_cores(self, cuda_cores):
        self.cuda_cores = cuda_cores

    def set_architecture(self, architecture):
        self.architecture = architecture

    def set_power_consumption(self, watts):
        self.power_consumption = watts

    def set_cooling_capacity(self, capacity):
        self.cooling_capacity = capacity

    def set_cooling_type(self, cooling_type):
        self.cooling_type = cooling_type

    def get_vram(self):
        return self.vram

    def get_cuda_cores(self):
        return self.cuda_cores

    def get_architecture(self):
        return self.architecture

    def get_power_consumption(self):
        return self.power_consumption

    def get_cooling_capacity(self):
        return self.cooling_capacity

    def get_cooling_type(self):
        return self.cooling_type

    def display_info(self):
        super().display_info()
        print(f"GPU Specs: {self.vram}GB VRAM, {self.cuda_cores} CUDA Cores, {self.architecture} architecture")
        print(f"Power Consumption: {self.power_consumption}W")
        print(f"Cooling: {self.cooling_type}, Capacity: {self.cooling_capacity} RPM")

    
