#include"main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}
/**
* _isalpha - function alphabetic
* @c: argument
* Return: result
*/
int _isalpha(int c)
{
	return 0;
}

/**
 * _abs - function that computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
        if (n >= 0)
        {
                return (n);
        }
        return (-n);
}
/**
 *_isupper - check if is upper
*@c:parameter
 *Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: function parameter
 * Return: 1 if digit or 0 otherwise
 */

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * _strlen - function to print the length
 * @s: parameter
 * Return: return length
 */
int _strlen(char *s)
{
        int leng = 0;

        while (*s != '\0')
        {
                leng++;
                s++;
        }
        return (leng);
}
/**
 * _puts -  function that prints a string
 * @str: pointer parameter
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str++);
        }
                _putchar('\n');

}
/**
 * char *_strcpy - a function that copies a string
 * @dest: copy
 * @src: copy
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
        int l = 0;
        int x = 0;

        while (*(src + l) != '\0')
        {
                l++;
        }
        for ( ; x < l ; x++)
        {
                dest[x] = src[x];
        }
        dest[l] = '\0';
        return (dest);
}

/**
* _atoi - format a string
* @s: pointer
* Return: value
*/
int _atoi(char *s)
{
	return 0;
}

/**
* _strncat - string concat
* @dest:pointer to the result
* @src: pointer to the result
* Return: result
*/
char *_strncat(char *dest, char *src, int n)
{
	return (dest);
}

/**
 * _strcat - function to concatenate 2 strings
 *@dest: pointer
 *@src: pointer
 *Return: value of first pointer
 */

char *_strcat(char *dest, char *src)
{
        int i = 0;
        int leng = 0;

        while (dest[i] != '\0')
        {
                leng++;
                i++;
        }
        for (i = 0; i <= leng; i++)
        {
                dest[leng + i] = src[i];
        }
return (dest);
}

/**
*_strncpy - copies a string
*@dest: destination
*@src: source string
*@n: argument
*Return: result of new string
*/
char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;

        while (i < n && src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }
return (dest);
}
/**
*_strcmp - compare two strings
*@s1: string to compare
*@s2: string to compare
*Return: 1 or 0 as a result
*/
int _strcmp(char *s1, char *s2)
{
        int i = 0;

        while (s1[i] != '\0' && s2[i] != '\0')
        {
                if (s1[i] != s2[i])
                {
                        return (s1[i] - s2[i]);
                }
                i++;
        }
return (0);
}
/**
*_memset - function to fills the memory
*@s: parameter
*@b: parameter
*@n: parameter
*Return: pointer result
*/
char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;

        for (i = 0; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
return (s);
}

/**
*_memcpy - copies memory
*@dest: copy destination
*@src: copy source
*@n: copy parameter
*Return: return pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int i;
        int c = n;

        for (i = 0; i < c; i++)
        {
                dest[i] = src[i];
                n--;
        }
return (dest);
}
/**
*_strchr - fill a string with a char
*@s: string to fill
*@c: character to be used
*Return: result
*/
char *_strchr(char *s, char c)
{
        int i = 0;

        for (i = 0; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (&(s[i]));
        }
return (0);
}
/**
*_strpbrk - search a string
*@s: parameter
*@accept: parameter
*Return: result
*/
char *_strpbrk(char *s, char *accept)
{
        int i = 0;

        while (*s != '\0')
        {
                for (i = 0; accept[i] != '\0'; i++)
                {
                        if (*s == accept[i])
                                return (s);
                }
                s++;
        }
        return ('\0');
}

unsigned int _strspn(char *s, char *accept)
{
        int i;
        unsigned int count = 0;

        while (*s)
        {
                for (i = 0; accept[i] != '\0'; i++)
                {
                        if (*s  == accept[i])
                        {
                                count++;
                                break;
                        }
                        else if (accept[i + 1] == '\0')
                                return (count);
                }
                s++;
        }
return (count);
}
/**
*_strstr - finds the first occurance
*@haystack: parameter
*@needle: parameter
*Return: result
*/
char *_strstr(char *haystack, char *needle)
{

        for (; *haystack != '\0'; haystack++)
        {
                char *C = haystack;
                char *N = needle;

                while (*C == *N && *N != '\0')
                {
                        C++;
                        N++;
                }
                if (*N == '\0')
                        return (haystack);
        }
return (0);
}

