#include <stdio.h>

int main() {
    int n, i = 1;
    long long faktorial = 1;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    // Validasi input
    if (n < 0) {
        printf("Faktorial tidak didefinisikan untuk bilangan negatif.\n");
    } else {
        while (i <= n) {
            faktorial *= i;
            i++;
        }
        printf("Faktorial dari %d adalah %lld\n", n, faktorial);
    }

    return 0;
}
