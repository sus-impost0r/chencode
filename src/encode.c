#include "common.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define BUF 8192

int main(void) {
    size_t n;
    unsigned char buf[BUF];
    unsigned char tmp[5] = MAGIC;
    
    while((n = read(0, buf, BUF)) > 0) {
	if(write_block(1, buf, n) < 0) break;
    }
    
    if(n < 0) {
	perror("read");
	return 1;
    }
}
