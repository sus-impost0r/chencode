#include "common.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define BUF 8192

int main(void) {
    ssize_t n;
    int ret = 0;
    unsigned char buf[BUF];

    while((n = try_read(0, buf, BUF)) > 0) {
        if(write_block(1, buf, n) < 0) break;
    }

    if(n < 0) {
        perror("read");
        ret = 1;
    }
    write_block(1, NULL, 0);
    return ret;
}
