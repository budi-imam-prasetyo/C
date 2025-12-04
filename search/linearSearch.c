//linear search untuk mencari data karyawan berdasarkan nama

#include <inttypes.h>
#include <stdio.h>
#include <string.h>

typedef struct Karyawan{
    char nama[50];
    int kodeKaryawan;
    float gaji;
} karyawan;

int cariNamaKaryawan(karyawan data[], int jumlah, char namaDicari[]) {
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(data[i].nama, namaDicari) == 0) {
            return i;
        }
    }
    return -1;
}

int main(){
    karyawan kumpulan_data[100];
    int jumlah = 1;
    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &jumlah);
    getchar();

    printf("\n==== INPUT DATA KARYAWAN ====\n");
    for(int i = 0; i < jumlah; i++){
        printf("Karyawan ke-%d\n", i+1);
        printf("ID: ");
        scanf("%d", &kumpulan_data[i].kodeKaryawan);
        getchar();
        printf("Nama: ");
        fgets(kumpulan_data[i].nama, sizeof(kumpulan_data[i].nama), stdin);
        kumpulan_data[i].nama[strcspn(kumpulan_data[i].nama, "\n")] = '\0';
        printf("Gaji: ");
        scanf("%f", &kumpulan_data[i].gaji);
        getchar();
    }
    char dicari[50];
    printf("\nMasukkan nama karyawan yang ingin dicari: ");
    fgets(dicari, sizeof(dicari), stdin);
    dicari[strcspn(dicari, "\n")] = '\0';

    int index = cariNamaKaryawan(kumpulan_data, jumlah, dicari);
    if (index >= 0) {
        printf("Karyawan ditemukan pada indeks %d (ID: %d, Gaji: %.2f)\n",
               index, kumpulan_data[index].kodeKaryawan, kumpulan_data[index].gaji);
    } else {
        printf("Karyawan dengan nama \"%s\" tidak ditemukan.\n", dicari);
    }

    return 0;
}