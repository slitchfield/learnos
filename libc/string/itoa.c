
#include <string.h>

void _strrev(char *str, size_t len)
{
    if (!str) return;
    for ( int i = 0; i < (len/2); i++)
    {
        char c = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = c;
    }
}

size_t itoa(char* buf, int val, unsigned int base)
{
    int digit, sign = 0;
    int len = 0;
    char* curstr = buf;

    if (val < 0){
        sign = 1;
        val *= -1;
        *curstr++ = '-';
        len++;
    }

    while(val)
    {
        digit = val % base;
        *curstr = (digit > 9) ? ('a' + digit - 10) : '0' + digit;
        val = val / base;
        len++;
        curstr++;
    }

    *curstr = '\0';
    if ( sign ) _strrev(buf + 1, len - 1);
    else _strrev(buf, len);

    return len;
}
