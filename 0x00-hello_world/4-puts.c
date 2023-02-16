#include <stdio.h>

int main()
{
	char source_file[] = "CFILE";
        char executable_file[] = ""Programming is like building a multilingual puzzle";	
	
	if (system("gcc -Wall -Werror -Wextra -pedantic -std=gnu89 CFILE  -o "Programming is like building a multilingual puzzle") == 0)
	{	
		write("Compilation successful\n");
		return (0);
	}

}
