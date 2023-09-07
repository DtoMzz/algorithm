#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[] = {1,2,3,3,3,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int x =4;
    int i;
    for (i = len-1; i >=0; i--)
    {
        if (arr[i]<=x)
        {
            break;
        }
        
    }
    for (int j = len-1; j >i; j--)
    {
        arr[j+1] = arr[j];
    }
    arr[i+1] = x;
    len++;
    for (int k = 0; k < len; k++)
    {
        printf("%d",arr[k]);
    }
    printf("\n");

    system("pause");
    return 0 ;

}