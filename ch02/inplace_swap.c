#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main() {
    int a = 1;
    int b = 2;
    inplace_swap(&a, &b);
    printf("%d, %d", a ,b);
    return 0;
}
