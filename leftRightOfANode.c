//left and right child of a node.

#include<stdio.h>
#include<math.h>

int main(){
    double a=INFINITY;
    int array[10];
    for(int i=0;i<10;i++){
        array[i]=i*i;
    }
    for(int i=0;i<10;i++){
        // printf("%d\n",array[i]);
    }
    int node=3;
    printf("%d",array[2*node+1]);
    printf("%d",array[2*node+2]);
    return 0;
}