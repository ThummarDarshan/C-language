

#include <stdio.h>
int main()
{
int seats[5][10]={0},number,i,row,col,j,k;
  printf("enter the number of tickits you want to book\n");
  scanf("%d",&number);
    for(k=0;k<number;k++)
    {
        printf("enter the row first and then seat which you are going to booked\n");
        scanf("%d",&row);
        scanf("%d",&col);
        row=row-1;
        col=col-1;

            if (row >= 0 && row < 5 && col >= 0 && col < 10)
                {
                    if (seats[row][col] == 0)
                        {
                            seats[row][col] = 1;
                        }
                }
            else
                {
                printf("invalid seat number");
                }
        for(i=0;i<5;i++)
            {
                for(j=0;j<10;j++)
                    {
                        if(seats[i][j]==1)
                        {
                            printf(" x ");
                        }
                        else
                        printf(" 0 ");
                    }
                    printf("\n");
        }
}
  printf("\nNAME :- Thummar Darshan");
  printf("ID :- 24CE127");
}
