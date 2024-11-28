#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,5,12,7};
	printf("mang ban dau : ");
	for(int i=0; i<5 ; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n mang nguoc lai : ");
	for(int i = 4; i>=0 ; i--)
	{
		printf(" %d ",arr[i]);
		
	}
	return 0;
}
