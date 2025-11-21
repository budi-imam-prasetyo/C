// Seorang pemilik kedai minuman bernama “Boba Fresh” ingin membuat program sederhana untuk menghitung total harga pembelian minuman boba berdasarkan jumlah gelas yang dibeli, dengan ketentuan harga sebagai berikut:
// - Harga satu gelas boba adalah Rp 15.000
// - Jika membeli lebih dari 5 gelas, harga per gelas menjadi Rp 13.000
// - Jika membeli lebih dari 10 gelas, harga per gelas menjadi Rp 11.000

// Buatlah pseudocode atau flowchart untuk menghitung total harga pembelian. Program menggunakan fungsi:
// - HitungTotal()
// - Main Function()

// #include <stdio.h>

// int HitungTotal(int boba){
//     int harga;
//     if(boba >= 1 && boba <= 5){
//         harga = 15000;
//     }else if(boba > 5 && boba <= 10){
//         harga = 13000 * boba;
//     }else{
//         harga = 11000 * boba;
//     }
//     return harga;
// }

// int main(){
//     int jumlahBoba, total;
//     printf("Mau beli berapa gelas : ");
//     scanf("%d", &jumlahBoba);
//     total = HitungTotal(jumlahBoba);
//     printf("Total harga yang harus dibayar Rp %d", total);
// }

// Function HitungTotal(boba)
//     Declare int harga, total
//     if boba >= 1 && boba <= 5 Then
//         Set harga = 15000
//     else if boba > 5 && boba <= 10 Then
//         Set harga = 13000
//     else
//         Set harga = 11000
//     end if

//     total = boba * harga
//     return total
// End Function

// Function Main()
//     Declare int jumlahBoba, total
//     Display "Mau beli berapa gelas"
//     Input(jemlahBoba)
//     total = HitungTotal(jumlahBoba)
//     Display "Total Harga yang harus dibayar Rp %d", total
// End Function

// ================================================

// Pemilik kedai “Boba Fresh” juga memberikan promo spesial bagi pelanggannya. Program kali ini akan menghitung total harga setelah diskon, dengan ketentuan sebagai berikut:
// - Jika total pembayaran > Rp 150.000, pelanggan mendapat diskon 10%
// - Jika total pembayaran antara Rp 100.000 – Rp 150.000, pelanggan mendapat diskon 5%
// - Jika total pembayaran < Rp 100.000, tidak ada diskon

// Buatlah pseudocode atau flowchart yang:
// - Menerima input total harga sebelum diskon
// - Menggunakan fungsi HitungDiskon(total) untuk menghitung total harga setelah diskon
// - Menampilkan harga akhir yang harus dibayar melalui Main Function

// #include <stdio.h>

// int HitungTotal(int boba){
//     int harga;
//     if(boba >= 1 && boba <= 5){
//         harga = 15000;
//     }else if(boba > 5 && boba <= 10){
//         harga = 13000 * boba;
//     }else{
//         harga = 11000 * boba;
//     }
//     return harga;
// }

// int HitungDiskon(int total){
//     int diskon;
//     if (total > 150000){
//         diskon = total * 0.9;
//     } else if (total >= 100000 && total <= 150000) {
//         diskon = total * 0.95;
//     } else {
//         diskon = total;
//     }
//     return diskon;
// }

// int main(){
//     int jumlahBoba, total, total_harga;
//     printf("Mau beli berapa gelas : ");
//     scanf("%d", &jumlahBoba);
//     total = HitungTotal(jumlahBoba);
//     printf("Total harga sebelum diskon Rp %d\n", total);
//     total_harga = HitungDiskon(total);
//     printf("Total harga setelah diskon Rp %d\n", total_harga);
// }

// =================================================

// Sebuah program memiliki array berisi nilai sebagai berikut:
// nilai = [78, 85, 90, 67, 88]
// Buatlah pseudocode untuk menghitung:
// - Jumlah seluruh nilai
// - Nilai tertinggi
// - Nilai terendah

// Gunakan tiga fungsi berikut:
// - HitungJumlah() → menghitung total dari semua elemen dalam array.
// - CariMaksimum() → mencari nilai tertinggi dalam array.
// - CariMinimum() → mencari nilai terendah dalam array.
// - Main Function → memanggil ketiga fungsi di atas dan menampilkan hasilnya.
