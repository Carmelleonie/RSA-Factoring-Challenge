#ifndef RSA_H
#define RSA_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

bool _isprime(int num);

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

int factor(char *buf);
int krsa(char *buf);

#endif
