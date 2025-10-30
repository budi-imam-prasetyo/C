#include <stdio.h>
#include <stdlib.h>

void masukanUang(int *saldoo) {
  int jumlah;
  printf("Setor Tunai: ");
  scanf("%d", &jumlah);
  *saldoo += jumlah;
  printf("Saldo sekarang: %d\n", *saldoo);
}

void tarikTunai(int *saldoo) {
  int jumlah;
  printf("Tarik Saldo: ");
  scanf("%d", &jumlah);
  if (jumlah > *saldoo) {
    printf("Saldo tidak cukup.\n");
    return;
  }
  *saldoo -= jumlah;
  printf("Saldo sekarang: %d\n", *saldoo);
}

void tampilkanSaldo(int saldoo) { 
    printf("Saldo Anda: %d\n", saldoo); 
}

void keluar(void) { exit(0); }

int main() {
  int pilihan;
  int saldo = 0;
  do {
    printf("1. Setor Tunai\n");
    printf("2. Tarik Tunai\n");
    printf("3. Tampilkan Saldo\n");
    printf("4. Keluar\n");
    printf("pilih 1-4: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
    case 1:
      masukanUang(&saldo);
      break;
    case 2:
      tarikTunai(&saldo);
      break;
    case 3:
      tampilkanSaldo(saldo);
      break;
    case 4:
      keluar();
      break;
    default:
      printf("Pilihan tidak valid.\n");
      return 1;
    }
  } while (pilihan != 4);

  return 0;
}

