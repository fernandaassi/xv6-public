#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void *)0)

int main()
{
	int *ptr = NULL;

	// Isso vai dar problema apos a modificacao pois nao se pode mais
	// dereferenciar ponteiro nulo
	printf(1, "Ponteiro foi dereferenciado\n%p: %d", ptr, *ptr);

	exit();
}