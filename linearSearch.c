#include<stdio.h>

int linearSearch(int *arr,int size,int target){
    int i=0;
    for(i=0;i<size;i++)
        if(arr[i]==target)
            return i;
    return -1;
}

int main(){
    int size;
    printf("enter size of the array");
    scanf("%d",&size);
    int arr[size];
    printf("enter values: \n");
    int i=0;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("enter value to search :");
    scanf("%d",&target);

    int result=linearSearch(arr,size,target);
    if(result!=-1){
        printf("%d is found at index %d\n",target,result);
    }
    else{
        printf("%d is not found",target);
    }
}
