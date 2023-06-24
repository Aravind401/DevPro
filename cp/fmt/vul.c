// string format issues
// printf("%s",string); right fomat
// print(string); wrong format
//
// need to pharse agrgument in run time

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int arct,char *args[]){

if(arct<2){

	printf("need input argument");
	exit(0);
}

static int test_val =-72;

char text[1024];

strcpy(text,args[1]);
printf("The right way to print user-controlled input:\n");
 printf("%s", text);
 printf("\nThe wrong way to print user-controlled input:\n");
 //printf(text);
 printf("\n");
 // Debug output
 printf("[*] test_val @ 0x%08x = %d 0x%08x\n", test_val, test_val,
test_val);
 exit(0);

}
