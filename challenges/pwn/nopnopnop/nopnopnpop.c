#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void setup(void) {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

void read_flag(void) {
    const char *flag = getenv("A1CTF_FLAG");
    if (!flag || !*flag) {
        puts("[*] read_flag called!");
        puts("Flag: flag missing");
        exit(0);
    }

    printf("[*] read_flag called!\nFlag: %s\n", flag);
    exit(0);
}

static void vuln(void) {
    /*
     * 增大缓冲区以便需要更长的 NOP sled（题目要求约 200 个 NOP）
     * 注意：read 的长度设置大于缓冲区以允许溢出覆盖返回地址
     */
    char buf[256];

    /* 在二进制中放置一个 IDA 可见的提示字符串（会出现在 .rodata 的字符串表中） */
    static const char ida_hint[] = "IDA_HINT: NOPx200 at buffer-start (look for many 0x90 bytes)";

    /* 打印缓冲区地址，供远程/本地利用器使用（运行时泄露，不放在二进制静态字符串表中） */
    printf("Buffer: %p\n", (void*)buf);
    printf("> ");
    fflush(stdout);
    read(0, buf, 512);
}

int main(void) {
    setup();
    
    const char *msgs[] = {
        "Enter your exploit:",
        "Waiting for input:",
        "Ready:",
        "Send payload:"
    };
    
    int idx = getpid() % 4;
    printf("=== %s ===\n", msgs[idx]);
    printf("Target: %p\n", (void*)&read_flag);
    
    vuln();
    return 0;
}