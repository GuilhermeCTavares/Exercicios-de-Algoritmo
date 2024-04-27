#include <stdio.h>

int main() {
    printf("Numeros entre 1 e 100, exceto os divisiveis por 6:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 6 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
