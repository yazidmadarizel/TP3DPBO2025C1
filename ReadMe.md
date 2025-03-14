### **Penjelasan Alur Program**

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
