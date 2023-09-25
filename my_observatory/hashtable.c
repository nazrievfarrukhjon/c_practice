#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the size of the hash table
#define TABLE_SIZE 1000

// Structure for a key-value pair
struct KeyValuePair
{
    char *key;
    int value;
};

struct KeyValuePair *table[TABLE_SIZE];

// Hash function (this is a simple example; real-world hash functions are more complex)
unsigned int hash(char *key)
{
    unsigned int hash = 0;
    while (*key)
    {
        hash = (hash << 5) + *key++;
    }
    return hash % TABLE_SIZE;
}

// Initialize a hash table
void createHashTable()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = NULL;
    }
}

// Insert a key-value pair into the hash table
void insert(char *key, int value)
{
    struct KeyValuePair *kvp = (struct KeyValuePair *)malloc(sizeof(struct KeyValuePair));
    
    unsigned int index = hash(key);
    kvp->key = strdup(key);
    kvp->value = value;

    // Insert it into the appropriate bucket
    table[index] = kvp;
}

int main(int argc, char *argv[])
{
    createHashTable();

    for(int i = 0; i < 1000; i++) {
        char name[10];
        snprintf(name, sizeof(name), "name%d", i);
        insert(name, i);
    }
    printf("%c", '\n');
    int hash_index  = hash("name1");
    printf("-> RESULT. val: %d, key: %s, hash_index: %d;\n", table[hash_index]->value, table[hash_index]->key, hash_index);
    printf("%c", '\n');

    return 0;
}
