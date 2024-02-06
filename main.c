#include "my_mat.h"
#include <stdio.h>
#define numStrings 5
#define maxWeight 20



int main()
{
    /*float weights[5];
    float values[5];
    char *strings[5]={"A","B","C","D","E"};

    //entering the weight of each item
    for (int i = 0; i < 5; i++)
    {
        printf("enter weight for item number %d:",i);
        scanf("%f",&weights[i]);
    }

    //entering the value of each item
    for (int j = 0; j < 5; j++)
    {
        printf("enter value for item number %d:",j);
        scanf("%f",&values[j]);
    }
    printf("lll");
    
    selectItems(weights,values,strings,numStrings);
    return 0;*/

    int mn[numArray][numArray];
    char c;
    //printf("enter A B C D: ");
    scanf("%c",&c);
    while(c!='D')
        {
            if(c=='A')
            {
                getNumbers(mn);
                
            }
            else if(c=='B')
            {
                //printf("enter two numbers: ");
                int num1,num2;
                scanf("%d",&num1);
                scanf("%d",&num2);
                if(isShortestPath(mn,num1,num2)==1)
                    printf("True\n");
                else
                    printf("False\n");   
                 
            }   
            else if(c=='C')
            {
                //printf("\nenter two numbers: ");
                int num1,num2;
                scanf("%d",&num1);
                scanf("%d",&num2);
                if(shortestPath(mn,num1,num2)==0 || num1==num2)
                    printf("-1\n");
                else
                    printf("%d\n",shortestPath(mn,num1,num2));
                
            } 
            scanf("%c",&c);
            
        }
        return 1;
}





