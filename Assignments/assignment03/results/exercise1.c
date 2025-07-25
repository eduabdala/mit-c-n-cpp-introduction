#include <stdio.h>

// TO-DO: Use pointers and addresses to modify the code

void square(int num)
{
    num = num * num;
}

int main()
{
    int x = 4;
    square(x);
    printf("%d\n", x);
    return 0;
}