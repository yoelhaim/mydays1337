#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main ()
{
	char test[] = "mohammed";
	char tr[] = "asdf";

	printf("%u", ft_strlcat(test,tr,2));
}
