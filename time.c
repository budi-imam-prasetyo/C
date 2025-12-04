#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    // === kode yang mau kamu ukur ===
    for(long long i = 0; i < 1000000000000; i++) { }
    // =================================

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Waktu eksekusi: %f detik\n", cpu_time_used);

    return 0;
}
