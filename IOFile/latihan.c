#include <stdio.h>
#include <string.h>

int main() {
  FILE *data;
  char nama[100];
  char alamat[100];
  int umur;
  int kode_pos;
  char lanjut;

  data = fopen("file.txt", "a");
  if (data == NULL)
  {
    printf("Gagal membuka file\n");
    return 1;
  }

  do{
    printf("Masukkan nama   : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0;

    printf("Masukkan umur   : ");
    scanf("%d", &umur);

    printf("Masukkan kode pos : ");
    scanf("%d", &kode_pos);

    getchar();

    printf("Masukkan alamat : ");
    fgets(alamat, sizeof(alamat), stdin);
    alamat[strcspn(alamat, "\n")] = 0;

    fprintf(data, "%s | %d | %d | %s\n", nama, umur, kode_pos, alamat);

    printf("Input data lagi? (y/n): ");
    scanf(" %c", &lanjut);
    getchar();
    printf("\n");
  } while (lanjut == 'y' || lanjut == 'Y');

  fclose(data);
  return 0;
}
