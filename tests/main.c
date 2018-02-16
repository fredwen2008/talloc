#include <stdio.h>
#include <talloc.h>

int main()
{
    int *mem = talloc(NULL, int);
    *mem = 20;
    talloc_free(mem);
    return 0;
}
