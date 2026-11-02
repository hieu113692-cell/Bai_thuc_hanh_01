#include <stdio.h>
#include <math.h>
int nt(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Vui long nhap mot so nguyen duong hop le!\n");
        return 1;
    }
    if (nt(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}
