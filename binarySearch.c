#include<stdio.h>

int binarySearch(int *arr,int size,int target){
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
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

    int result=binarySearch(arr,size,target);
    if(result!=-1){
        printf("%d is found at index %d\n",target,result);
    }
    else{
        printf("%d is not found",target);
    }
}