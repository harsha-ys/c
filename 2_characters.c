#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char nl;
    char s[100];
    char ss[100];
    scanf("%c",&ch);
    printf("%c",ch);   
    scanf("%s",s);
    printf("\n%s",s); 
    scanf("%c%[^\n]%*c",&nl, ss);
    printf("\n%s",ss);
    return 0;
}
