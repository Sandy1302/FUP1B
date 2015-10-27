#include<stdio.h>
int n1;
int n2;
int n3;
int main()
{
	printf("Dame 3 numeros\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	if (n1>n2 && n1>n3);
	{
		
		
		if(n2<n1 && n2>n3)
		{
			printf("digito medio%d\n",n2);
			printf("digito menor%d\n",n3);
		}
		else
		{
			if(n3<n1 && n3>n2)
			{
				printf("digito medio%d\n",n3);
				printf("digito menor%d\n",n2);
			}
			else
			{
				if(n2>n1 && n2>n3)
				{
					printf("Digito medio%d\n",n1);
					printf("Digito menor%d\n",n3);
				}
				else
				{
					if(n3<n2 && n3>n1)
					{
						printf("Digito medio%d\n",n3);
						printf("Digito menor%d\n",n1);
					}
					else
					{
						if(n3>n2 && n3>n1);
						{
							printf("Digito mayor%d\n",n3);
							if(n1<n3 && n1>n2)
							{
								printf("digito medio%d\n",n1);
								printf("Digito menor%d\n",n2);
							}
							else
							{
								if(n2<n3 && n2>n1);
								{
									printf("Digito medio%d\n",n2);
									printf("Digito menor%d\n",n1);
								}
							}
						}
					}
				}
			}
		}
	}
}
