#include <stdio.h>
#include <malloc.h>

int main(void)
{
    char *pszData = NULL;

    pszData = (char *)malloc(sizeof(char) * 6);
    printf("%ld\n", malloc_usable_size(pszData));
    free(pszData);
    return 0;
}