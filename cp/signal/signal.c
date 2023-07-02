// signal handlers
// stop the infinite loop
//
#include<stdio.h>
#include<stdlib.h>
#include<signal.h>


void sigint_handler(int a){

printf("cought signal handler int found %d",a);

exit(0);


}

void Sig_handler(int a){

printf("cough signal handler %d \t",a);


if(a==SIGTSTP)
	printf("ctrl-z");
else if(a==SIGQUIT)
	printf("ctrl \\");
			else if(a==SIGUSR1)
				printf("usr1");
else if (a==SIGUSR2)
	printf("usr2");
printf("\n");

}
int main(){

	signal(SIGQUIT,Sig_handler);
	  signal(SIGTSTP,Sig_handler);
	    signal(SIGUSR1,Sig_handler);
	      signal(SIGUSR2,Sig_handler);
signal(SIGINT,sigint_handler);

while(1){}
}

