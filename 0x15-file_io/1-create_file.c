#include "main.h"

/**
 * create_file - create text file
 *@filename: the file name
 *@text-content: content
 * Return: (Success)
*/
int create_file(const char *filename, char *text_content)
{
int fd, count;
ssize_t wBytes;
if (filename == NULL)
return (-1);

if (text_content == NULL)
fd = open(filename, O_RDWR | O_CREAT | S_IRUSR | S_IWUSR);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

while (text_content != NULL)
count++;

count++;
wBytes = write(fd, text_content, count);

if (wBytes == -1)
{
close(fd);
return (-1);
}


close(fd);
return (1);
}
