#include<stdio.h>
int main()

{	
	int i;
	char name[20];
	FILE*ptr;
	ptr=fopen("New Text Document.txt","w+");
	printf("enter the names to be stored:\n");
	for(i=0;i<5;i++)
	{
	
	scanf("%s",&name);

	fprintf(ptr,"%s\n",name);
	}
   
   
}
