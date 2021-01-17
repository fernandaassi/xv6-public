#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    printf(1, "teste da task 4\n");
    if(cowfork() == 0) {
        printf(1, "sou o filho, vaquinhas (cows) sao amigas, nao comida.\n");
        exit();
    }
    wait();
    printf(1, "sou o pai, estava aguardando meu filho.\n");
    exit();
}