#include "lists.h"

/**
 * before_main - prints something before main function
 * executes
 * 
 * Return: Void
*/

void before_main(void) __attribute__((constructor));
void before_main(void) {
    printf("You're beat! and yet, you must allow,\n");
}
