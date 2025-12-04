#include <stdio.h>

typedef struct Employee {
  char nama[30];
  char jabatan[20];
  float gaji;
  float kpi;
} Employee;

int main(void) {
  Employee data[5] = {{"Andika", "Manager", 15000000, 92.5},
                      {"Budi", "Supervisor", 10000000, 88.0},
                      {"Citra", "Staff", 6500000, 90.2},
                      {"Dewi", "Staff", 6200000, 85.7},
                      {"Eko", "Intern", 3000000, 80.0}};

  int n = sizeof(data) / sizeof(data[0]);

  int pilihan;
  do {
    printf("\n==== Menu ====\n");
    printf("1. Mencari gaji tertinggi\n");
    printf("2. Mencari gaji terendah\n");
    printf("3. Mencari rata-rata gaji\n");
    printf("4. Mencari KPI tertinggi\n");
    printf("5. Mencari KPI terendah\n");
    printf("0. Keluar\n");
    printf("Pilih opsi: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
      int index = 0;
      for (int i = 1; i < n; i++) {
        if (data[i].gaji > data[index].gaji) {
          index = i;
        }
      }
      printf("Gaji tertinggi: %s (%s) = %.0f\n", data[index].nama, data[index].jabatan, data[index].gaji);

    }else if (pilihan == 2) {
      int index = 0;
      for (int i = 1; i < n; i++) {
        if (data[i].gaji < data[index].gaji) {
          index = i;
        }
      }
      printf("Gaji terendah: %s (%s) = %.0f\n", data[index].nama, data[index].jabatan, data[index].gaji);

    }else if (pilihan == 3) {
      double total = 0.0;
      for (int i = 0; i < n; i++) {
        total += data[i].gaji;
      }
      float rata_rata = total / n;
      printf("Rata-rata gaji: %.2f\n", rata_rata );

    }else if (pilihan == 4) {
      int index = 0;
      for (int i = 1; i < n; i++)
        if (data[i].kpi > data[index].kpi)
          index = i;
      printf("KPI tertinggi: %s (%s) = %.1f\n", data[index].nama, data[index].jabatan, data[index].kpi);

    }else if (pilihan == 5) {
      int index = 0;
      for (int i = 1; i < n; i++)
        if (data[i].kpi < data[index].kpi)
          index = i;
      printf("KPI terendah: %s (%s) = %.1f\n", data[index].nama, data[index].jabatan, data[index].kpi);

    }else if (pilihan != 0) {
      printf("Kalo milih dipikir mas\n");
    }
  } while (pilihan != 0);

  return 0;
}