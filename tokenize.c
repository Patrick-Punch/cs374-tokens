/*
Patrick Punch
1/22/2025
CS 374
Winter 2025
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    (void)argc; // stop compiler warnings about ununsed variables

    char *token;
    int index = 0;
    token = strtok(argv[1], " ");

    while (token != NULL)
    {
        printf("%d: %s\n", index++, token);
        token = strtok(NULL, " ");
    }
}