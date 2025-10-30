#include <stdio.h>

void hitung_tarif(float km, float *tarif) {
  if (km <= 5)
    *tarif = 5000 * km;
  else if (km > 5 && km <= 10)
    *tarif = 25000 + (4000 * (km - 5));
  else
    *tarif = 45000 + (3000 * (km - 10));
}

void hitung_diskon(float tarif, float *diskon) {
  if (tarif > 100000)
    *diskon = 0.10f;
  else if (tarif > 50000 && tarif <= 100000)
    *diskon = 0.05f;
  else
    *diskon = 0.0f;
}

int main() {
  float diskon, km, tarif, potongan;
  printf("Jarak(km) : ");
  if (scanf("%f", &km) != 1) return 1;

  printf("Jarak tempuh pelanggan : %.0f Km\n", km);

  hitung_tarif(km, &tarif);
  printf("Biaya sebelum diskon : Rp %.0f\n", tarif);

  hitung_diskon(tarif, &diskon);
  if (diskon > 0.0f) {
    printf("Diskon : %.0f%%\n", diskon * 100);
    potongan = tarif * diskon;
    tarif = tarif - potongan;
    printf("Potongan: Rp%.0f\n", potongan);
  } else {
    printf("Tidak dapat diskon\n");
  }

  printf("Total biaya yang harus dibayar : Rp%.0f\n", tarif);
  return 0;
}
