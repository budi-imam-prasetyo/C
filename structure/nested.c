#include <stdio.h>

struct spesifikasi{
    int speed;
    char warna[15];
};

struct mobil{
    char nama[50];
    int tahun;
    float harga;
    struct spesifikasi spek;
}mcLaren;

int main(){
    mcLaren.spek.speed = 350;
    printf("Kecepatan mobil McLaren : %d km/h\n", mcLaren.spek.speed);
}