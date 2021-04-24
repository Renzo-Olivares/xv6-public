#include "types.h"
#include "user.h"

int main (int argc, char **argv)
{
    int status;
    int pid;

    pid = fork();
    printf(1, "Child id %d \n", pid);
    if(pid == 0){
        printf(1, "Hello from child\n");
        exit(99);
    }

    if(pid){
        printf(1,"Hello from parent\n");
        printf(1, "Wait for %d \n", pid);
        int w = waitpid(pid, &status, 0); // option argument is not used
        printf(1,"Wait return %d \n", w);
        printf(1,"Child has terminated\n");
        printf(1, "Child exit status %d\n", status);
    }

    exit(0);
}