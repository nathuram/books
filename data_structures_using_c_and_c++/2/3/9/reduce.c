#include <stdlib.h>
#include <string.h>

char *reduce(char *expr, int left_paren, int right_paren)
{
		char *reduc_str = malloc(sizeof(char) * strlen(expr) - 1);

		int pos = 0;
		for (int i = 0; expr[i] != '\0'; i++){
				if (i != left_paren && i != right_paren)
						reduc_str[pos++] = expr[i];
		}

		return reduc_str;
}
