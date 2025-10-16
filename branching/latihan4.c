//! Pak Vito
//* Program untuk mengecek dua nilai dengan nested if

// #include <stdio.h>

// int main(){
//     int nilai1, nilai2;
//     printf("Masukkan nilai1: ");
//     scanf("%d", &nilai1);
//     printf("Masukkan nilai2: ");
//     scanf("%d", &nilai2);

//     if(nilai1 >= 10){
//         printf("Nilai 1 lebih besar atau sama dengan 10\n");
//         if(nilai2 >= 20){
//             printf("Nilai 2 lebih besar atau sama dengan 20\n");
//         } else {
//             printf("Nilai 2 kurang dari 20\n");
//         }
//     }else {
//         printf("Nilai 1 kurang dari 10\n");
//     }
// }

#include <stdio.h>
#include <stdbool.h>
int main()
{
    char konfirmasi;
    bool ulang = true;

    while (ulang)
    {
        printf("======= Kalkulator Aritmatika Sederhana =======\n");
        int a, b;
        char pilihan;
        printf("Masukkan nilai a: ");
        scanf("%d", &a);
        printf("Masukkan nilai b: ");
        scanf("%d", &b);
        printf("Masukkan pilihan (+, -, *, /): ");
        scanf(" %c", &pilihan);
        switch (pilihan)
        {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
            {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            }
            else
            {
                printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
            }
            break;
        default:
            printf("Error: pilihan tidak valid.\n");
            break;
        }
        printf("Apakah Anda ingin melakukan perhitungan lagi? (y/n): ");
        scanf(" %c", &konfirmasi);
        if (konfirmasi == 'y' || konfirmasi == 'Y')
        {
            ulang = true;
        }
        else
        {
            ulang = false;
            printf("Terima kasih telah menggunakan kalkulator ini.\n");
        }
    }
    return 0;
}
