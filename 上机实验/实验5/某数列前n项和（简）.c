#include <stdio.h>
int main(){
    int i,n;
    float a0=2.0,b0=1.0,a1=0.0,b1=0.0;
    float sum=0.0;
    scanf("%d", &n);
    if (n==1){
        printf("2.00");
    }
    else {
        sum = 2.0;
        for(i=1;i<n;i++){
        a1 = a0 + b0;
        b1 = a0;
        sum += a1 / b1;
        a0 = a1;
        b0 = b1;
        }
        printf("%.2f", sum);
    }
}