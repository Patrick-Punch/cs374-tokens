#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    (void)argc; // stop compiler warnings about ununsed variables
    (void)argv;
    char line[1024];

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
        printf("%d: %s\n", index++, token);
        token = strtok(NULL, " ");
    }
}