#include <limits.h> /* for INT_MAX and INT_MIN */

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
    int sign = 1, num = 0;

    while (*s)
    {
        if (*s == '-')
            sign = -1;
        else if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
            {
                /* overflow detected */
                return -1;
            }
            num = num * 10 + digit;
        }
        else if (num > 0) /* stop on non-digit after number */
            break;
        s++;
    }

    return sign * num;
}
