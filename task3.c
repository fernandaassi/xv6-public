#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    char *m = (char *)main;
    printf(1,"main antes da modificacao: %p\n", *m);
    *m = 0;
    printf(1,"main apos modificacao: %p\n", *m);
    exit();
}