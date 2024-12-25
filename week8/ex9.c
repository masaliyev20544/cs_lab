#include <stdio.h>
#include <math.h>

int sumOfElements(int arr[], int n) {
    if(n==0)
    return 0;
    return sumOfElements(arr,n-1)+arr[n-1];
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",sumOfElements(arr,n));
}