# 第6章 ストリームに関わるライブラリ関数

## stdio

文字列や行単位での読み書き

- buffer: 一時的にデータを保存しておく場所のこと
    - buffering: バッファを経由してデータをやり取りすること
    - unbuffered mode
- FILE型
    - STDIN_FILENO
    - STDOUT_FILENO
    - STDERR_FILENO
- fopen第二引数
    - "r": O_RDONLY
    - "w": O_WRONLY | O_CREATE | O_TRUNC
    - "a": O_WRONLY | O_CREATE | O_APPEND
    - "r+": O_RDWR
    - "w+": O_POWR | O_CREATE | O_TRUNC
    - "a+": O_RDWR | O_CREATE | O_APPEND
- fclose

## 6.2

バイト単位での読み書き

- fgetc(3)
- fputc(3)
- getc(3)
- putc(3)
- getchar(3)
- putchar(3)
- ungetc(3)

## 6.3

cat2.cのサンプルコードが動かない？

## 6.4

- fgets
- gets: 使うな
    - buffer overflow
- fputs
- puts
- printf
    - どうしても: `printf("%s", str)`
- frpintf
    - 型指定子
- scanf
    - buffer overflowの危険性有り


## 6.5 固定長の入出力

- fread
- fwrite

可搬性に優れている

## 6.6 ファイルオフセットの操作

- fseek
- fseeko
- rewind

## 6.7 ファイルディスクリプタとFILE型

- fileno
- fdopen
    - Permissionの指定が可能


## 6.8 バッファリングの操作

- fflush
- setvbuf

## 6.9 EOFとエラー












