#include <stdio.h>

/*
 -   Pointers Store Addresses: 
    A pointer variable, when declared, can hold the memory
    address of a variable or a memory location.
 - &myVar gets address of myVar
 - pointers strongly typed
 - can point to null
 */

//assosiate pointer to address literals
//*p = 'address in memory'
// addres type it is pointer
int main() {

    //POINTERS ALWAYS WORK with ADRESES
    int i = 99;

    printf("address of i %p\n", &i);
    printf("value of i %d\n", i);

    int *p = &i;

    printf("address of p %p\n", &p);
    printf("value of p %p\n", p);

    return 0;
}