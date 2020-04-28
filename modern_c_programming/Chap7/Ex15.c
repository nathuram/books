#include <stdio.h>
#include <stdint.h>

int main(void)
{
	typedef int8_t Int8;
	typedef int16_t Int16;
	typedef int32_t Int32;

	printf("The size of Int8 is %d\n", 8*sizeof(Int8));
	printf("The size of Int16 is %d\n",8* sizeof(Int16));
	printf("The size of Int32 is %d\n",8* sizeof(Int32));
}
