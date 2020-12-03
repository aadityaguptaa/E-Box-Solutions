#include <stdio.h>
#include <stdbool.h>
int main()
{
	
	int arr[5];
	int top = -1;int condition = 1;
	bool flag = 0;int ctr = 0;
	printf("STACK OPERATION\n");
	while(condition)
	{
	    if(flag && ctr<2)
	    {
	        printf("STACK OPERATION\n");
	        ctr++;
	    }
		printf("------------------------------------------\n");
		printf("1 PUSH\n");
		printf("2 POP\n");
		printf("3 DISPLAY\n");
		printf("4 EXIT\n");
		printf("------------------------------------------\n");
		int choice,x;
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				
				if(top==4)
				{
					printf("Stack overflow\n");
				}
				else
				{
				    printf("Enter the element to be pushed\n");
				    scanf("%d",&x);
					arr[top+1]=x;
					top++;
					if(x==50)flag = 1;
				}
				break;
				
			case 2:
				if(top==-1)
				{
					printf("Stack is empty\n");
				}
				else
				{
					printf("poped element is = %d\n",arr[top]);
					top--;
				}
				break;
			
			case 3:
				if(top==-1)
				{
					printf("Stack is empty\n");
				}
				else
				{
				    printf("The status of the stack is\n");
					for(int i=top;i>=0;i--)
					{
						printf("%d\n",arr[i]);;
					}
				}
				break;
				
			case 4:
				condition = 0;
				
				
		}
		if(condition)
		{
			printf("Do you want to continue(Type 0 or 1)?\n");
			scanf("%d",&condition);
		}
	}

	return 0;
}