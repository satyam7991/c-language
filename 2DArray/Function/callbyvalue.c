#include<stdio.h>
void swap(int,int);
int main ()
{
    int n1=20, n2=50;
    printf("n1=%d and n2=%d\n",n1,n2);
    swap(n1,n2);//call by value
    printf("n1=%d and n2=%d\n",n1,n2);
    return 0;
}
void swap(int n1, int n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
    printf("n1=%d and n2=%d\n",n1,n2);
}