#include <stdio.h>
int main(){
    int a, b;
    // double f;
    scanf("%d %d", &a, &b);
    int d = a / b;
    int r = a % b;
    double f = (double) a / b;
    printf("%d %d %lf", d, r, f);
    return 0;
}