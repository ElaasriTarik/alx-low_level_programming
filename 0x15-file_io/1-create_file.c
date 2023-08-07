#include "main.h"

/**
 * create_file - create text file
 *@filename: the file name
 *@text-content: content
 * Return: (Success)
*/
int create_file(const char *filename, char *text_content)
{
int fd, count, wBytes = 0;
if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd < -1)
return (-1);

if (text_content)
{
while (text_content[count])
count++;
wBytes = write(fd, text_content, count);
if (wBytes != count)
{
return (-1);
}
}

close(fd);
return (1);
}
