double gcd(double m, double n)
{
	if (n == 0)
		return m;
	else
		gcd(n, m%n);
}
