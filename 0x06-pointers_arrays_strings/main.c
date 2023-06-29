#include <stdio.h>
#include <string.h>

char *cap_string(char *s)
{
int x = 0;
	while (s[x])
	{
		while (!(s[x] >= 'a' && s[x] <= 'z'))
			x++;

		if (s[x - 1] == ' ' ||
		    s[x - 1] == '\t' ||
		    s[x - 1] == '\n' ||
		    s[x - 1] == ',' ||
		    s[x - 1] == ';' ||
		    s[x - 1] == '.' ||
		    s[x - 1] == '!' ||
		    s[x - 1] == '?' ||
		    s[x - 1] == '"' ||
		    s[x - 1] == '(' ||
		    s[x - 1] == ')' ||
		    s[x - 1] == '{' ||
		    s[x - 1] == '}' ||
		    x == 0)
			s[x] -= 32;

		x++;
	}

	return (s);

}

int main(void)
{
   char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
