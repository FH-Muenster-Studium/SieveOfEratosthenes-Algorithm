#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void SieveOfEratosthenes(int n) {
    bool a[n];
    for (int i = 2; i < n; i++) {
        a[i] = true;
    }

    int i = 2;

    int j;

    while (pow(i, 2) <= n) {
        if (a[i]) {
            j = 2;
            while (i * j <= n) {
                a[i * j] = false;
                j++;
            }
        }
        i++;
    }

    int l = 0;
    for (int k = 2; k < n; k++) {
        if (a[k]) {
            l++;
        }
        printf("%d=%d,", k, a[k]);
    }
    printf("count = %d", l);
}


int main() {
    printf("Hello, World!\n");
    SieveOfEratosthenes(100);
    return 0;
}
