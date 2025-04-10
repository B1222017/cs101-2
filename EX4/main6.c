#include <stdio.h>

int factorial(int n){
    if(n == 1)return 1;
    return n * factorial(n-1);
}

int main(){
    int n = 5;
    int m = factorial(n);
    printf("factorial %d = %d\n", n, m);
    return 0;
}
