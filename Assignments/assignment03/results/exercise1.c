#include <stdio.h>

void square(int* num)
{
    *num = (*num) * (*num);
}

int main()
{
    int x = 4;
    int *num = &x;
    square(num);
    printf("%d\n", *num);
    return 0;
}
