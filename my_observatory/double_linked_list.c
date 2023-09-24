#include <stdio.h>

struct node {
    struct node *next;
    struct node *prev;
    int value;
};

int main() {

    struct node n1, n2, n3, n4;

    n1.next = &n2;
    n1.prev = NULL;
    n1.value = 1;

    //
    n2.next = &n3;
    n2.prev = &n1;
    n2.value = 2;

    //
    n3.next = &n4;
    n3.prev = &n2;
    n3.value = 3;
    
    //
    n4.next = NULL;
    n4.prev = &n3;
    n4.value = 4;

    struct node *temp;
    temp = &n1;
    
    while (temp != NULL)
    {
        printf(" %d ", temp->value);
        temp = temp->next;
    }

       printf("%c", '\n');
    
    struct node *temp1;
    temp1 = &n4;
    
    while (temp1 != NULL)
    {
        printf("%d ", temp1->value);
        temp1 = temp1->prev;
    }    

}