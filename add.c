#include<stdio.h>
void printArray()
int main(){
  int n;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printArray(arr,n);
  mergeSort(arr,0,n-1);
  printfArray(arr,n);
}
