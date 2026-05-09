#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    
    int space = n - 1;
    int print_character = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= print_character; k++)
        {
            if(i % 2 == 1)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
            
        }

        printf("\n");
        space--;
        print_character += 2;

    }

    space += 1;
    print_character -= 2;


    for(int i = n - 1 ; i >= 1; i--)
    {
        space++;

        for(int j = 1; j <= space; j++)
        {
            printf(" ");

        }

        print_character -= 2;

        for(int k = 1; k <= print_character; k++)
        {
            if(i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                 printf("#");
            }
           
        }

        printf("\n");

    }
    return 0;
}