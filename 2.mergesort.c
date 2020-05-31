/* Author of this program is NIKHIL KUMAR ARORA, IT, 11912063, IIIT SONEPAT */
/* MERGE SORT */
#include <stdio.h>
void mergeSort(int a[], int size){
    if(size==0||size==1)
        return;
    int mid=size/2;
    for(int i=0;i<mid;i++)
        for(int j=mid;j<size;j++) {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
      if(size%2==0)
    {
      mergeSort(a,mid);
      mergeSort(a+mid,mid);
    }
    else{
        mergeSort(a,mid);
        mergeSort(a+mid,mid+1);
    }
}

int main() {
  int length;
  printf("Please enter the size:");
  scanf("%d",&length);
  int* input = (int*)malloc(sizeof(int)*length);
  printf("\nPlease enter the elements:");
  for(int i=0; i < length; i++)
    scanf("%d",&input[i]);
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    printf("%d ",input[i]);
  }
}
