// format strinf
// %d for decimal
// %s for string
// %n for null bytes written so far
// %u for unsigned decimal
// %x for Hexadecimal

#include<stdio.h>
#include<stdlib.h>

int main(){

	int A=10,B=20, count_one,count2;

	printf("the %n of bytes stored Count_One\n the X%n bytes stored in Count2",&count_one,&count2);

	printf("the count one %d\n and the count 2 %d\n",count_one,count2);

	printf("A is %d and is at  %08x b is %x.\n",A,A,B);
	exit(0);

}
