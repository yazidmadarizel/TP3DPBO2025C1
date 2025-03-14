from BaseComponent import BaseComponent

class Komponen(BaseComponent):
    def __init__(self, id='', warranty_months=0, merk='', nama='', harga=0.0):
        super().__init__(id, warranty_months)
        self.merk = merk
        self.nama = nama
        self.harga = harga

    def set_merk(self, merk):
        self.merk = merk

    def set_nama(self, nama):
        self.nama = nama

    def set_harga(self, harga):
        self.harga = harga

    def get_merk(self):
        return self.merk

    def get_nama(self):
        return self.nama

    def get_harga(self):
        return self.harga

    def display_info(self):
        super().display_info()
        print(f"Merk: {self.merk}, Nama: {self.nama}, Harga: Rp{self.harga}")
