#include<stdio.h>

main()
{
	int *p;
	char data[1000] = "jay";
	
	p = fopen("demo.txt","w");
	
	if(p==0)
	{
		printf("File could not open");
	}
	else
	{
		printf("Enter data = ");
		gets(data);
		fputs(data,p);
		printf("Data add successfull.....");
	}
	fclose(p);
}
