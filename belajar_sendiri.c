//* hasil sendiri
// #include <stdio.h>

// int main(){
//     for(int i = 1; i<=100; i++){
//         if(i % 3 == 0 && i % 5 == 0)
//             printf("fizz buzz\n");
//         else{
//             if(i % 3 == 0)
//                 printf("fizz\n");
//             else if(i % 5 == 0)
//                 printf("buzz\n");
//             else
//                 printf("%d\n",i);
            
//         }
//     }
// }
// ✅ Kelebihan:
// Mudah dipahami — logika step-by-step. Cocok buat orang yang baru belajar kontrol alur.
// Terstruktur rapi dengan if, else if, dan else, sehingga mudah di-trace.
// Output konsisten (karena semua cabang berakhir dengan \n di tempat yang jelas).
// Tidak ambigu — selalu jelas cabang mana yang dijalankan (tidak ada duplikasi kondisi).

// ❌ Kekurangan:
// Redundant logic — kamu ngecek i % 3 dan i % 5 dua kali (sekali di &&, lalu di else lagi).
// Performa sedikit lebih boros (meskipun nggak signifikan, tapi tetap dua kali evaluasi modulus di banyak kasus).
// Nested if bikin readability sedikit lebih berat untuk kode yang sederhana seperti ini.
// Kaku untuk ekspansi — misalnya mau nambah “fizzbuzzwoof” (kelipatan 7), kamu harus nambah satu lapis lagi.



//* hasil gpt 😭😭
// #include <stdio.h>

// int main(void) {
//     for (int i = 1; i <= 100; i++) {
//         if (i % 3 == 0) printf("fizz");
//         if (i % 5 == 0) printf("buzz");
//         if (i % 3 && i % 5) printf("%d", i);
//         printf("\n");
//     }
// }
// ✅ Kelebihan:
// Tidak ada else / nested block — alur logika linear dan simpel.
// Evaluasi kondisi minimal — setiap kondisi hanya diuji sekali.
// Lebih fleksibel — kalau nanti mau nambah aturan baru (misal kelipatan 7 cetak “woof”), tinggal tambah satu baris if.
// Clean dan pendek — lebih “modern C style”, cocok buat kode yang sering dilihat programmer lain.
// Performansi sedikit lebih baik (karena ga ngecek kondisi berulang).

// ❌ Kekurangan:
// Sedikit kurang intuitif buat pemula, karena “output angka” ditulis di akhir, bukan di dalam struktur else.
// Bisa bikin bug kecil kalau lupa \n di akhir (karena printf("\n") dipisah dari kondisi).
// Secara visual, “kelipatan 3 dan 5” nggak langsung kelihatan sebagai satu kondisi gabungan.
// Output sedikit beda secara estetika kalau kamu mau ada spasi (“fizz buzz” vs “fizzbuzz”).