#include <stdio.h>
#include <string.h>

/**
 * Concatenates two strings with a space in between.
 * @param dest Destination buffer where the result will be stored.
 * @param str1 First string.
 * @param str2 Second string.
 */
void concatWithSpace(char* dest, const char* str1, const char* str2)
{
    strcpy(dest, str1);
    strcat(dest, " ");
    strcat(dest, str2);
}

/**
 * Placeholder function.
 * Should automatically define string size (currently not possible with static arrays).
 */
void defineStringSize()
{
    // TO-DO: implement this function
}


int main (int argc, char* argv[])
{
    int data[] = {22, 11, 2002};

    char str1[30];
    strcpy(str1, "value using strcpy ");
    strcat(str1, "value with strcat");

    char str2[50];
    concatWithSpace(str2, "hello", "world");
    printf("concat spaced: %s\n", str2);

    printf("result: %s\n", str1);
    printf("%d \n", data[2]);
    
    return 0;
}
