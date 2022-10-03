/**
 * _strlen - returns the  length of the string s
 *@s: string parameter
 * Return:len
 */


int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
