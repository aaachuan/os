#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	close(STDOUT_FILENO);
	int open_flag = open("./c3.output", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
	char *myargs[3];
	myargs[0] = strdup("wc");
	myargs[1] = strdup("c2.c");
	myargs[2] = NULL;
	int rc = fork();
	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0) {
		printf("the child's open_flag: %d\n", open_flag);
		myargs[0] = strdup("wc");
		myargs[1] = strdup("c3.c");
		myargs[2] = NULL;
		execvp(myargs[0], myargs);
	} else {
		printf("the parent's open_flag: %d\n", open_flag);
		execvp(myargs[0], myargs);
	}
	return 0;
}
