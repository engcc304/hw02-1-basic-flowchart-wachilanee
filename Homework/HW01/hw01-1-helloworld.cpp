//TODO: #3 provide me full syntax of C-Language contain include, main function(int).

//TODO: #4 display me "Hello World." to me.

//TODO: #5 Write your private info into Student-Info.txt


#include <stdio.h>

int main()
{
    int n,sum,price,c ;    
    do{
        printf("Please your input product s d[1 0]:");
        scanf("%d",&n);  
        if (n == 1){
            printf("Input S1 S2 S3[1 2 3]:");
            scanf("%d",&n);
            if (n == 1){
                printf("S1");
                price = 100 ;
            }
            if (n == 2){
                printf("S2");
                price = 150;
            }
            if (n == 3){
                printf("S3");
                price = 200;
            }
            sum += price ;
            printf("\ntotal price %d\n",sum);
        }
        else if(n == 0){
            printf("Input d1 d2 d3[1 2 3]:");
            scanf("%d",&n);
            if (n == 1){
                printf("d1");
                price = 50;
            }
            if (n == 2){
                printf("d2");
                price = 100;
            }
            if (n == 3){
                printf("d3");
                price = 150;
            }
            sum += price ;
            printf("\ntotal price %d\n",sum);
        }
        else if (n == -1) break;
    } while (true);

    printf("total %d",sum); //300
    printf("Input cash");
    scanf("%d",&c); //200
    if (c == sum)
    {
        printf("1");
    }
    return 0;
}