#include <stdio.h>

/**
  *main- print all combinations from 0-89
  *
  *Return: 0
  */

int main(void)

{

	int i;



	for (i = 1; i < 90; i++)

	{

		putchar(i / 10 + '0');

		putchar(i % 10 + '0');

		if (i < 99)

		{

		putchar(44);

		putchar(32);

		}

	}

		putchar('\n');

return (0);

}
