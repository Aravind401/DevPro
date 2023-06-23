//get environment variable
//
/
#include <stdio.h>
#include <stdlib.h>
#include<stddef.h>
int main(int argc, char *argv[]) {
 printf("%s is at %p\n", argv[1], getenv(argv[1]));
}
