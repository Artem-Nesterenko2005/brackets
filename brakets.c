#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string[11] = {'(',')','(',')','(',')','(',')','(',')','\0'};
	int counter = 0;
	int symbolNumber = 0;
	for (string[symbolNumber]; symbolNumber < 10; symbolNumber++)
	{
		if (string[symbolNumber] == '(')
			counter += 1;
		else
			counter -= 1;
		if (counter < 0)
		{
			printf("%d - The symbol is incorrect\n", symbolNumber);
			printf("Error");
			break;
		}
		else
			printf("%d - The symbol is correct\n", symbolNumber);		
	}
}

