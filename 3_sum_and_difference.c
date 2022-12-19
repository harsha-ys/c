#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float l,k;
    scanf("%d %d\n%f %f",&n,&m,&l,&k);
    printf("%d %d\n%.1f %.1f",n+m,n-m,l+k,l-k);
    
    return 0;
}
