#include <stdio.h>
float Sum(int n){
    float s=0.0;
    if (n==0)
        s = 0.0;
    else {
        float A(int n);
        s = Sum(n-1) + A(n);
    }
    return s;
}
float A(int n){
    float a;
    float B(int n);
    float C(int n);
    a = B(n) / C(n);
    return a;
}
float B(int n){
    float b=2;
    float C(int n);
    if (n==1)
        b = 2;
    else
        b = B(n-1) + C(n-1);
    return b;
}
float C(int n){
    float c=1;
    float B(int n);
    if(n==1)
        c = 1;
    else
        c = B(n-1);
    return c;
}
float main(){
    int n=0;
    scanf("%d", &n);
    printf("%.2f", Sum(n));
    return 0;
}