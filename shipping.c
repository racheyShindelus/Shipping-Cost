#include <stdio.h>

int calculateCost(const char* containerString)
{
    double cost = 0.0;
    double weight = 0.0;
    double weight1 = 0.0;
    int stringLength = 0;
    for ( int i = 0; containerString[i] != '\0'; i++)
    {
        stringLength++;
    }
    for ( int i = 0; i < stringLength / 2; i++)
    {
           char item = containerString[i];
            if (item >= 'a' && item <= 'z') // lower
            {
                weight1 += ((int)containerString[i] - 96) * 0.1;
            }
            if (item >= 'A' && item <= 'Z')
            {
                weight1 += ((int)containerString[i] - 64) * 0.1 + 2.6;
            }
        cost = weight1 * 2.75;
    }

    for ( int i = stringLength / 2; i < stringLength; i++)
    {
        char item = containerString[i];
            if (item >= 'a' && item <= 'z') // lower
            {
                weight += ((int)containerString[i] - 96) * 0.1;
            }
            if (item >= 'A' && item <= 'Z')
            {
                weight += ((int)containerString[i] - 64) * 0.1 + 2.6;
            }
        cost = weight * 2.75;
    }
    return cost;
}

int main()
{
    printf("Welcome to A-Z Logistics Shipping!\n");
    printf("We will calculate your shipping costs!\n");
    printf("Enter some container strings.\n");
    printf("Enter \"  .  \" to finish entry.\n");
    
    char containerString[100];  // max 200 char
    double totCost = 0;
    int numContainers;
    while(1)
    {
        scanf("%s", containerString);
        if(containerString[0] == '.')   // end with dot
        {
            break;
        }
        double cost = calculateCost(containerString);
        totCost += cost;
        numContainers++;
    }
    printf("Total number of Containers: %d\n", numContainers);
    printf("Total shipping cost: $%lf\n", totCost);

    return 0;
}