#include "common.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define BUF 65535

int main(void) {
    ssize_t n;
    unsigned char buf[BUF];

    while((n = read_block(0, buf, BUF)) > 0) {
        if(try_write(1, buf, n) < 0) break;
    }

    if(n < 0) {
        if(n == -2)
            fputs("Length corrupted!\n", stderr);
        else if(n == -3)
            fputs("Data corrupted!\n", stderr);
        else
            perror("read");
        return 1;
    }

}
