/* Author of this program is NIKHIL KUMAR ARORA, IT, 11912063, IIIT SONEPAT */
/* INSERTION SORT USING RECURSION AND MEMORY IS ALLOCATED DYNAMICALLY */
#include<stdio.h>
void quickSort(int input[], int size) {
    if(size==0||size==1)
        return;

    int counter=0;
    for(int i=1;i<size;i++)
        if(input[i]<input[0])
            counter++;          // FINDING A SUITABLE PLACE FOR THE FIRST ELEMENT
    int temp=input[counter];
    input[counter]=input[0];
    input[0]=temp;

    int i=0,j=size-1;
    while(i<counter&&j>counter)
    {
    if(input[i]<input[counter])
        i++;
    else if(input[j]>=input[counter])
        j--;
    else{
        int temp1=input[i];
        input[i]=input[j];
        input[j]=temp1;
        i++;
        j--;
        }
    }
    quickSort(input,counter); // SORTING THE SUB ARRAYS
    quickSort(input+counter+1,size-1-counter);


}

int main(){
    int n;
    scanf("%d",&n);

    int *input = (int*)malloc(n* sizeof(int));// DYNAMICALLY CREATING THE ARRAY IN HEAP

    for(int i = 0; i < n; i++) {
        scanf("%d",&input[i]);
    }

    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        printf("%d ",input[i]);
    }

}

