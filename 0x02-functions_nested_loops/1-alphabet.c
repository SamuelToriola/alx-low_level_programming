#include main.h 
/*
 * void print_alphabet(void)

*
*	int i;
*
*	i = 'a';
*
*	while (i <= 'z')
*	{
*		_putchar(i);
*		i++;
*	}
*	_putchar('\n');

 *
 *
 * */
void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
