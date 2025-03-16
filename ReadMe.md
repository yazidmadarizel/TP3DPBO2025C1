# TP3DPBO2025C1

Saya Yazid Madarizel dengan NIM 2305328 mengerjakan soal TP 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

# Desain Program - Sistem Komputer dan Komponennya

## Struktur Kelas Dasar

### Kelas BaseComponent
Kelas BaseComponent adalah kelas dasar yang berfungsi sebagai fondasi untuk semua komponen komputer. Atribut yang dimiliki kelas ini meliputi id yang menyimpan kode identifikasi unik komponen dan warrantyMonths yang menyimpan durasi garansi dalam bulan. Kelas ini menyediakan metode setter dan getter untuk mengakses dan memodifikasi data tersebut, serta metode displayInfo() untuk menampilkan informasi komponen. Kelas ini akan menjadi kelas induk bagi kelas Komponen.

### Kelas Komponen
Kelas Komponen adalah kelas turunan dari BaseComponent yang mengimplementasikan atribut tambahan yang lebih spesifik. Atribut yang dimiliki kelas ini antara lain merk yang menunjukkan merek dari komponen, nama yang mengindikasikan nama produk, dan harga yang menyimpan nilai ekonomi komponen tersebut. Kelas ini dilengkapi dengan metode setter dan getter untuk seluruh atribut, serta metode displayInfo() untuk menampilkan informasi komponen secara detail. Kelas Komponen ini menjadi kelas induk bagi berbagai kelas komponen spesifik seperti StorageDrive, CPU, GPU, dan lainnya.

## Kelas Komponen Komputer

### Kelas StorageDrive
Kelas StorageDrive adalah kelas abstrak yang merupakan turunan dari Komponen dan berfungsi untuk menyimpan data terkait media penyimpanan. Atribut yang dimiliki kelas ini meliputi kapasitasGB yang menunjukkan ukuran penyimpanan dalam gigabyte, readSpeed dan writeSpeed yang menunjukkan kecepatan baca dan tulis data, serta powerConsumption yang menunjukkan konsumsi daya. Kelas ini menyediakan metode abstrak getDriveType() dan displayInfo() yang harus diimplementasikan oleh kelas turunannya. StorageDrive akan menjadi kelas induk bagi dua kelas turunan, yaitu Harddrive dan SSD.

### Kelas Harddrive
Kelas Harddrive adalah turunan dari StorageDrive yang menyimpan informasi khusus tentang penyimpanan berbasis piringan magnetik. Atribut tambahan yang dimiliki oleh kelas ini adalah rpm yang menunjukkan kecepatan rotasi piringan dalam rotasi per menit dan cacheSize yang menunjukkan ukuran memori cache. Kelas ini mengimplementasikan metode getDriveType() untuk mengidentifikasi tipe drive sebagai "HDD" dan displayInfo() untuk menampilkan informasi spesifik tentang hard drive.

### Kelas SSD
Kelas SSD juga merupakan turunan dari StorageDrive, namun kelas ini lebih spesifik mengelola data terkait dengan penyimpanan berbasis flash. Atribut yang dimiliki kelas SSD antara lain interface yang menentukan jenis antarmuka koneksi (seperti SATA, NVMe, atau PCIe) dan nandType yang menunjukkan jenis teknologi NAND yang digunakan. Kelas ini mengimplementasikan metode getDriveType() untuk mengidentifikasi tipe drive sebagai "SSD" dan displayInfo() untuk menampilkan informasi detail tentang SSD.

### Kelas CPU
Kelas CPU adalah turunan dari Komponen yang menyimpan informasi terkait dengan unit pemrosesan sentral. Atribut yang dimiliki meliputi jumlahCore yang menunjukkan jumlah inti pemrosesan, kecepatanGHz yang menunjukkan kecepatan clock dalam gigahertz, socket yang menunjukkan jenis soket yang kompatibel, hasIntegratedGraphics yang menunjukkan apakah CPU memiliki grafis terintegrasi, dan powerConsumption yang menunjukkan konsumsi daya. Kelas ini memiliki metode setter dan getter untuk semua atribut, serta metode displayInfo() untuk menampilkan spesifikasi lengkap CPU.

### Kelas GPU
Kelas GPU adalah turunan dari Komponen yang berfungsi untuk menyimpan data terkait dengan unit pemrosesan grafis. Atribut dalam kelas ini mencakup vram yang menunjukkan kapasitas memori video, cudaCores yang menunjukkan jumlah core CUDA untuk pemrosesan paralel, architecture yang menunjukkan arsitektur GPU, powerConsumption yang menunjukkan konsumsi daya, serta coolingCapacity dan coolingType yang menunjukkan kapasitas dan jenis pendinginan. Kelas GPU memiliki peran penting dalam kemampuan grafis komputer.

### Kelas RAM
Kelas RAM adalah turunan dari Komponen yang menyimpan informasi tentang memori akses acak. Atribut yang dimiliki kelas ini antara lain kapasitasGB yang menunjukkan ukuran memori dalam gigabyte, ddr yang menunjukkan generasi teknologi DDR yang digunakan, clockSpeed yang menunjukkan kecepatan clock memori, dan powerConsumption yang menunjukkan konsumsi daya. Kelas Ram bertanggung jawab untuk menyediakan informasi tentang memori sementara yang digunakan oleh komputer.

### Kelas Motherboard
Kelas Motherboard adalah turunan dari Komponen yang menyimpan informasi tentang papan induk komputer. Atribut yang dimiliki meliputi formFactor yang menunjukkan dimensi fisik (seperti ATX, Micro-ATX), chipset yang menunjukkan jenis chipset yang digunakan, socket yang menentukan jenis soket CPU yang didukung, maxRamCapacity yang menunjukkan kapasitas RAM maksimum yang didukung, ramSlots yang menunjukkan jumlah slot RAM yang tersedia, dan powerConsumption yang menunjukkan konsumsi daya. Kelas ini memiliki peran sentral dalam menghubungkan semua komponen lainnya.

