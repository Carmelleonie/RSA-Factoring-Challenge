#include "rsa.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	FILE *ptr = NULL;
	size_t *n;
	char *buffer = NULL;
	int exit_code = EXIT_FAILURE;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		return (exit_code);
	}
	ptr = fopen(argv[1], "r");
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file\n");
		return (exit_code);
	}
	while (getline(&buffer, n, ptr) != -1)
	{
		factor(buffer);
	}
	fclose(ptr);
	free(buffer);
	return (0);
}
