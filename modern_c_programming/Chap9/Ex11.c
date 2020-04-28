float compute_GPA(char grades[], int n)
{
	float total;

	for (; n >0; n--)
		switch (grades[n-1])
		{	
			case 'A': total += 4; break;
			case 'B': total += 3; break;
			case 'C': total += 2; break;
			case 'D': total += 1; break;
			case 'F': total += 0; break;
		}
	
	return total/n;
}	
