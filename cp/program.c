// overflow .c 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int check(char *password);
int check(char *password) {
 int flag = 0;
 char buffer[16];
 strcpy(buffer, password);
 if(strcmp(buffer, "aravind") == 0)
 flag = 1;
 if(strcmp(buffer, "outcast") == 0)
 flag = 1;
 return flag;
}

int main(int count,char *args[])
{
	if(count<2){
	
	printf("Usage %s Argument Not passed\n",args[0]);
	exit(0); 
	}

if(check(args[1])) {
 printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
 printf(" Access Granted.\n");
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
 } else {
 printf("\nAccess Denied.\n");
 }


}
