#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	FILE * fp = fopen("file.txt", "a");

	char tmp[] = {};
	pid_t pid;

	if((pid = fork()) < 0)
	{
		perror("fork error");
	}
	else if(pid == 0) //child
	{
		fprintf(fp, "201521224, choijinwoo\n");
	}
	else	// parent	
	{
		fscanf(fp, "%s", tmp);

		printf("%s", tmp);
	}
	
	fclose(fp);	

	return 0;
}
