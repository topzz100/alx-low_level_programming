#include <stdio.h>

void print_alphabet(void){

	char c;
	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return(0);

}
int main(void)
{
	print_alphabet();
	return(0);
}


