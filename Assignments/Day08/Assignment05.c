/*Assignment05:- alternativel merge two strings
i/p
Bhima
ABCDEOLM
o/p
BAhBiCmDaEOLM */


#include <stdio.h>
#include <string.h>
int main() 
{
    char firstStr[] = "Bhima";
    char secondStr[] = "ABCDEOLM";
    int  totallength = strlen(secondStr) + strlen(firstStr);
    char result[totallength];
    int i = 0;
    int j = 0;

    printf("i/p\n%s\n%s\n\n",firstStr,secondStr);
    while (i < totallength)
    {
        if(j< strlen(firstStr))
        {
            result[i] = firstStr[j];
            i++;
        }
        if(j< strlen(secondStr))
        {
          result[i] = secondStr[j];
          i++;
        }

        j++;
    }
    printf("o/p = %s\n",result);
    return 0;
}
