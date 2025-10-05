//! Pak Vito
//* Tugas 5: Membuat program grosir sederhana dengan interaksi pelanggan

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int harga_barang1, harga_barang2;
    char nama_barang1[20], nama_barang2[20], satuan1[10], satuan2[10];
    float berat_barang1, berat_barang2, total;

    printf("Cerita bermula setelah perusahaan ku bangkrut\n");
    sleep(3);

    printf("Aku sangat putus asa, dan hanya bisa memikirkan cara untuk bangkit kembali\n");
    sleep(4);

    printf("Aku dinasehati teman ku untuk memulai bisnis baru\n");
    sleep(3);

    printf("Dan malamnya aku berpikir keras dan akhirnya....\n");
    sleep(3);

    printf("\" AKU AKAN MEMULAI BISNIS GROSIR \"\n");
    sleep(4);

    printf("Dan keesokan harinya, aku mulai mencari barang yang akan ku jual \n");
    sleep(3);

    printf("Barang pertama yang aku jual adalah ");
    fgets(nama_barang1, sizeof(nama_barang1), stdin);
    nama_barang1[strcspn(nama_barang1, "\n")] = '\0';
    printf("Untuk harga %snya ", nama_barang1);
    scanf("%d", &harga_barang1);
    printf("Rp.%d per ", harga_barang1);
    scanf("%s", satuan1);

    getchar();

    printf("Lalu barang kedua yang saya jual adalah ");
    fgets(nama_barang2, sizeof(nama_barang2), stdin);
    nama_barang2[strcspn(nama_barang2, "\n")] = '\0';
    printf("Untuk harga %snya ", nama_barang2);
    scanf("%d", &harga_barang2);
    printf("Rp.%d per ", harga_barang2);
    scanf("%s", satuan2);
    sleep(2);

    printf("Ketika setelah selesai mendata barang yang dijual\n");
    sleep(3);
    printf("Pelanggan pertama pun datang\n");
    sleep(2);
    printf("aku sangat senang sekali\n");
    sleep(3);
    printf("aku melayaninya dengan senyuman :) \n");
    sleep(3);
    printf("dan yang diiginkan pelanggan pertama ku adalah \n");
    sleep(3);

    printf("%s (%s) : ", nama_barang1, satuan1);
    scanf("%f", &berat_barang1);
    printf("%.1f %s\n", berat_barang1, satuan1);
    printf("%s (%s) : ", nama_barang2, satuan2);
    scanf("%f", &berat_barang2);
    printf("%.1f %s\n", berat_barang2, satuan2);

    total = (float)(harga_barang1 * berat_barang1) + (harga_barang2 * berat_barang2);
    printf("Setelah kuhitung-hitung, total belanjaan nya adalah %.0f\n", total);
    sleep(3);
    printf("Untungnya pelangganku memberikan uang pas. (karena belum ada kembalian hehe )\n");
    sleep(3);
    printf("Aku pun memberikan bon nya\n");
    sleep(2);
    printf("============= BON =============\n");
    sleep(2);

    if (berat_barang1 > 0 && berat_barang2 > 0)
    {
        printf("%s (%.1f %s) : Rp.%.0f\n", nama_barang1, berat_barang1, satuan1, harga_barang1 * berat_barang1);
        printf("%s (%.1f %s) : Rp.%.0f\n", nama_barang2, berat_barang2, satuan2, harga_barang2 * berat_barang2);
        printf("Total : %.0f\n", total);
    }
    else if (berat_barang1 > 0 && berat_barang2 <= 0)
    {
        printf("%s (%.1f %s) : Rp.%.0f\n", nama_barang1, berat_barang1, satuan1, harga_barang1 * berat_barang1);
        printf("Total : %.0f\n", total);
    }
    else if (berat_barang1 <= 0 && berat_barang2 > 0)
    {
        printf("%s (%.1f %s) : Rp.%.0f\n", nama_barang2, berat_barang2, satuan2, harga_barang2 * berat_barang2);
        printf("Total : %.0f\n", total);
    }
    else
    {
        printf("Tidak ada barang yang dibeli\n");
    }
    printf("===============================\n");
}
