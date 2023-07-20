#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

struct User
{
    char *name;
    char *email;
    int age;
};
struct User *new_user(char *name, char *email, int age) 
{
    struct User *user;
    user->name = name;
    user->email = email;
    user->age = age;
    return user;
    
};

int main(void)
{
    struct User *user;

    user = new_user("Foo", "foo@foo.bar", 98);
       if (user == NULL)
       return (1);
       
    printf("User %s created! \n", user->name);
    printf("His email is: %s \n", user->email);
    printf("And he is %d years old \n", user->age);
    return (0);
}
