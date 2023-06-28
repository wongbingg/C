#include <stdio.h>


// MARK: - 2022.04.24 _62번 문제

// int main(int argc, char *argv[])
// {
//     int a = 5, b = 3, c = 12;
//     int t1, t2, t3;
//     t1 = a && b;
//     t2 = a || b;
//     t3 = !c;
//     printf("%d", t1 + t2 + t3);

//     return 0;
// }

// MARK: - 2022.04.24 _63번 문제

struct st {
    int a;
    int c[10];
};

int main(int argc, char *argv[]) {
    int i = 0;
    struct st ob1;
    struct st ob2;
    ob1.a = 0;
    ob2.a = 0;

    for(i = 0; i < 10; i++) {
        ob1.c[i] = i;
        ob2.c[i] = ob1.c[i] + i;
    }

    for(i = 0; i < 10; i = i + 2) {
        ob1.a = ob1.a + ob1.c[i];
        ob2.a = ob2.a + ob2.c[i];
    }

    printf("%d", ob1.a + ob2.a);
    return 0;
}