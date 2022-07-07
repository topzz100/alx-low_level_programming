#include <stdio.h>

int main(void) {
	print_alphabet();
	return(0);
}
void print_alphabet(){

	char c;
	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return;

}
