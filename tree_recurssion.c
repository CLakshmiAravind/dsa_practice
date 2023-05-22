#include<stdio.h>

void func(int x){
    if(x>0){printf("%d",x);
    func(x-1);
    func(x-1);}
}

int main(){
    int a=3;
    func(a);
}