int sum_array(const int a[], int n)
{
	int  sum;
	int *p;

	sum = 0;
	for (p = a; p < a + n; p++)
		sum += *p;
	return sum;
}
