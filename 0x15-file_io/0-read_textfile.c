#include "main.h"


/**
 * read_textfile - read text file
 *@filename: the file name
 *@letters: letters
 * Return: (Success)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t rBytes;
FILE *fp;
ssize_t wBytes;

if (filename == NULL)
return (0);

fp = fopen(filename, "r");
if (fp == NULL)
return 0;

buff = (char *)malloc(letters + 1);
if (buff == NULL)
return 0;

rBytes = fread(buff, sizeof(char), letters, fp);
if (rBytes < 0)
{
free(buff);
return 0;
}

fclose(fp);
buff[rBytes] = '\0';

wBytes = write(STDOUT_FILENO, buff, rBytes);

if (wBytes < 0 || wBytes != rBytes)
{
free(buff);
return (0);
}

}
