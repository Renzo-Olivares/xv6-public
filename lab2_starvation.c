#include "types.h"
#include "user.h"
int main (int argc, char **argv)
{
    int prir = set_prior(0);
    printf(1, "PRIORITY: %d\n", prir);
    for(;;){
        asm("nop");
    }
    exit();
}