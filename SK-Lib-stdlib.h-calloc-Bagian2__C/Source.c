#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    // Penunjuk ini akan menahan alamat dasar dari blok yang dibuat
    int* ptr;
    int n, i;

    // Dapatkan jumlah elemen untuk array
    n = 7;
    printf("Masukkan jumlah elemen: %d\n", n);

    // Alokasikan memori secara dinamis menggunakan calloc()
    ptr = (int*)calloc(n, sizeof(int));

    // Periksa apakah memori telah berhasil dialokasikan oleh calloc atau tidak
    if (ptr == NULL) {
        printf("Memori tidak dialokasikan.\n");
        exit(0);
    } else {
        // Memori telah berhasil dialokasikan
        printf("Memori berhasil dialokasikan menggunakan calloc.\n");

        // Dapatkan elemen array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Cetak elemen array
        printf("Unsur-unsur array tersebut adalah : ");

        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }

    _getch(0);
    return 0;
}