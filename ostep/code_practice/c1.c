#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int x = 100;
	int rc = fork();
	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0) {
		x = 300;
		printf("the value of x in child is %d\n", x);
	} else {
		x = 200;
		printf("the value of x in parent is %d\n", x);
	}
	printf("the final value? %d\n", x);
	return 0;
}
