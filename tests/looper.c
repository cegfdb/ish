#include <unistd.h>
#include <stdio.h>

void nop();

int main() {
    int loops = 100000000;
    printf("looping %d times\n", loops);
    for (int i = 0; i < loops; i++)
        nop();
    printf("done looping\n");
}
