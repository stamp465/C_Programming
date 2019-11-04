#include<stdio.h>
int main()
{
    long int i,j,a,b,c;
    scanf("%ld",&a);
    long int arr[a+1];
    for(i=1;i<=a;i++)
    {
        scanf("%ld",&arr[i]);
    }
    long int max = arr[1];
    long int min = arr[1];
	for(i=1;i<=a;i++)
    {
    	if(arr[i]>max)
    	{
    		max = arr[i];
		}
		else if(arr[i]<min)
		{
			min = arr[i];
		}
	}
    
    
    printf("%ld\n",max);
    printf("%ld\n",min);
}
