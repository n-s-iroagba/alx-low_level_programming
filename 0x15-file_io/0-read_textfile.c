/**
*read_textfile - function that reads a text file and prints it to stdout
*@filename : name of file to be read
*@letters : number of characters to be read
*Return: number of bytes read
*/
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
size_t wr; /*byte read and written*/

if (!filename)
return (0);

fd = open(filename, O_RDONLY, 0444);

if (fd < 0)
return (0);

buffer = malloc(sizeof(char) * letters);
wr = read(fd, buffer, letters);
write(1, buffer, wr);

close(fd);

return (wr);



}
