//! Pak Vito

#include <stdio.h>

int main()
{
    float uangSaku;

    float paketA = 10000, paketB = 20000, paketC = 50000;
    float diskon = 0.2;

    float paketA_diskon = paketA * (1 - diskon);
    float paketB_diskon = paketB * (1 - diskon);
    float paketC_diskon = paketC * (1 - diskon);

    printf("Masukan uang saku mu: ");
    scanf("%f", &uangSaku);

    printf("\nTipe data uangSaku adalah float dengan ukuran memori %zu byte\n\n", sizeof(uangSaku));

    if (uangSaku < paketA && uangSaku < paketB && uangSaku < paketC)
    {
        printf("Uang tidak cukup untuk membeli pulsa, meskipun pakai voucher. Ketik 1 untuk \"Pinjam dulu Seratus\"🗿\n");
    }
    else
    {
        printf("\nPaket yang bisa dibeli tanpa voucher:\n");
        if (uangSaku >= paketA)
        {
            printf("1. Paket A (Rp%.0f)\n", paketA);
        }
        if (uangSaku >= paketB)
        {
            printf("2. Paket B (Rp%.0f)\n", paketB);
        }
        if (uangSaku >= paketC)
        {
            printf("3. Paket C (Rp%.0f)\n", paketC);
        }

        printf("\nPaket yang bisa dibeli dengan voucher diskon 20%%:\n");
        if (uangSaku >= paketA_diskon)
        {
            printf("1. Paket A (Rp%.0f)\n", paketA_diskon);
        }
        if (uangSaku >= paketB_diskon)
        {
            printf("2. Paket B (Rp%.0f)\n", paketB_diskon);
        }
        if (uangSaku >= paketC_diskon)
        {
            printf("3. Paket C (Rp%.0f)\n", paketC_diskon);
        }
    }
}