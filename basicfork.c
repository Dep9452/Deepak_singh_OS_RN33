#include<stdio.h>
#include<unistd.h>
int main(){

    printf("without forking\n");
    fork();
    printf("after forking \n");
    return 0;
}
