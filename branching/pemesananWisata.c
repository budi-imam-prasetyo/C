//! Pak Ghanim
//* Latihan 1: Membuat program sederhana untuk menghitung total biaya pemesanan paket wisata dengan diskon

#include <stdio.h>

int main(){
    const float harga_paket_A = 1500000.0;
    const float harga_paket_B = 2000000.0;
    const float harga_paket_C = 2500000.0;

    int jumlah_paket = 2;
    float total_harga;

    total_harga = harga_paket_A + harga_paket_B;

    if (jumlah_paket >1){
        total_harga *= 0.9;
    }

    printf("Pelanggan memesan %d paket wisata.\n", jumlah_paket);
    printf("Total biaya setelah diskon: Rp%.2f\n", total_harga);
}