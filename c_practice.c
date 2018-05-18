#include <stdio.h>

/*  long is signed, so it goes from negative 2 billion to positive 2 billion   */
long sentence() {
	unsigned long range = 2200000000;
	printf("this is in a function\n");
	printf("size of range is %ld \n", range);
}

extern long variableLength(int varPassed);
extern long varIs(int varPassed)

int main() {

	int a, b;
	float decim;

	printf("welcome to C Programming!\n");

	a = 225;
	b = 21;
	decim = 23.44556;
	int c = a + b;

	printf("th3 value of c is %d \n", c);
	sentence();
	variableLength(c);

	return 0;
}