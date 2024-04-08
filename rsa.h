#ifndef RSA_H
#define RSA_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

bool _isprime(int num);
int factor(char *buf);
int krsa(char *buf);

#endif
