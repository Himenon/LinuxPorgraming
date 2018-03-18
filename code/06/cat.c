#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    for (i = 1; i < argc; i++) { // 複数の引数に対してcatコマンドを実行する
        FILE *f;
        int c;

        // file streamを取得
        f = fopen(argv[i], "r");
        // file streamが在るかどうかチェック
        if (!f) {
            perror(argv[i]);
            exit(1);
        }
        // EOFするに当たるまで、 fgetc をおこなう
        // fgetc: streamから1バイト読み込んで返す
        while((c = fgetc(f) != EOF)) { // EOFはstdio.hで定義されているマクロ
            // fputc = putc = putchar
            if (putchar(c) < 0) exit(1);
        }
        // FILE CLOSE
        fclose(f);
    }
    exit(0);
}