# TP3DPBO2025C1

Saya Yazid Madarizel dengan NIM 2305328 mengerjakan soal TP 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

### **Desain Program**  
**Sistem Manajemen Komputer**  

#### **Kelas Dasar dan Interface**  
- `BaseComponent` adalah kelas dasar yang menyimpan informasi umum untuk semua komponen komputer.  
  - **Atribut**: `id`, `warrantyMonths`.  
  - **Metode**: Getter dan setter untuk atribut tersebut.  
- `Komponen` merupakan turunan dari `BaseComponent` yang berisi informasi lebih spesifik terkait komponen komputer.  
  - **Atribut**: `merk`, `nama`, `harga`.  
  - **Metode**: Getter dan setter untuk setiap atribut.  

#### **Pewarisan Kelas (Hierarchical & Hybrid Inheritance)**  
1. **Penyimpanan Data (`StorageDrive`)**  
   - `StorageDrive` adalah kelas abstrak yang berisi atribut umum untuk media penyimpanan.  
     - **Atribut**: `kapasitasGB`, `kecepatanMBps`.  
   - **Turunan dari `StorageDrive`**:  
     - `Harddrive`  
       - **Tambahan Atribut**: `rpm`.  
       - **Metode**: Menampilkan kecepatan baca/tulis berbasis RPM.  
     - `SSD`  
       - **Tambahan Atribut**: `tipeNANDFlash`.  
       - **Metode**: Menampilkan informasi teknologi flash yang digunakan.  

2. **Komponen Dasar Komputer** (Turunan dari `Komponen`)  
   - `CPU`  
     - **Atribut**: `coreCount`, `clockSpeedGHz`, `powerConsumptionWatt`.  
   - `GPU`  
     - **Atribut**: `vramGB`, `powerConsumptionWatt`.  
   - `RAM`  
     - **Atribut**: `kapasitasGB`, `kecepatanMHz`.  
   - `Motherboard`  
     - **Atribut**: `chipset`, `socketType`.  
   - `PowerSupply`  
     - **Atribut**: `totalPowerWatt`.  
   - `Case`  
     - **Atribut**: `formFactor`, `jumlahSlotDrive`.  
   - `Cooling`  
     - **Atribut**: `tipePendingin` (misalnya Air Cooling, Liquid Cooling).  

#### **Komposisi dalam Kelas `Komputer`**  
- `Komputer` adalah kelas yang menyusun berbagai komponen dengan pendekatan komposisi.  
  - **Atribut**:  
    - `cpu` (objek dari kelas `CPU`).  
    - `motherboard` (objek dari kelas `Motherboard`).  
    - `powerSupply` (objek dari kelas `PowerSupply`).  
    - `case` (objek dari kelas `Case`).  
    - `ramList` (array `vector<RAM>` karena bisa lebih dari satu).  
    - `gpuList` (array `vector<GPU>` untuk mendukung multi-GPU).  
    - `storageList` (array `vector<StorageDrive>` untuk kombinasi HDD dan SSD).  
    - `coolingList` (array `vector<Cooling>` untuk pendinginan tambahan).  
  - **Metode**:  
    - `calculateTotalHarga()`: Menghitung total harga seluruh komponen.  
    - `calculateTotalPowerConsumption()`: Menghitung total konsumsi daya.  
    - `isPowerSufficient()`: Memeriksa apakah daya PSU mencukupi.  
    - `displayInfo()`: Menampilkan spesifikasi lengkap komputer.  

---

### **Alur Program**  
1. **Pembuatan Objek Komponen**  
   - Pengguna dapat membuat objek `CPU`, `GPU`, `RAM`, `Motherboard`, `StorageDrive`, `PowerSupply`, `Case`, dan `Cooling`.  
   - Setiap komponen akan memiliki spesifikasi unik dan dapat disimpan dalam koleksi (`vector`) jika lebih dari satu.  

2. **Penyusunan Komputer**  
   - Pengguna dapat menyusun sebuah `Komputer` dengan memilih berbagai komponen yang tersedia.  
   - Setiap komponen harus kompatibel (misalnya CPU harus cocok dengan socket motherboard).  

3. **Perhitungan dan Validasi**  
   - Setelah komputer dirakit, program akan menghitung total harga dan total konsumsi daya.  
   - Program akan memeriksa apakah daya PSU cukup untuk seluruh komponen.  

4. **Menampilkan Informasi Komputer**  
   - Pengguna dapat melihat spesifikasi lengkap komputer yang telah dirakit, termasuk daftar komponen, harga total, dan status kecukupan daya.  

---

### Desain Diagram

![tp3-diagram](https://github.com/user-attachments/assets/3cbcac09-da8d-455a-a3fe-9fa9eb9e85f1)

### Dokumentasi C++

![dokumentasi cpp 1](https://github.com/user-attachments/assets/95531c58-6b9e-416d-9d4e-c73f0eb32ead)

![dokumentasi cpp 2](https://github.com/user-attachments/assets/e4407556-7a52-4cdf-a9a0-0677dae1ee2f)



