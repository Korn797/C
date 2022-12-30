#include <cstring>
 
int max_length(const char *str)
{
    int min = 0;
    int current = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] != ' ')
            current++;
        else if (str[i] == ' ')
        {
            if(current < min)
                min = current;
            current = 0;
        }
    }
    if(current < min)
        min = current;
    return min;
}
