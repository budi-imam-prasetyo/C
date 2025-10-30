#include <stdio.h>

float hitung_tarif(float km);
float hitung_diskon(float tarif);

int main() {
  float diskon, km, tarif, potongan;
  printf("Jarak(km) : ");
  scanf("%f", &km);

  printf("Jarak tempuh pelanggan : %.0f Km\n", km);

  tarif = hitung_tarif(km);
  printf("Biaya sebelum diskon : Rp %.0f\n", tarif);

  diskon = hitung_diskon(tarif);
  if (diskon > 0.0) {
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

float hitung_tarif(float km) {
  float tarif;
  if (km <= 5)
    tarif = 5000 * km;
  else if (km > 5 && km <= 10)
    tarif = 25000 + (4000 * (km-5));
  else
    tarif = 45000 + (3000 * (km-10));

  return tarif;
}

float hitung_diskon(float tarif) {
  if (tarif > 100000)
    return 0.10;
  else if (tarif > 50000 && tarif <= 100000)
    return 0.05;
  else
    return 0;
}