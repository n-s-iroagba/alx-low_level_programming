#include "main.h"

/**
*append_text_to_file - function to append text to file
*@filename : file to be appended to
*@text_content: text to be appended
*Return: 1 if successfull, -1 on fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, i;
size_t len = 1;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd < 0)
return (-1);
if (text_content)
{
for (i = 0; text_content[i] != '\0'; i++,len++)
;

write(fd, text_content,len);
}

close(fd);
return (1);

}


