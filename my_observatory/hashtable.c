#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100000000

char *table[TABLE_SIZE];

unsigned int hash(const char *key)
{
    unsigned int hash = 0;
    while (*key)
    {
        hash = (hash << 5) + *key++;
    }
    return hash % TABLE_SIZE;
}

void createHashTable()
{
    memset(table, 0, sizeof(char *) * TABLE_SIZE);
}

void insert(char *key)
{
    unsigned int index = hash(key);
    table[index] = strdup(key);
}

int isTablePopulated = 0;

void find(char *input)
{
    if (isTablePopulated == 0)
    {
        printf("%s\n", "entered to populate");
        createHashTable();
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            char name[10];
            snprintf(name, sizeof(name), "name%d", i);
            insert(name);
        }
        isTablePopulated = 1;
        printf("%s\n", "finished to populate");
    }

    printf("%c", '\n');
    int hash_index = hash(input);

    if (table[hash_index] == NULL)
    {
        printf("%s", "not found\n");
    } else {
        printf("-> RESULT: %s, hash_index: %d;\n", table[hash_index], hash_index);
    }

    printf("%c", '\n');

}


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <search_key>\n", argv[0]);
        return 1;
    }

    char *input = argv[1];
    while (strcmp(input, "exit") != 0)
    {
        find(input);

        // Get the next input from the user
        printf("Enter a search key (or 'exit' to quit): ");
        scanf("%s", input);
    }

    return 0;
}