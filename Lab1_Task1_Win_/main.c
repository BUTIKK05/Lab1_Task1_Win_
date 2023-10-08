#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void Signal_Handler(int a)
{
    printf("Received signal: \n", a);
    exit(a);
}

int main()
{
    signal(SIGINT, Signal_Handler);
    printf("Waiting for signal \n");
    while (1) {}
    return 0;
}