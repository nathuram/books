#include <stdio.h>
#include <color.h>

void tower(int n, char from, char to, char aux)
{
		if (n==1){
				printf("Move" RED " disc 1 " COLOR_RESET "from " GREEN "%c " COLOR_RESET "to " BLUE "%c\n" COLOR_RESET, from, to);
				return;
		}

		tower(n-1, from, aux, to);
		printf("Move" RED " disc %d " COLOR_RESET "from " GREEN "%c " COLOR_RESET "to " BLUE "%c\n" COLOR_RESET, n, from, to);

		tower(n-1, aux, to, from);
		return;
}

int main(void)
{
		char A = 'A', B = 'B', C = 'C';
		int n;
		printf(CYAN "Enter number of discs: " YELLOW);
		scanf("%d", &n);
		printf(COLOR_RESET "");

		tower(n, A, C, B);
		return 0;
}

