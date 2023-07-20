#include <stdio.h>
#include <stdlib.h>

void a(char *b)
{
      char b;
      printf("you name: ");
      scanf("%s", &b);
    printf("hello there %c", b);
}

int main(){
      void (*p)();
      p = &a;
      p();
      return 0;
}


