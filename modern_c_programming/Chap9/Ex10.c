int function(int n, int a[n])
{
	int largest = a[0];
	for (; n >0, n--)
	{
		if (a[n-1] > largest)
			largest = a[n-1];
	}
	return largest;
}

float function(int n, int a[n])
{
	float average = 0;
	for (; n> 0; n--)
	{
		average += a[n-1];
	}

	return average/n;
}

float function(int n, int a[n])
{
	int number = 0;
	for (; n > 0; n--)
	{
		if (a[n-1] > 0)
			number++ ;
	}
	
	return number;
}



