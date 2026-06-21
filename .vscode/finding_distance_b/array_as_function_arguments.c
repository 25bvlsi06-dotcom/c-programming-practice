#include<stdio.h>
void shubham(int arr[],int n);
void shubham(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    shubham(arr,6);
    return 0;

}