unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

   unsigned int len = 0;
    while (*src)
    {
        if(len < size - 1)
        {
            *dest++ = *src;
        }
        src++;
        len++;
    }
    *dest = '\0';
    return len;
    
}
