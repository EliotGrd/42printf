#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("lol%dlol\n", 10);
	printf("lol%dlol\n", 10);
	printf("lol%slol\n", "lol");
	
	ft_printf("lol%xlol\n", 16);
	ft_printf("lol%slol\n", "lol");
	ft_printf("lol%xlol\n", 16);
}
