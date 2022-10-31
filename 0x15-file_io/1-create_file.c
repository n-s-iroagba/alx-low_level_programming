#include "main.h"

/**
*create_file - function to create and write into a file
*@filename: file to create
*@text_content: content to be written into file
*Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd, i;
size_t len = 1;

if (!filename)
return (-1)

fd = open(filename, O_RDONLY);

if (fd < 1)
{
fd = open(filename, O_CREAT, 0600);

if (fd < 1)
return (-1);

}

ftruncate(fd, 0);

if (!text_content)
return (1);

for (i = 0; text_content[i] != '\0'; len++, i++)
;

write(fd, text_content, len);
return (1);
}




