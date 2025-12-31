#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10


typedef struct Entry {
    char *key;
    char *value;
    struct Entry *next; 
} Entry;


typedef struct {
    Entry *table[TABLE_SIZE];
} HashTable;


unsigned int hash(const char *key) {
    unsigned int hashValue = 0;
    while (*key) {
        hashValue = (hashValue * 31) + *key; 
        key++;
    }
    return hashValue % TABLE_SIZE;
}


HashTable* createTable() {
    HashTable newTable = (HashTable) malloc(sizeof(HashTable));
    for (int i = 0; i < TABLE_SIZE; i++) {
        newTable->table[i] = NULL;
    }
    return newTable;
}


void insert(HashTable *table, const char *key, const char *value) {
    unsigned int index = hash(key);
    Entry newEntry = (Entry) malloc(sizeof(Entry));
    newEntry->key = strdup(key);
    newEntry->value = strdup(value);
    newEntry->next  = table->table[index]; 
    table->table[index] = newEntry;
}


char* search(HashTable *table, const char *key) {
    unsigned int index = hash(key);
    Entry *current = table->table[index];
    
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value; 
        }
        current = current->next; 
    }
    
    return NULL; 
}


void delete(HashTable *table, const char *key) {
    unsigned int index = hash(key);
    Entry *current = table->table[index];
    Entry *previous = NULL;

    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            if (previous == NULL) {
                table->table[index] = current->next; 
            } else {
                previous->next = current->next;
            }
            free(current->key);
            free(current->value);
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }
}


void display(HashTable *table) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table->table[i] != NULL) {
            Entry *current = table->table[i];
            printf("Index %d: ", i);
            while (current != NULL) {
                printf("(%s: %s) -> ", current->key, current->value);
                current = current->next;
            }
            printf("NULL\n");
        }
    }
}

int main() {
    HashTable *table = createTable();
    

    insert(table, "name", "Alice");
    insert(table, "age", "25");
    insert(table, "country", "USA");
    
  
    printf("Contents of the hash table:\n");
    display(table);
    

    char *value = search(table, "name");
    if (value) {
        printf("Found 'name': %s\n", value);
    } else {
        printf("'name' not found.\n");
    }

   
    delete(table, "age");
    printf("After deleting 'age':\n");
    display(table);
    
    
    free(table);
    
    return 0;
}