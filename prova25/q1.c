#include <stdio.h>

int main(){

    int a = 2, b = 3;
    int c = (a += b++) + (++a * b) - (a-- | ++b);

    printf("a = %d\n",a);
    printf("c = %d\n",c);

    return 0;
}