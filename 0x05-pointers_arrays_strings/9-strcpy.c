/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
Reurn: pintero dest
 */
car *_strcpy(cha * to thr *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}