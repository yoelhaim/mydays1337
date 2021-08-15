#include <stdio.h>

int ft_atoi(char *str)
{
	int i =0;
	int sign =0;
	int r = 0;
	int change_sign = 1;
	int sign_nega = 0;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r')
		i++;
	while(str[i] == '-' || str[i] == '+')
		{
			sign++;
			if(str[i] == '-')
			{
				sign_nega++;
			}
			i++;
		}
	while(str[i]!= '\0' && str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - 48;
		i++;
	}
		return ();
}

int main()
{
	char st[]= "--+--1234";
	printf("%d", ft_atoi(st));
}
