#include <stdio.h>

int main(void)
{
	for(int i = 10; i >= 0; i--)
	{
		if (i%2 == 0)
			goto end;
		printf("%d ", i);
end : ;}}
