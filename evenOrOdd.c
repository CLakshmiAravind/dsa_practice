// #include<stdio.h>

// int main(){
//     int size;
//     scanf("%d",&size);
//     int arr1[size],arr2[size];
//     int even[size],odd[size];
//     int i=0;
//     int j=0;
//     printf("enter 1st array elements");
//     for(i=0;i<size;i++){
//         scanf("%d",&arr1[i]);
//     }
//     printf("enter 2nd array elements");
//     for(i=0;i<size;i++){
//         scanf("%d",&arr2[i]);
//     }
//     for(i=0;i<size;i++){
//         if(arr1[i]%2==0){
//             printf("%d",odd[j]);
//             even[j]=arr1[i];
//             j++;
//         }
//     }
//     for(i=0;i<size;i++){
//         if(arr2[i]%2==0){
//             even[j]=arr1[i];
//             printf("%d",odd[j]);
//             j++;
//         }
//     }
//     int k=0;
//     for(i=0;i<size;i++){
//         if(arr1[i]%2!=0){
//             odd[k]=arr1[i];
//             k++;
//             printf("%d",odd[k]);
//         }
//     }
//     for(i=0;i<size;i++){
//         if(arr2[i]%2!=0){
//             odd[k]=arr1[i];
//             printf("%d",odd[k]);
//             k++;
//         }
//     }


//     printf("printing even numbers\n");
//     for(i=0;i<size;i++){
//         printf("%d\t",even[i]);
//     }
//     printf("printing odd numbers\n");
//     for(i=0;i<size;i++){
//         printf("%d\t",odd[i]);
//     }

// }


#include<stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    // printf("%lu",sizeof(arr)/sizeof(int));
    int size=sizeof(arr)/sizeof(int);
    int temp,i;
    for(i=0;i<size-2;i=i+3){
        if(i+2<=size){
            temp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}