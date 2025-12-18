#include <stdio.h>

int findMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  FILE *asal;
  asal = fopen("array.txt", "r");

  int array[5];
  int size = 5;
  for (int i = 0; i < size; i++) {
    fscanf(asal, "%d", &array[i]);
  }
  int max = findMax(array, size);
  printf("Nilai maksimum dalam array adalah: %d\n", max);
  fclose(asal);

  return 0;
}
