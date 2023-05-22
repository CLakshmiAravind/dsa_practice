#include<stdio.h>

int sum(int x){
    if(x==0){
        return 0;
    }
    else{
        return sum(x-1)+x;
    }
}

int main(){
    int a=sum(5);
    printf("%d",a);
}