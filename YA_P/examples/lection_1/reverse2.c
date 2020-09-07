#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ELEMENTS 1024
char * pInput = NULL;
char Buffer[MAX_ELEMENTS];
int main() {
	int current, count = 0;
	pInput = (char*)calloc(1, sizeof (char));
	while (fgets(Buffer, sizeof Buffer, stdin)) {
		int oldCount = count;
		current = strlen(Buffer);
		count += current;
		pInput = (char*) realloc(pInput, count + 1);
		if (!pInput) {
			fprintf(stderr, "Не хватает памяти");
			return 1;
		}  else
			strcat(pInput + oldCount, Buffer);
	}
	for (char * pBegin = pInput, * pEnd = pInput + count - 1; pBegin < pEnd; ++pBegin, --pEnd) {
		char t = *pBegin; *pBegin = *pEnd; *pEnd = t;
	}
	puts(pInput); free(pInput);
	return 0;
} 
