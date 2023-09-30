#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int ac, char **av, char** envp)
{
	char*	file = "file.txt";
	char*	path = "/bin/cat";

	if (!fork())
	{
		int	fd = open(file, O_RDONLY);
		dup2(fd, 0);
		close(fd);
		// close(fd_pipe[0]);
		// close(fd_pipe[1]);
		char*	arg[] = {path, NULL};
		execve(path, arg, envp);
		exit(0);
	}
}