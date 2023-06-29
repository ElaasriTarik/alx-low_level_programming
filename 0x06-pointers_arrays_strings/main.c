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
int arr[n];
int x = 0;
int fin = n - 1;
while (x <= fin)
{
arr[x] = a[x];
x++;
}
x--;
int c = 0;
while (x > 0)
{
a[c] = arr[x];
x--;
c++;
}
c = 0;
while (c < n)
{
printf("%d, ", a[c]);
c++;
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
