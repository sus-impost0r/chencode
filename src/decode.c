#include "common.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define BUF 8192

int main(void) {
    size_t n;
    unsigned char buf[BUF];
    unsigned char tmp[5] = MAGIC;
    
    while((n = read_block(0, buf, BUF)) > 0) {
	if(write(1, buf, n) < 0) break;
    }
    if(n < 0) {
	if(n == -3)
	    puts("Checksum error!");
	else if(n == -4) {
	    return 0;
	}
	else
	    perror("read");
	return 1;
    }
}
