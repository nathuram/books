int digit(long n, int k)
{
	int a;

	for (; k>=0; k--)
	{
		a = k % 10;
		k -= a;
	}

	return a;
}
