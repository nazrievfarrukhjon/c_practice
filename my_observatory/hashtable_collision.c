#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100000000

struct element {
    char *name;
    int counter;    
};
struct element table[TABLE_SIZE];

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

void insert(const char *key)
{
    unsigned int index = hash(key);
    
    struct element new_el;
    new_el.counter = 0;
    new_el.name = strdup(key);
    
    while (table[index].name != NULL) {
        new_el.counter++;
        index++;
    }
    
    table[index] = new_el;
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

    if (
        table[hash_index].counter == 0 &&
        table[hash_index].name == NULL
     ) {
        printf("%s", "not found\n");
    } else {
        printf("-> RESULT: %s, hash_index: %d, counter %d;\n", table[hash_index].name, hash_index, table[hash_index].counter);
    }

    printf("%c", '\n');

}

void cleanup() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i].name != NULL) {
            free(table[i].name);
        }
    }
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

    cleanup();

    return 0;
}