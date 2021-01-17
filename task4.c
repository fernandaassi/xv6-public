#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    if(cowfork() == 0) {
        exit();
    }
    wait();
    exit();
}