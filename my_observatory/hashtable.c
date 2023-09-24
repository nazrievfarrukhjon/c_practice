#include <stdio.h>
#include <string.h>

long hash(char *str)
{
    int str_length = strlen(str);

    long h = str[0];

    for (int i = 1; i < str_length; i++)
    {
        // printf(" %d ", str[i]);
        int tmp = str[i];
        if (tmp / 10 < 1)
        {
            h = h * 10;
            h = ((h + tmp) / 2);
        }
        else if (tmp / 100 < 1)
        {
            h = h * 100;
            h = ((h + tmp) / 20);
        }
        else if (tmp / 1000 < 1)
        {
            h = h * 1000;
            h = ((h + tmp) / 200);
        }
    }

    return h/1000000000;//??????
}

struct node
{
    char *name;
};

struct node has_t[600];

int main()
{
    char *s1 = "arruqjonnazriev";
    char *s2 = "frruqjonnazriev";
    char *s3 = "faruqjonnazriev";
    char *s4 = "farrqjonnazriev";
    char *s5 = "farrujonnazriev";
    char *s6 = "farruqonnazriev";

    struct node n1;
    n1.name = s1;
    int key = hash(s1);
    has_t[key] = n1;

     struct node n2;
     n2.name = s2;
     has_t[hash(s2)] = n2;

     struct node n3;
     n3.name = s3;
     has_t[hash(s3)] = n3;

     struct node n4;
     n4.name = s4;
     has_t[hash(s4)] = n4;

     struct node n5;
     n5.name = s5;
     has_t[hash(s5)] = n5;

     struct node n6;
     n6.name = s6;
     has_t[hash(s6)] = n6;


    int myhash = hash("frruqjonnazriev");

    printf(" %d \n", myhash);

    printf(" %s \n", has_t[myhash].name);
}