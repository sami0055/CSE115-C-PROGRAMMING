#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], ss[100], ls[100], w[100] ;
    int i, j, sn, ssn, lsn, wn, si ;

    printf("Input the string: ");
    gets (s);

    ssn = 999 ;
    lsn = 0 ;

    si = 0 ;

    while (s[si]!= 0)
    {
        i = 0 ;
        while (s[si] != ' ')
        {
            w[i] = s[si] ;
            i++ ; si++ ;
            if (s[si] == 0 )
                break ;
        }
        w[i] = 0 ;
        wn = strlen (w) ;
        if (wn < ssn)
        {
            strcpy (ss, w) ;
            ssn = wn ;
        }

        if (wn > lsn)
        {
            strcpy (ls, w);
            lsn = wn ;
        }


        if (s[si] == 0)
            break ;

        si++ ;
    }
    printf("The largest word is '%s'\n",ls);
    printf("and the smallest word is '%s'\n",ss);
    printf("in the string : '%s'.\n",s);
}
