# 📚 Repositori Kuliah Bahasa Pemrograman C

<div align="center">

![C Programming](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Active-success.svg)
![License](https://img.shields.io/badge/License-MIT-yellow.svg)

**Koleksi materi pembelajaran, praktikum, dan proyek bahasa pemrograman C**

[Tentang](#-tentang) • [Struktur](#-struktur-repositori) • [Cara Penggunaan](#-cara-penggunaan) • [Kontribusi](#-kontribusi)

</div>

---

## 📖 Tentang

Repositori ini berisi dokumentasi lengkap perjalanan pembelajaran saya dalam mata kuliah **Bahasa Pemrograman C**. Di dalamnya terdapat berbagai materi, kode praktikum, tugas, dan proyek yang dikerjakan selama perkuliahan.

### 🎯 Tujuan Repositori
- Mendokumentasikan proses pembelajaran bahasa C
- Menyimpan kode praktikum dan tugas kuliah
- Berbagi pengetahuan dengan mahasiswa lain
- Membangun portofolio programming

---

## � Struktur Repositori

```
algoritma_pemrograman/
├── Afolder/               # Latihan perhitungan dan looping
│   ├── hitungNilaiAkhir.c # Program hitung nilai akhir mahasiswa
│   ├── karyawan.c         # Program data karyawan
│   ├── looping.c          # Latihan looping
│   └── main.c             # Program utama
│
├── basic/                 # Konsep dasar pemrograman C
│   ├── array.c            # Implementasi array
│   ├── array1D.c          # Array 1 dimensi
│   ├── array2D.c          # Array 2 dimensi
│   ├── bonusMingguan.c    # Perhitungan bonus mingguan
│   ├── factorial.c        # Algoritma faktorial
│   ├── function.c         # Implementasi fungsi
│   ├── functionA.c        # Contoh fungsi A
│   ├── luasRuang.c        # Perhitungan luas ruang
│   ├── nomorEmpat.c       # Latihan nomor 4
│   ├── nomorTiga.c        # Latihan nomor 3
│   ├── passingArray.c     # Passing array ke fungsi
│   ├── pointer.c          # Konsep pointer
│   └── totalBarang.c      # Perhitungan total barang
│
├── branching/             # Percabangan dan kondisi
│   ├── ceritaGrosir.c     # Program cerita grosir
│   ├── diskonPulsa.c      # Perhitungan diskon pulsa
│   ├── informasiMahasiswa.c # Data informasi mahasiswa
│   ├── informasiPribadi.c   # Data informasi pribadi
│   ├── kalkulatorSederhana.c # Kalkulator sederhana
│   ├── KTPSIM.c           # Program KTP/SIM
│   ├── latihan4.c         # Latihan 4
│   ├── parking.c          # Sistem parkir
│   ├── pemesananWisata.c  # Pemesanan wisata
│   ├── shopping.c         # Program shopping
│   └── sorting.c          # Algoritma sorting
│
├── looping/               # Perulangan
│   ├── peringatanBanjir.c # Program peringatan banjir
│   ├── persegi.c          # Pola persegi
│   ├── segitiga.c         # Pola segitiga
│   └── segitigaTerbalik.c # Pola segitiga terbalik
│
└── tugas/                 # Tugas kuliah
    ├── arrayStar.c        # Program array bintang
    └── FreshDay.c         # Program Fresh Day
```

---

## �🚀 Cara Penggunaan

### Prasyarat
Pastikan Anda telah menginstal:
- **Clang Compiler** (LLVM Compiler)
- **IDE/Text Editor** (VS Code, Code::Blocks, Dev-C++, atau lainnya)

### Instalasi Compiler

#### Windows
```bash
# Download LLVM/Clang dari: https://releases.llvm.org/
# Atau gunakan package manager seperti Chocolatey
choco install llvm
```

#### Linux (Ubuntu/Debian)
```bash
sudo apt update
sudo apt install clang
clang --version
```

#### macOS
```bash
# Clang sudah terinstall bersama Xcode Command Line Tools
xcode-select --install
clang --version
```

### Menjalankan Program

1. **Clone repositori ini**
   ```bash
   git clone https://github.com/budi-imam-prasetyo/C.git
   cd C
   ```

2. **Kompilasi program dengan Clang**
   ```bash
   clang nama-file.c -o output
   ```

3. **Jalankan program**
   ```bash
   # Linux/macOS
   ./output
   
   # Windows
   output.exe
   ```

### Contoh
```bash
# Kompilasi program dari folder basic
clang basic/array.c -o array
./array

# Kompilasi program dari folder branching
clang branching/kalkulatorSederhana.c -o kalkulator
./kalkulator

# Kompilasi program dari folder looping
clang looping/persegi.c -o persegi
./persegi
```

---

## 📝 Topik yang Dipelajari

- [x] Sintaks dasar dan struktur program C
- [x] Variabel dan tipe data
- [x] Operator dan ekspresi
- [x] Kontrol alur (if-else, switch, loops)
- [x] Fungsi dan parameter
- [x] Array dan string
- [x] Pointer dan memory management
- [ ] Struktur data (struct, union, enum)
- [ ] File I/O operations
- [ ] Preprocessing directives
- [ ] Dynamic memory allocation
- [ ] Linked list dan struktur data lanjutan

---

## 💡 Highlights

### 🏆 Proyek Unggulan

**[Nama Proyek]** - Deskripsi singkat proyek akhir atau tugas terbaik
- Fitur utama proyek
- Teknologi yang digunakan
- Link ke folder proyek

---

## 🛠️ Tools & Resources

### Development Tools
- **Compiler:** Clang (LLVM Compiler Infrastructure)
- **IDE:** Visual Studio Code dengan ekstensi C/C++
- **Version Control:** Git & GitHub

### Referensi Belajar
- 📘 [The C Programming Language](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628) - Brian W. Kernighan & Dennis M. Ritchie
- 🌐 [Learn-C.org](https://www.learn-c.org/) - Interactive C Tutorial
- 📺 [CS50](https://cs50.harvard.edu/) - Harvard's Introduction to Computer Science
- 📖 [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)

---

## 🤝 Kontribusi

Kontribusi, saran, dan masukan sangat diterima! Jika Anda menemukan kesalahan atau ingin menambahkan materi:

1. Fork repositori ini
2. Buat branch baru (`git checkout -b feature/ImprovementName`)
3. Commit perubahan (`git commit -m 'Add some improvement'`)
4. Push ke branch (`git push origin feature/ImprovementName`)
5. Buat Pull Request

---

## 📫 Kontak

**Budi Imam Prasetyo**

- GitHub: [@budi-imam-prasetyo](https://github.com/budi-imam-prasetyo)
- Email: [budiimamprsty@gmail.com]
- LinkedIn: [LinkedIn Profile](https://www.linkedin.com/in/budi-imam-prasetyo/)

---

## 📜 Lisensi

Repositori ini dilisensikan di bawah [MIT License](LICENSE) - silakan gunakan untuk keperluan pembelajaran.

---

## ⭐ Support

Jika repositori ini membantu Anda, jangan lupa untuk memberikan ⭐ (star) ya!

<div align="center">

**Happy Coding! 💻**

Made with ❤️ by Budi Imam Prasetyo

</div>