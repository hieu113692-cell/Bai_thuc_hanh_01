#include <stdio.h>
long long timUCLN(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long timBCNN(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / timUCLN(a, b)) * b;
}
int main() {
    long long a, b;
    printf("Nhap hai so nguyen duong a va b: ");
    if (scanf("%lld %lld", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong hợp le!\n");
        return 1;
    }
    long long bcnn = timBCNN(a
