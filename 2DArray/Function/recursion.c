#include<stdio.h>
int square(int n);
int main(){
    int n=5;
    printf("%d",square(n));
    return 0;
}
int square(int n){
    if (n==0||n==1){
        return 1;
    }
    else{
        return n*n;
    }
}