#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    char *m = (char *)main;
    printf(1,"main addr before: %x\n", *m);
    *m = 0;
    printf(1,"main addr after: %x\n", *m);
    exit();
}