#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define GARAGESIZE 10

struct car {
		int n;
		int license_num;
};

struct stack{
		int top;
		struct car* arr[GARAGESIZE];
};

struct stack st1, st2;

void initstack(struct stack *st)
{
		st->top = -1;
}

int stkempty(struct stack *st)
{
		if (st->top < 0)
				return 1;
		return 0;
}

void push(struct stack *st, struct car *c)
{
		if (st->top == GARAGESIZE-1){
				printf("No space\n");
				return;
		}
		st->arr[++(st->top)] = c;
		return;
}

struct car * pop(struct stack *st)
{
		if (st->top < 0){
				printf("Garage Empty\n");
				exit(1);
		}
		return st->arr[(st->top)--];
}

struct car * popincr(struct stack *st)
{
		(st->arr[st->top])->n++;
		return (st->arr[(st->top)--]);
}

struct car * stktop(struct stack *st)
{
		return st->arr[st->top];
}

int main(void)
{
		initstack(&st1);
		initstack(&st2);

		printf("1\n");

		while (true)
		{		int li_num;

				if(getchar() == 'A'){
					scanf("%d ", &li_num);
					struct car *c = malloc(sizeof(struct car));
					c->n = 0;
					c->license_num = li_num;
					push(&st1, c);
					printf("Car #%d has arrived\n", li_num);
				}
				else {
					scanf("%d ", &li_num);
					while (stktop(&st1)->license_num != li_num){
							push(&st2, popincr(&st1));
					}
					struct car *c = pop(&st1);
					printf("Car #%d is departing and has been moved %d times\n", c->license_num, c->n);
					while (stkempty(&st2) == 0)
							push(&st1, pop(&st2));
				}
		}

		return 0;
}







