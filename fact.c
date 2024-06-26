#include "rsa.h"

int factor(char *buf)
{
	unsigned int n = (unsigned int) atoi(buf), i = 2;

	while (i <= n / 2)
	{
		if (n % i == 0)
		{
			printf("%d=%d*%d\n", n, n/i, i);
			break;
		}
		i++;
	}
	return (0);
}


int krsa(char *buf)
{
	unsigned int n = (unsigned int) atoi(buf), i = 2;

	for (; i <= n / 2; i++)
	{
		if ((n % i) == 0 && _isprime(n / i) && _isprime(i))
		{
			printf("%d=%d*%d\n", n, n/i, i);
			break;
		}
	}
	return (0);
}

bool _isprime(int num)
{
	int temp = 0, i = 2;

	while (i <= num / 2)
	{
		if (num % i == 0)
		{
			return (true);
		}
		return (false);
	}
	return (false);
}

