#include <stdio.h>
#include <stdlib.h> // Include the stdlib.h header for malloc

struct node
{
    char *str;
    struct node *next;
};

typedef struct node node_t;

void iterateLinkedList(node_t *node)
{
    while (node != NULL)
    {
        printf(" .%s ", node->str);
        node = node->next;
    }
    printf("%c", '\n');
}

int main()
{
    node_t n1, n2, n3, n4;
    node_t *head;

    n1.str = "i am n 1";
    n2.str = "i am n 2";
    n3.str = "i an n 3";
    n4.str = "iam n 4";

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;


    node_t n5;
    n5.str = "qweqwe";
    n5.next = &n4;
    n3.next = &n5;


    n1.next = &n3;
    iterateLinkedList(head);


}
