#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void print_flag_from_file(void) {
    FILE *fp = fopen("/flag", "r");
    if (!fp) {
        puts("flag missing");
        exit(0);
    }

    char flag[0x200];
    if (!fgets(flag, sizeof(flag), fp)) {
        fclose(fp);
        puts("flag missing");
        exit(0);
    }

    fclose(fp);
    fputs("okkkk!\n", stdout);
    fputs(flag, stdout);
    if (flag[0] && flag[0] != '\n') {
        size_t len = 0;
        while (flag[len] && flag[len] != '\n') {
            len++;
        }
        if (len == 0 || flag[len - 1] != '\n') {
            fputc('\n', stdout);
        }
    }
    exit(0);
}

static void setup(void) {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int check = 0;

void win(void) {
    const char *flag = getenv("A1CTF_FLAG");
    if (flag && *flag) {
        puts("okkkk!");
        puts(flag);
        exit(0);
    }

    print_flag_from_file();
}

static void vuln(void) {
    char buf[0x100];

    puts("Give me your input:");
    read(0, buf, 0x100);
    printf(buf);
    printf("\n");

    if (check == 0xdeadbeef) {
        win();
    } else {
        printf("check is 0x%x, need 0xdeadbeef\n", check);
    }
}

int main(void) {
    setup();
    puts("Simple format string challenge");
    vuln();
    return 0;
}