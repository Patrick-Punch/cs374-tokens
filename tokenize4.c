/*
Patrick Punch
1/22/2025
CS 374
Winter 2025
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    // Define the tokens array
    char *tokens[128] = {0};
    char line[1024];

    printf("prompt> ");
    fflush(stdout);

    fgets(line, sizeof(line), stdin);

    size_t str_length = strlen(line);
    if (line[str_length - 1] == '\n')
    {
        line[str_length - 1] = '\0';
    }

    char *token;
    int index = 0;
    token = strtok(line, " ");

    while (token != NULL)
    {
        tokens[index] = token;
        index++;
        token = strtok(NULL, " ");
    }
    for (int i = 0; tokens[i] != NULL; i++){
        execvp(tokens[i], tokens);
        perror("error");
    }
}