#include <stdio.h>
#include <string.h>

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

void reverse_array(int *a, int n)
{
    int r;
    int i = 0;
    while(i < n/2){
        r = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = r;
        i++;
    }
}
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    printf("\n");
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
