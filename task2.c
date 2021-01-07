#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void*)0)

int main() {
	int *a = NULL;
	int b= *a;
	
	printf(1, "NULL foi dereferenciado\n%p: %d", a, b);
	
	exit();
}