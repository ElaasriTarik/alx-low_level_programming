#include "main.h"

/**
 * create_file - create text file
 *@filename: the file name
 *@text_content: content
 * Return: (Success)
*/
int create_file(const char *filename, char *text_content)
{
int fd, wBytes, count = 0;

if (filename == NULL)
return (-1);

if (text_content)
while (text_content[count])
count++;

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

wBytes = write(fd, text_content, count);
if (wBytes != count)
return (-1);

close(fd);
return (1);
}
