#include <stdio.h>

int main() {
    int a;

    printf("Masukkan bilangan: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("Nol\n");
    } else if (a >= 1 && a < 10) {
        printf("Satuan\n");
    } else if (a >= 10 && a < 20) {
        printf("Belasan\n");
    } else if (a >= 20 && a < 100) {
        printf("Puluhan\n");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }

    return 0;
}