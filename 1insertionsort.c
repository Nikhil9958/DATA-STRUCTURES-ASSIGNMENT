/******************************************* This program is written by NIKHIL KUMAR ARORA, IT BRANCH, ROLL NO-11912063,IT BRANCH *********************************************************************/
/********************************************                               INSERTION SORT                                         ********************************************************************/
#include<stdio.h>
void isort(int *a,int n)// Insertion sort function
{
    int temp,i;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp) //comparision
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *ptr=(int*)malloc(sizeof(int[n])); //dynamically creating an array
    printf("Please enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\nNow sorted array is:");
    isort(ptr,n);
    for(int i=0;i<n;i++)
        printf("%d ",*(ptr+i));
}