### Kelas PowerSupply
Kelas PowerSupply adalah turunan dari Komponen yang mengatur informasi terkait dengan catu daya. Atribut yang dimiliki kelas ini antara lain wattage yang menunjukkan daya maksimum yang dapat disuplai dalam watt, certification yang menunjukkan sertifikasi efisiensi (seperti Bronze, Gold, Platinum), dan modular yang menunjukkan apakah kabel PSU bersifat modular. Kelas PowerSupply bertanggung jawab untuk memastikan bahwa komputer memiliki daya yang cukup untuk beroperasi.

### Kelas Case
Kelas Case adalah turunan dari Komponen yang menyimpan informasi tentang casing komputer. Atribut yang dimiliki meliputi formFactor yang menunjukkan ukuran dan bentuk casing, supportedMotherboards yang menunjukkan jenis motherboard yang didukung, fanMounts yang menunjukkan jumlah posisi pemasangan kipas, dan hasGlassPanel yang menunjukkan apakah casing memiliki panel kaca. Kelas Case berfungsi sebagai wadah fisik yang menampung semua komponen komputer.

### Kelas Cooling
Kelas Cooling adalah turunan dari Komponen yang menyimpan informasi tentang sistem pendinginan. Atribut yang dimiliki mencakup type yang menunjukkan jenis pendingin (seperti air atau udara), coolingCapacity yang menunjukkan kapasitas pendinginan, coolingType yang menunjukkan tipe spesifik pendinginan, dan powerConsumption yang menunjukkan konsumsi daya. Kelas Cooling berperan penting dalam menjaga suhu komponen komputer tetap optimal.

### Kelas Komputer
Kelas Komputer adalah kelas utama yang mengintegrasikan semua komponen komputer melalui komposisi. Atribut yang dimiliki meliputi nama yang menunjukkan nama atau model komputer, kategori yang menunjukkan kategori komputer (seperti gaming, workstation), totalHarga yang menghitung total biaya dari semua komponen, dan totalPowerConsumption yang menghitung total konsumsi daya. Kelas ini memiliki metode calculateTotalHarga() untuk menghitung harga total, calculateTotalPowerConsumption() untuk menghitung konsumsi daya total, isPowerSufficient() untuk memeriksa kecukupan daya PSU, serta displayInfo() untuk menampilkan informasi lengkap komputer.

## Alur Program

Struktur dasar program menggunakan konsep pewarisan (inheritance) dan komposisi untuk menciptakan sebuah sistem yang dapat merepresentasikan komputer dan berbagai komponennya secara terstruktur. BaseComponent berfungsi sebagai kelas dasar yang memberikan atribut fundamental seperti id dan masa garansi, yang kemudian diwariskan ke kelas Komponen. Kelas Komponen kemudian menjadi induk bagi berbagai komponen spesifik seperti CPU, GPU, RAM, dan lainnya, yang masing-masing memiliki atribut dan metode khusus sesuai dengan karakteristik komponennya.

Pewarisan hierarkis diimplementasikan pada StorageDrive yang menjadi kelas induk bagi dua jenis media penyimpanan: Harddrive dan SSD. Ini memungkinkan penggunaan polimorfisme dalam penanganan berbagai jenis media penyimpanan, di mana kode dapat berinteraksi dengan objek StorageDrive secara umum tanpa perlu mengetahui jenis spesifik dari media penyimpanan tersebut.

Kelas Komputer mengimplementasikan konsep komposisi, di mana sebuah objek Komputer terdiri dari berbagai objek komponen seperti Motherboard, CPU, RAM, dan lainnya. Komposisi ini memungkinkan representasi yang lebih realistis dari sebuah komputer, di mana satu komputer harus memiliki tepat satu motherboard dan CPU, tetapi dapat memiliki banyak RAM, media penyimpanan, GPU, atau sistem pendinginan. Hubungan komposisi ini juga memungkinkan kelas Komputer untuk melakukan kalkulasi agregat seperti menghitung total harga dan konsumsi daya dari semua komponennya.

Metode isPowerSufficient() dalam kelas Komputer memiliki peran penting dalam memvalidasi konfigurasi komputer, yaitu dengan memastikan bahwa power supply yang dipilih mampu menyediakan daya yang cukup untuk seluruh komponen. Ini menunjukkan bagaimana program tidak hanya merepresentasikan struktur fisik dari sebuah komputer, tetapi juga logika dan aturan yang berlaku dalam perakitan komputer.

Secara keseluruhan, program ini dirancang untuk memungkinkan pengguna membuat, mengonfigurasi, dan memvalidasi konfigurasi komputer dengan cara yang mudah dan intuitif. Pengguna dapat menambahkan berbagai komponen, menyesuaikan spesifikasinya, dan memeriksa kompatibilitas dan kecukupan daya sebelum memutuskan untuk membeli atau merakit komputer. Dengan demikian, program ini dapat berfungsi sebagai alat yang berguna bagi toko komputer, teknisi, atau pengguna yang ingin membangun komputer mereka sendiri.

---

### Desain Diagram

![tp3-diagram](https://github.com/user-attachments/assets/3cbcac09-da8d-455a-a3fe-9fa9eb9e85f1)

### Dokumentasi C++

![dokumentasi cpp 1](https://github.com/user-attachments/assets/95531c58-6b9e-416d-9d4e-c73f0eb32ead)

![dokumentasi cpp 2](https://github.com/user-attachments/assets/e4407556-7a52-4cdf-a9a0-0677dae1ee2f)



