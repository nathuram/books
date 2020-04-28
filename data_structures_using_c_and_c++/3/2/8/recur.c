#include <stdio.h>
#include <stdbool.h>

bool f(int i){
		if (i)
				return true;
		else
				return false;
}

int g(int i)
{
		return --i;
}

void iter(int n)
{
		int i;

		i = n;
		while (f(i) == true){
				printf("%d ", i);
				i = g(i);
		}
}

void recur(int i)
{
		if (i){
				printf("%d ", i);
				recur(g(i));
		}
		else
				return;
		return;
}

int main(void)
{
		int n;
		printf("Enter a number: ");
		scanf("%d", &n);

		iter(n);
		printf("\n");
		recur(n);
		printf("\n");

		return 0;
}
				
		
