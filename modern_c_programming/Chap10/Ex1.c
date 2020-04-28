int a;

void f(int b)  // parameter: b; variable: c, a;
{
	int c;
}

void g(void)  // variable d, e, a;
{
	int d;
	{
		int e; //variable e, a;
	}
}

int main(void)
{
	int f; // variable f, a;
}
