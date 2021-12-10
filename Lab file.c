#include  <stdio.h>
#define ARRAY_SIZE 5
 
int main()
{
    int numbers[ARRAY_SIZE], i ,j,temp; 
    
    


    for (i = 0; i < ARRAY_SIZE; i++)
    {
		printf("Enter the Number : %d  : ", (i+1));
        scanf("%d", &numbers[i]);
    }
        
    
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        for (j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    printf("Sorting Order Array: \n");
    for (i = 0; i < ARRAY_SIZE; ++i)
        printf("%d\n", numbers[i]);
        
    return 0;
}

