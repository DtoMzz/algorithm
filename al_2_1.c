#include<stdio.h>
#include<stdlib.h>


int main()
{
    int arr[] = {1,2,3,4,5,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i = 4;
    int b = 6;
    if (i<0||i>len)
    {
        return -1;
    }
    for (int j = len -1; j >i ; j--)
    {
        arr[j+1] = arr[j];
    }
    arr[i+1] = b;
    len++;
    
    for (int k = 0; k < len; k++)
    {
        printf("%d",arr[k]);
    }
    printf("\n");


    system("pause");
    return 0;
}