#include <stdio.h>
int main()
{
	int a = 0;
	for(int i = 0; i < 10; i++)
	{
		a += 3;
		printf("%d\n", a);
	}
	return 0;
}