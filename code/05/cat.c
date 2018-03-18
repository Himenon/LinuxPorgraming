#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static void do_cat(const char *path);
static void die(const char *s);

int main(int argc, char *argv[]) {
    int i;
    if (argc < 2) {
        fprintf(stderr, "%s: file name not given\n", argv[0]);
    }
    for (i = 1; i <argc; i++) {
        do_cat(argv[i]);
    }
    exit(0);
}

#define BUFFER_SIZE 2048

static void do_cat(const char *path) {
    int fd;
    unsigned char buf[BUFFER_SIZE]; // readで読み込むバッファサイズ
    int n;

    fd = open(path, O_RDONLY); // READ ONLYでファイルを開く. File descriptorを取得
    if (fd < 0) die(path);     // fdが
    for (;;) {
        n = read(fd, buf, sizeof buf); // bufに読み込み
        if (n < 0) die(path);          // n < 0 の場合エラー
        if (n == 0) break;             // n = 0 byte のとき終了
        if (write(STDOUT_FILENO, buf, n) < 0) die(path);
    }
    if (close(fd) < 0) die(path);
}

static void die(const char *s) {
    perror(s); // エラーメッセージを出力
    exit(1);
}

