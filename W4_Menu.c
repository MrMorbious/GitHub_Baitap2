#include<stdio.h>
#include <stdlib.h>
void showMenu();
void addValue (int *a,int *n);
int searchValue(int a[], int n, int x);
void outputArray (int *a, int n);
int normalSort ( int *a , int n);
void swap(int *a,int *b);

int main ()
{
	int a[100],n,x;
	int choice;
	showMenu();
	do
	{
		printf("\nEnter your program you want run : ");scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					addValue(a,&n);
				break;
				}
			case 2:
				{
				int count,x,i;
				printf("Enter x : ");scanf("%d",&x);
    			for (i=0;i<n;i++)
				{
        				if(a[i]==x)
            			count++;
    			}
				printf("Number of value in array: %d\n",count);
                break;
				}
			case 3:
				{
					outputArray(a,n);
					break;
				}
				
			case 4:
				{
					int maxVal,minVal,i;
					printf("Enter minimun value in array : ");scanf("%d",&minVal);
					printf("Enter maximum value in array : ");scanf("%d",&maxVal);
					for(i=0;i<n;i++)
					{
						if(a[i] >= minVal && a[i]<= maxVal)
						printf("%d\t",a[i]);
					}
					break;
				}
			case 5:
				{
					int b[100],i;
					for (i = 0;i<n;i++){
						b[i] = a[i];
					}
					normalSort(b,n);
					printf("Array in ascending order: \n");
					outputArray(b,n);
					break;
				}
			default:
				printf("\n\nPLEASE !!! ENTER THE NUMBER FROM 1 TO 5 !!!\n");
		}
	}while (choice >= 1 && choice <=5);
	
	return 0;
}
void showMenu()
{
	printf("<<======================================>>\n");
	printf("\n1- Add a value\n");
	printf("\n2- Search a value\n");
	printf("\n3- Print out the array\n");
	printf("\n4- Print out values in a range\n");
	printf("\n5- Print out the array in ascending order\n");
	printf("\nOthers- Quit\n");
	printf("\n<<======================================>>");
}
void addValue (int *a,int *n) 
{
	int i;
	printf("Enter n = ");scanf("%d",n);
	for(i=0;i<*n;i++)
	{
		printf("a[%d]= ",i);scanf("%d",&a[i]);
	}
}
void outputArray (int *a, int n)
{
	
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int normalSort ( int *a , int n)
{
	int i,j;
	for (i=0;i<n-1;i++)
	{
		for (j=i;j<n;j++)
		{
			if (a[i]>a[j])
			{
				swap(&a[i],&a[j]);
			}
		}
	}
}
void swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}







