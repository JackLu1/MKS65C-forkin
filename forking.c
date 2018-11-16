#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
//#include <signal.h>

int main(){

    int pid = getpid();
    //printf("ppid : %i and pid : %i\n", getppid(), getpid());
    //printf("PARENT : %i\n", getpid());
    //printf("%i\n",errno);
    //perror("errno");

    if (getpid() == pid){
        printf("I am parent %i\n", pid);
        int child0 = fork();
        int child1 = fork();
    }else{
        printf("I am child %i\n", getpid());
    }

    //perror("errno");

    //printf("I AM %i\n", getpid());

    return 0;
}
