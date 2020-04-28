double inner_product(double a[], double b[], int n)
{
	double total = 0;

	for (n; n >0; n--)
		total += (a[n-1] * b[n-1]);
	
	return total;
}	
