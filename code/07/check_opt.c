#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[]) {
    int opt;

    while ((opt = getopt(argc, argv, "af:tx")) != -1) {
        // "af:tx" は引数と取ることが可能な文字
        // :を挟んで左辺では、値を入れることが可能、右辺はなくて良い
        switch (opt) {
            case 'a':
                printf("%s\n", "aだよー");
                break;
            case 'f':
                printf("%s\n", "fだよー");
                break;
            case '?':
                printf("%s\n", "てめーはなんだ");
                break;
        }
    }
    printf("ざんねんだったな\n");
}
