#include<stdio.h>

int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return fact(x-1)*x;
    }
}

int main(){
    int a = fact(5);
    printf("%d",a);
}