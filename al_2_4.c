#include<stdio.h>
#include<stdlib.h>

int main()
{

    int arr[] = {7,6,8,6,3,2,6};
    int len =sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < len ; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j+1; k < len-1; k++)
                {
                    arr[k-1] = arr[k];
                }
                len--;
                
            }
            
        }
        
    }
    for (int x = 0; x < len; x++)
    {
        printf("%d",arr[x]);
    }
    printf("\n");

    system("pause");
    return 0;
    
    
}