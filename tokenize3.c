#include <stdio.h>
#include <string.h>

int main(void)
{
    // Define the tokens array
    char *tokens[128] = {0};
    char line[1024];

    fgets(line, sizeof(line), stdin);

    size_t str_length = strlen(line);
    if (str_length > 0 && line[str_length - 1] == '\n')
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
    // Prints out the tokens
    for (int i = 0; tokens[i] != NULL; i++)
        printf("%d: %s\n", i, tokens[i]);
}