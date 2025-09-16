#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int sum=0;
	int len=sizeof(arr)/sizeof(arr[0]);//20/4 ->5
	for(int i=0;i<len;i++)
	{
		if(i%2==1)
		sum=sum+arr[i];
	
	}
	printf("sum = %d ",sum);
}
// sum = 6