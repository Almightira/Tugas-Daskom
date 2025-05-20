#include <stdio.h>

int main() {
    int jumlahHari;
    printf("Masukkan jumlah hari: ");
    scanf("%d", &jumlahHari);
    for (int hari = 1; hari <= jumlahHari; hari++) {
        if (hari % 3 == 0) {
            printf("Hari ke-%d: Tomat memerlukan pupuk.\n", hari);
        }
        if (hari % 2 == 0) {
            printf("Hari ke-%d: Cabai memerlukan pupuk.\n", hari);
        }
        if (hari % 4 == 0) {
            printf("Hari ke-%d: Terong memerlukan pupuk.\n", hari);
        }
    }
    return 0;
}