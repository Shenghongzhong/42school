#include <stdio.h>
#include <unistd.h>

int main()
{	
	char c[2] = "\\\n";
	write(1, c, 2);
}
