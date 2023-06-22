#include<stdio.h>

int F[10];

int fib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-1]==-1){
            F[n-1]=fib(n-1);
        }
        if(F[n-2]==-1){
            F[n-2]=fib(n-2);
        }
        return F[n-1]+F[n-2];
    }
}

int main(){
    int i=0;
    for(i=0;i<9;i++){
        F[i]=-1;
    }
    int n=fib(10);
    for(i=0;i<9;i++){
        printf("%d\t",F[i]);
    }
    return 0;
}