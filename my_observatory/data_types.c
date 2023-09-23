#include <stdio.h>

int main()
{
    // primitive types
    char c = 'a';
    printf("char %c\n", c);
    short sh = 2;
    printf("short %d\n", sh);
    int i = 33;
    printf("int %d\n", i);
    float f = 0.0;
    printf("float %f\n", f);
    double d = 0.0;
    printf("double %f\n", d);

    // arrays
    char c_arr[1];
    printf("char arr %lu\n", sizeof(c_arr));
    short sh_arr[1];
    printf("short arr %lu\n", sizeof(sh_arr));
    int i_arr[1];
    printf("int arr %lu\n", sizeof(i_arr));
    float f_arr[1];
    printf("float arr %lu\n", sizeof(f_arr));
    double d_arr[1];
    printf("double arr %lu\n", sizeof(d_arr));

}