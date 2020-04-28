int a(struct stack *ps)
{
		pop(ps);
		int i = pop(ps);
		return i;
}

int b(struct stack *ps)
{
	int x = pop(ps);
	int i = pop(ps);
	push(ps, i);
	push(ps, x);
	return i;
}

int c(struct stack *ps, int n)
{
		for (int i = 0; i < n-1; i++)
				pop(ps);
		int i = pop(ps);
		return i;
}

int d(struct stack *ps, int n)
{
		struct stack ps2
		for (int i = 0; i < n-1; i++)
				push(&ps2, pop(ps));

		int i = pop(ps);
		push(ps, i);

		for (int i = 0; i < n-1; i++)
				push(ps, pop(&ps2));
		return i;
}

int e(struct stack *ps)
{
		int i;
		while(empty(ps) == false)
				i = pop(ps);

		return i;
}

int f(struct stack *ps)
{
		struct stack ps2;
		while (empty(ps) == false)
				push(&ps2, pop(ps));

		int i = pop(&ps2);

		while(empty(ps2) == false)
				push(ps, pop(&ps2));

		return i;
}

int g(struct stack *ps)
{
		struct stack ps2;
		while(empty(ps) == false)
				push(&ps2, pop(ps));

		push(ps, pop(&ps2));
		push(ps, pop(&ps2));

		i = pop(&ps2);
		push(ps, i);
		while(empty(&ps2) == false)
				push(ps, pop(&ps2));

		return i;
}


		
