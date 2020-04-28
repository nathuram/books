int fact(int n)
{
	int factorial = 1;;

	for (int a = 1; a <= n; a++)
		factorial *= a;

	return factorial;
}
