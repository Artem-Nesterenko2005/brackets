#include <stdio.h>
#include <stdlib.h>

#define limitation 10

int main()
{
    char string[11];
    printf("Enter 10 brackets for the bracket string ");
    fgets(string, 11, stdin);
    int counter = 0;
    for (int symbolNumber = 0; symbolNumber < limitation; ++symbolNumber)
    {
        counter = string[symbolNumber] == '(' ? ++counter : --counter;
        if (counter < 0)
        {
            break;
        }
    }
    printf(counter == 0 ? "String is correct" : "String is not correct");
}