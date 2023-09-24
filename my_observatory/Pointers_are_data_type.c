#include <stdio.h>

//function it returns poiter data type (pointers literals are  addresses only OR NULL)
int *my_pointer_function() {
    int i = 99;
    int *p = &i;

    return p;
}

int main() {
    printf("%p\n", my_pointer_function());
    
    int i = *my_pointer_function();

    printf("%d\n", i);

}