#include <stdio.h>

int main(int arge, char *argv[]) {
    int n1=1, n2=2, n3=3;
    int r1, r2, r3;

    r1 = (n2 <= 2) || (n3 > 3);
    printf("r1: %d\n", r1);
    r2 = !n3;
    printf("r2: %d\n", r2);
    r3 = (n1 > 1) && (n2 < 3);
    printf("r3: %d\n ", r3);

    printf("result: %d\n", r3 - r2 + r1);
    return 0;
}