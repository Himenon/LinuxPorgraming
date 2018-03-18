# 第５章 ストリームに関わるシステムコール


Keywords

- File descriptor
- Stream 
    - standard input: `STDIN_FILENO`
    - standard output: `STDOUT_FILENO`
    - standard error output: `STDERR_FILENO`
- System Call
    - read
    - write
    - open
        - O_RDONLY
        - O_WRONLY
        - O_RDWR
        - O_CREATE
        - O_EXCL
        - O_TRUNC
        - O_APPEND
    - close
- errno: Error Number
- lseek: ファイルディスクリプタfd内部のファイルオフセットを指定した位置offsetに移動
    - SEEK_SET
    - SEEK_CUR
    - SEEK_END
- dup, dup2: ファイルディスクリプアタoldfdを複製するシステムコール
- ioctl: ストリームが繋がる先にあるデバイスに特化した操作を全て含めたシステムコール
- fcntl
    
