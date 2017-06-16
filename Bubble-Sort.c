#include<stdio.h>
int main(void){
    int n,i,j,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    //int* marr= mergesort(arr,0,&(n-1));
    for(i=0;i<n;i++){
        for (j=n-1;j>i;j--){
            if(arr[j]<arr[j-1]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
     for(i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
     

    return 0;
}

