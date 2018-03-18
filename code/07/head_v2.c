#include <stdio.h>
#include <stdlib.h>

static void do_head(FILE *f, long nlines);

int main(int argc, char *argv[]) {
    long nlines; // 表示行数

    if (argc < 2) {
        // 引数が足りない場合
        fprintf(stderr, "Usage: %s n [file file...]\n", argv[0]);
    }
    nlines = atol(argv[1]);
    if (argc == 2) {
        // 引数が2ならこれまで通り
        do_head(stdin, nlines);
    } else { // 以降、追加部分
        int i;
        // ファイルの数だけループ
        for (i = 2; i < argc; i++) {
            FILE *f;

            // i >= 2 のargv[i] は全てファイルとして扱う
            f = fopen(argv[i], "r");
            // もしstreamがエラーの場合は終了
            if (!f) {
                perror(argv[i]);
                exit(1);
            }
            // そうでない場合は表示
            do_head(f, nlines);
            fclose(f);
        }
    }

    exit(0);
}

static void do_head(FILE *f, long nlines) {
    int c;

    if (nlines <= 0) return;
    while ((c = getc(f)) != EOF) {  // get
        if (putchar(c) < 0) exit(1);
        if (c == '\n') {
            nlines--;
            if (nlines == 0) return;
        }
    }
}
