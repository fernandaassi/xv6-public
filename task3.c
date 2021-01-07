#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    char *m = (char *)main;

    if(fork() == 0) {
        printf(1,"main filho antes da modificacao: %p\n", *m);
        *m = 0;
        printf(1,"main filho apos modificacao: %p\n", *m);

        exit();
    }

    wait();

    printf(1,"main pai antes da modificacao: %p\n", *m);
    *m = 0;
    printf(1,"main pai apos modificacao: %p\n", *m);

    exit();
}