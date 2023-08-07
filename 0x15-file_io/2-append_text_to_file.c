#include "main.h"

/**
 * create_file - create text file
 *@filename: the file name
 *@text_content: content
 * Return: (Success)
*/
int append_text_to_file(const char *filename, char *text_content)
{
int count = 0;
int fp;
ssize_t wBytes;

if(filename == NULL)
return (-1);

fp = open(filename, O_WRONLY | O_APPEND);
if (fp == -1)
return (-1);

while (text_content[count])
count++;

if (text_content)
{
wBytes = write(fp, text_content, count);
if (wBytes == -1)
return (-1);
}

close(fp);
return (1);

}
