#include <stdio.h>
#include <math.h>

int sumOfDigits(int n) {
    if(n/10==0)
    return n;
    return sumOfDigits(n/10)+n%10;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sumOfDigits(n));
}