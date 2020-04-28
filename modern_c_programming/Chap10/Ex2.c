int b, c;

void f(void)  	// internal b, c, d
{
	int b, d;
}

void g(int a)  //a, b, internal c;
{
	int c;
	{
		int a, d; // internal a, d, internal c, b
	}
}

int main(void)  //internal c, b, d
{
	int c, d;
}
