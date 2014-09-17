#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

#include "utils.h"

int main(int argc, char **argv) {

    printf("Running shell...\n");
    printf("To exit, C-c\n");
    printf("\n\n");

    while (1) {
	printf("===> ");
	char *line = NULL;
	int capacity = 0;
	getline(&line, &capacity, stdin);
	printf("%s\n", line);
    }

    return 0;
}
