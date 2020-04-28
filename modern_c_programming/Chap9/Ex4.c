int day_of_year(int month, int day, int year)
{
	if ( (year % 4 == 0) && (year % 400 == 0))
	{
		switch(month)
		{
			case 1: return day;
				break;
			case 2: return day+31;
				break;
			case 3: return day+60;
				break;
			case 4: return day+91;
				break;
			case 5: return day+121;
				break;
			case 6: return day+152;
				break;
			case 7: return day+182;
				break;
			case 8: return day+213;
				break;
			case 9: return day+244;
				break;
			case 10:return day+274;
				break;
			case 11:return day+305;
			        break;
			case 12:return day+335;
				break;
		}
	}
	else
	{
		switch(month)
		{
			case 1: return day;
				break;
			case 2: return day+31;
				break;
			case 3: return day+59;
				break;
			case 4: return day+90;
				break;
			case 5: return day+120;
				break;
			case 6: return day+151;
				break;
			case 7: return day+181;
				break;
			case 8: return day+212;
				break;
			case 9: return day+243;
				break;
			case 10: return day+273;
			 	break;
			case 11: return day+304;
				break;
			case 12: return day+334;
				break;
		}
	}
}


		
