int num_digits(long n)
{
	int a;

	for (a = 0; n != 0; a++)
	{
		n /= 10;
	}

	return a;
}



