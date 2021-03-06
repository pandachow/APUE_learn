#include "../include/apue.h"

/* usage: ./bin < input file > output file
 * here open/read/write/lseek and close use the buffer functions of I/O
 */
#define BUFFSIZE 4096

int main(void)
{
    int n;
    char buf[BUFFSIZE];

    while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
        if(write(STDOUT_FILENO, buf, n) != n)
            printf("write error!");
    if(n < 0)
        printf("read error");

    exit(0);
}
