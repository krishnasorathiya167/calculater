#include<stdio.h>

int calc(int a,int b)
{
	int num;
	
	for(num=0;num<=6;num++)
	{
		printf("Enter Your Choice In 1 To 6 = ");
		scanf("%d",&num);
		
		switch(num)
		{
			case 1:
				printf("Enter Value Of A = ");
				scanf("%d",&a);
				printf("Enter Value Of B = ");
				scanf("%d",&b);
				printf("Addition Of A & B = %d\n",a+b);
				break;
				
			case 2:
				printf("Enter Value Of A = ");
				scanf("%d",&a);
				printf("Enter Value Of B = ");
				scanf("%d",&b);
				printf("Substriction Of A & B = %d\n",a-b);
				break;
				
			case 3:
				printf("Enter Value Of A = ");
				scanf("%d",&a);
				printf("Enter Value Of B = ");
				scanf("%d",&b);
				printf("Multiplication Of A & B = %d\n",a*b);
				break;
				
			case 4:
				printf("Enter Value Of A = ");
				scanf("%d",&a);
				printf("Enter Value Of B = ");
				scanf("%d",&b);
				printf("division Of A & B = %d\n",a/b);
				break;
				
			case 5:
				printf("Enter Value Of A = ");
				scanf("%d",&a);
				printf("Enter Value Of B = ");
				scanf("%d",&b);
				printf("modulus Of A & B = %d\n",a%b);
				break;
				
			case 6:
				printf("Program Is Exit.\n");
				break;
				
			default:
				printf("Plzzz Enter 1 to 6 Number.\n");
				
		}
	}
}

void main()
{
	int a,b;
	printf("press 1 For addition.\n");
	printf("press 2 For Substiction.\n");
	printf("press 3 For Multiplication.\n");
	printf("press 4 For Division.\n");
	printf("press 5 For Modulus.\n");
	printf("press 6 For Exit.\n");
	calc(a,b);
	
}