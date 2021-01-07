#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    void *m = main;
    *((char*) m) = 0;
    printf(1, "Teste\n");
    exit();
}