#include <stdio.h>
#define MAX_ELEMENTS 1024           
char Input[MAX_ELEMENTS];
int main() {
	int current, count = 0;
	while ((current = getchar()) != EOF) 
	if (count == MAX_ELEMENTS) {
		fprintf(stderr, "Слишком много символов");
		return 1;
	}  else
		Input[count++] = current;
	for (int i = count-1; i >= 0; i--) 
		putchar(Input[i]);
	return 0;
} 
