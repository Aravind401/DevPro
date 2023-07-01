#define one 1
#define two 2
# define three 3
#include "def2.c"
#include<stdio.h>
extern int max(int a, int b);
int main(){

int x=one, y=two,z=three;

printf("%d \n%d \n%d",x,y,z);

int c=max(10,20);

printf("\nThe MAX value is %d\n",c);
return 0;
}


