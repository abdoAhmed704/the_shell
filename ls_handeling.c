#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;

	char *args[] = {"/bin/ls", "-l", NULL};
	pid = fork();

	if (pid == 0)
	{
		wait(NULL);	
		int val = execve(args[0], args, NULL);
		if (val = -1)
			perror("ERROR!!\n");
	}else
	{
		printf("Done..\n");
	}
	return (0);
	

}
