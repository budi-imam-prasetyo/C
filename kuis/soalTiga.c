#include <stdio.h>

void HitungTotal(float array[], int n, float *total) {
    float t = 0.0f;
    for (int i = 0; i < n; i++)
        t += array[i];
    if (total) *total = t;
}

void HitungRataRata(float array[], int n, float *rata) {
    float t = 0.0f;
    HitungTotal(array, n, &t);
    if (rata && n > 0) *rata = t / n;
}

void CariMaksimum(float array[], int n, int *hariIndex, float *max) {
    if (n <= 0) {
        if (hariIndex) *hariIndex = 0;
        if (max) *max = 0.0f;
        return;
    }
    int first = 0;
    for (int i = 1; i < n; i++)
        if (array[i] > array[first]) first = i;
    if (hariIndex) *hariIndex = first + 1;
    if (max) *max = array[first];
}

void CariMinimum(float array[], int n, int *hariIndex, float *min) {
    if (n <= 0) {
        if (hariIndex) *hariIndex = 0;
        if (min) *min = 0.0f;
        return;
    }
    int first = 0;
    for (int i = 1; i < n; i++)
        if (array[i] < array[first]) first = i;
    if (hariIndex) *hariIndex = first + 1;
    if (min) *min = array[first];
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

  float total = 0.0f, rata = 0.0f, max = 0.0f, min = 0.0f;
  int hariMax = 0, hariMin = 0;
  HitungTotal(pendapatan, n, &total);
  HitungRataRata(pendapatan, n, &rata);
  CariMaksimum(pendapatan, n, &hariMax, &max);
  CariMinimum(pendapatan, n, &hariMin, &min);

  printf("|| Total Pendapatan Mingguan = %.0f\n", total);
  printf("|| Rata-rata Pendapatan = %.2f\n", rata);
  printf("|| Pendapatan tertinggi di hari ke-%d sebesar %.0f\n", hariMax, max);
  printf("|| Pendapatan terendah di hari ke-%d sebesar %.0f\n", hariMin, min);
  printf("=======================================================\n");

  return 0;
}
