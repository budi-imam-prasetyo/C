#include <stdio.h>

float HitungTotal(float array[], int n) {
    float total = 0.0f;
    for (int i = 0; i < n; i++)
        total += array[i];
    return total;
}

float HitungRataRata(float array[], int n) {
    return HitungTotal(array, n) / n;
}

int CariMaksimum(float array[], int n, float *max) {
    int first = 0;
    for (int i = 1; i < n; i++)
        if (array[i] > array[first]) first = i;
    if (max) *max = array[first];
    return first + 1;
}

int CariMinimum(float array[], int n, float *min) {
    int first = 0;
    for (int i = 1; i < n; i++)
        if (array[i] < array[first]) first = i;
    if (min) *min = array[first];
    return first + 1;
}

int main() {
  int n;
  printf("================== Hitung Pendapatan ==================\n");
  printf("|| Masukan n hari: ");
  if (scanf("%d", &n) != 1 || n <= 0)
    return 0;
  float pendapatan[n];
  printf("=======================================================\n");
  for (int i = 0; i < n; i++) {
    printf("|| Hari ke %d: ", i + 1);
    scanf("%f", &pendapatan[i]);
  }
  printf("=======================================================\n");

  float total = HitungTotal(pendapatan, n);
  float rata = HitungRataRata(pendapatan, n);
  float max, min;
  int hariMax = CariMaksimum(pendapatan, n, &max);
  int hariMin = CariMinimum(pendapatan, n, &min);

  printf("|| Total Pendapatan Mingguan = %.0f\n", total);
  printf("|| Rata-rata Pendapatan = %.2f\n", rata);
  printf("|| Pendapatan tertinggi di hari ke-%d sebesar %.0f\n", hariMax, max);
  printf("|| Pendapatan terendah di hari ke-%d sebesar %.0f\n", hariMin, min);
  printf("=======================================================\n");

  return 0;
}
