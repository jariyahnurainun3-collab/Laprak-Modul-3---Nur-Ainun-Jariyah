#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    if (a <= b) {
        printf("Hasil pengurutan: %d %d\n", a, b);
    } else {
        printf("Hasil pengurutan: %d %d\n", b, a);
    }

    return 0;
}