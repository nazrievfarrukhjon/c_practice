#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Define a structure for key-value pairs
struct KeyValue {
    char *key;
    int value;
    struct KeyValue *next;
};

// Define a hash table as an array of pointers to KeyValue structures
struct KeyValue *hash_table[TABLE_SIZE];

// Hash function to convert a key into an index
unsigned int hash(const char *key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash * 31) + *key;
        key++;
    }
    return hash % TABLE_SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(const char *key, int value) {
    unsigned int index = hash(key);
    
    // Create a new KeyValue node
    struct KeyValue *new_pair = malloc(sizeof(struct KeyValue));
    new_pair->key = strdup(key);
    new_pair->value = value;
    new_pair->next = NULL;

    // Check for collisions and handle them using chaining
    if (hash_table[index] == NULL) {
        hash_table[index] = new_pair;
    } else {
        struct KeyValue *current = hash_table[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_pair;
    }
}

// Function to retrieve the value associated with a key
int get(const char *key) {
    unsigned int index = hash(key);

    struct KeyValue *current = hash_table[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }

    // Key not found
    return -1;
}

int main() {
    insert("apple", 5);
    insert("banana", 10);
    
    printf("Value for 'apple': %d\n", get("apple"));
    printf("Value for 'banana': %d\n", get("banana"));
    printf("Value for 'cherry': %d\n", get("cherry"));
    
    return 0;
}
