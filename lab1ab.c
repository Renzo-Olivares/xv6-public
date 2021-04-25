#include "types.h"
#include "user.h"

int main (int argc, char **argv)
{
    int status;
    int pid;

    pid = fork();
    if(pid == 0){
        printf(1, "Hello from child\n");
        exit(99);
    }

    if(pid){
        printf(1,"Hello from parent\n");
        wait(&status);
        printf(1,"Child has terminated\n");
        printf(1, "Child exit status %d\n", status);
    }

    exit(0);
}