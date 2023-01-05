#include <stdio.h>
int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    if(b==0&&c==0&&d==0) return a;
    if (c==0&&d==0) return  (a > b) ? a : b;
    return max_of_four((a > b) ? a : b,(c > d) ? c : d,0,0);
    
}
