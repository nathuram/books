int gcd(int m, int n)
{
	return m == 0? n: gcd(n, m%n);
}
