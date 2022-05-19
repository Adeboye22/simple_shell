#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(int argc, char **argv)
{
	char *cmd;

	do
	{
		print_prompt1();
		cmd = read_cmd();

		if(!cmd)
		{
			exit(EXIT_SUCCESS);
		}

		if(cmd[0] == '0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			break;
		}
		printf("%s\n", cmd);
		free(cmd)
	}
	while(1);
	exit(EXIT_SUCCESS);
}
