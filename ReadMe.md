# TP2DPBO2025C1

Saya Yazid Madarizel dengan NIM 2305328 mengerjakan soal TP 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

### ** Desain Program**

Program ini dirancang untuk merepresentasikan sebuah komputer dan komponennya dengan konsep Pemrograman Berorientasi Objek (OOP). Berikut adalah alur utama program:

1. **Pembuatan Kelas Dasar dan Interface**  
   - `BaseComponent` adalah kelas dasar yang memiliki atribut umum seperti `id` dan `warrantyMonths`.  
   - `Komponen` merupakan kelas turunan dari `BaseComponent` yang memiliki atribut tambahan seperti `merk`, `nama`, dan `harga`.

2. **Pewarisan Kelas (Hierarchical & Hybrid Inheritance)**  
   - `StorageDrive` merupakan kelas abstrak yang memiliki dua turunan konkret: `Harddrive` dan `SSD`.  
   - `Komponen` diwarisi oleh berbagai kelas seperti `CPU`, `GPU`, `Ram`, `Motherboard`, `PowerSupply`, `Case`, dan `Cooling`.

3. **Komposisi dalam Kelas `Komputer`**  
   - `Komputer` adalah kelas yang mengandung berbagai komponen komputer melalui komposisi, termasuk `CPU`, `GPU`, `RAM`, `Motherboard`, `PowerSupply`, dan `Case`.  
   - Komponen yang bisa lebih dari satu (misalnya RAM, StorageDrive, GPU, dan Cooling) disimpan dalam array (vector).

4. **Fungsi Utama dalam `Komputer`**  
   - `calculateTotalHarga()`: Menghitung total harga dari seluruh komponen.  
   - `calculateTotalPowerConsumption()`: Menghitung total konsumsi daya dari seluruh komponen.  
   - `isPowerSufficient()`: Memeriksa apakah daya PSU cukup untuk seluruh komponen.  
   - `displayInfo()`: Menampilkan spesifikasi lengkap komputer.

---

### ** Desain Diagram **

![tp3-diagram](https://github.com/user-attachments/assets/3cbcac09-da8d-455a-a3fe-9fa9eb9e85f1)

### ** Dokumentasi **

![dokumentasi cpp 1](https://github.com/user-attachments/assets/95531c58-6b9e-416d-9d4e-c73f0eb32ead)


