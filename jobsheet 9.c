#include <stdio.h>
int main()
{
	int i;
	char nama[6]={'H','a','i','d','i','r'};
	char nama2[6]="Haidir";
	printf("Nama per karakter = ");
	for(i=0;i<=5;i++)
	{
		printf("%c",nama[i]);
		
	}
	printf("\n");
	printf("Nama = %s\n\n",nama2);
	return 0;
}
