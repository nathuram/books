

int temperature_readings[30][24]; temp_sum;
	for (int a = 0; a < 30; a++){
		for (int b=0; b<24; b++){
			temp_sum += temperature_readings[a][b];
		}
	}
	
	printf("Average temperature of one month is %d\n", temp_sum/(30*24));


	
			
