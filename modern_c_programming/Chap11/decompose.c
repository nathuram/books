void decompose(double x, long *int_par, double *frac_part);

void decompose(double x, long *int_par, double *frac_part);
{
	*int_part = (long) x;
	*frac_part = x - *int_part;
}

