#include<stdio.h>
void fic(int c){
    static int x=0;
    if(c>0){
        x++;
        fic(c-1);
        printf("%d",c+x);
    }
}

int main(){
    int a=3;
    fic(a);
}