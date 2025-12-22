#include <stdio.h>

int main() {
  FILE *data;

  data = fopen("contoh.txt", "r");

  char myString[100];

  if (data != NULL) {
    while (fgets(myString, 100, data)) {
      printf("%s", myString);
    }
  } else {
    printf("File tidak ditemukan!\n");
  }
  fclose(data);

  return 0;
}
// #include <stdio.h>

// int main(){
//   FILE *data;

//   data = fopen("contoh.txt", "w");

//   fprintf(data, "Isad Ramadhan\n");
//   fclose(data);

//   return 0;
// }
