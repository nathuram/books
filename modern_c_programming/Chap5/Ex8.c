#include <stdio.h>

int main(void){

	int age;
	
	printf("Enter age : ");
	scanf("%2d", &age);

	(age >= 13 && age <= 19) ? printf("Teenager\n") : printf("Not a Teenager\n");
}

