#include "types.h"
#include "user.h"
int main (int argc, char **argv)
{
    int prir = set_prior(30);
    printf(1, "PRIORITY: %d\n", prir);
    int i,k;
    for(i = 0; i < 43000; i++){
        asm("nop");
        for(k = 0; k < 43000; k++){
            asm("nop");
        }
    }
    exit();
}