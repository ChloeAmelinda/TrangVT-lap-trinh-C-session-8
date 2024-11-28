#include<stdio.h>
int main()
{
	int arr[5]={23,54,76,12,1};
	int number;
	printf("nhap so can tim : ");
	scanf("%d", &number);
	
	for(int i = 0; i<5 ;i++)
	{
		if(arr[i] == number)
		{
			printf("\n vi tri phan tu trong mang la : %d",i);
			break;
		}
		else
		{
			printf("\n phan tu khong co trong mang ");
			break;
		}
		
	}
	
	return 0;
}
