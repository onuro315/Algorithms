#include <stdio.h>



int main()
{
	char str1[10],str2[10];
	int i=0;
	printf("Enter String1 and String2\n");
	scanf("%s",str1);
	scanf("%s",str2);

	while(!(str1[i] == str2[i]) && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
		if(str1[i] > str2[i])
		{
			printf("String1 > String2");
			return 0;
		}
		
			else if(str1[i] < str2[i])
			{
				printf("String2 > String1");
				return 0;
			}
				else
				{
					printf("String1 = String2");
					return 0;
				}
	}
}
