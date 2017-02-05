#include <stdio.h>

int main(int argc, char **argv){
printf("=% d\n", (*argv[1] - '0') + (*argv[2] - '0'));
return 0;
}
