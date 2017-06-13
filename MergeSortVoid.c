#include<stdio.h>
void  merge(int arr[],int p,int q,int r){
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],R[n2];
    for(i=0; i<n1;i++){
        L[i]=arr[p+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[q+1+j];
    }
    i=0;
    j=0;
    k=p;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
    
}
void mergesort(int arr[],int p,int r){
    if(p<r){
        int q=p+(r-p)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}
void printArray(int a[],int n){
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main(void){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    mergesort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}

