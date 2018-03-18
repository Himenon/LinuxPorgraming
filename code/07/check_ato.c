#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("%ld\n", atol("A")); // 0 整数化できないため
    printf("%ld\n", atol("B")); // 0
    printf("%ld\n", atol("0")); // 0 // 区別つかない？
    printf("%ld\n", atol("1")); // 1
    printf("%ld\n", atol("2")); // 2 整数化できるためそのものを返す

    printf("%d\n", atoi("8")); // int型

    return 0;
}

