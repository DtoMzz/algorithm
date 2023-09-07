#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[] = {1,2,3,3,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);

    int i;
    for (i = 0; i < len-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            break;
        }
        
    }
    for (int j = i; j <len; j++)
    {
        arr[j] = arr[j+1];
    }
    len--;
    for (int k = 0; k < len; k++)
    {
        printf("%d",arr[k]);
    }
    printf("\n");

    system("pause");
    return 0;

    
}