#include <stdio.h>

int main() {
    int n, i, count, num, sum;
    count = 0;
    num = 2;
    sum = 0;

    printf("Digite a quantidade de numeros primos que deseja somar: ");
    scanf("%d", &n);

    while(count < n) {
        int is_prime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("A soma dos %d primeiros numeros primos: %d\n", n, sum);

    return 0;
}
