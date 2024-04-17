#include <stdio.h>

// create a structure

struct example

{

    int fruit_quant;

    float fruit_rate;

    char fruit_name[30];
};

int main()

{

    // s1 - object of the structure

    struct example s1 = {10, 90.45, "Mango"};

    // accessing structure members

    // using structure object

    printf("%d\n", s1.fruit_quant);

    printf("%f\n", s1.fruit_rate);

    int i;

    for (i = 0; s1.fruit_name[i] != '\0'; i++)

    {

        printf("%c", s1.fruit_name[i]);
    }

    return 0;
}