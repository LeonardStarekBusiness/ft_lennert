#include <stdio.h>
#include <stdlib.h>

void* calloc(size_t nmemb, size_t size);

int main(void)
{
	void *baal = calloc(5,4);
	free(baal);
}
