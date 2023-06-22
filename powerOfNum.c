#include<stdio.h>

int power(int n,int e){
    if(e<=0){
        return 1;
    }
    return power(n,e-1)*n;
}

int main(){
    int n=power(3,3);
    printf("%d",n);
}