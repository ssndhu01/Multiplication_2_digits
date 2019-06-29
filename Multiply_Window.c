#include<stdio.h>
void main()
{
	int a =3,c,b=2,temp2,i,j,k,l,carry,temp,count;
	int arr1[201],arr2[400];
	printf("\nEnter Length of 1st digit : ");
	scanf("%d",&a);
	printf("\nEnter Length of 2nd digit : ");
	scanf("%d",&b);
	//system("cls");
	getch();
	printf("Start \nEnter 1st number : ");
	for(i=0;i<a;i++)
	{
		arr1[i]=getche()-48;
		arr2[i]=0;
		//printf("%d,%d\n",arr1[i],i);
	}
	arr1[a]=0;
	count=a+1;
	printf("\n");
	for(i=0;i<b;i++)
	{
		arr2[a+i]=0;
	}
	printf("\n");
	
	printf("Enter 2nd number : ");
	for(i=0;i<b;i++)
	{	
		do{
		temp=getche()-48;
		}while(!(temp>=0)||!(temp<=9));
		++count;
		//printf("i loop : %d-%d\n",i,count);
		for(j=a;j>=0;j--)
		{
			carry=arr1[j]*temp;
			//printf("\tj loop:%d-%d-%d-%d\n",j,carry,temp,arr1[j]);
			arr2[count]=0;
			for(k=count-(a-j);k>0 &&carry>0;k--)
			{
				//printf("\t\tk loop :%d-%d-%d\n",k,carry,arr2[k]);
				carry = arr2[k]+carry;
				arr2[k]=carry%10;
				carry /=10;	
			}
		}
	}	
	
	printf("\n\nAnswer :");
	for(i=1;i<count;i++)
	{
		printf("%d",arr2[i]);
	}
printf("\n");
getch();
}
