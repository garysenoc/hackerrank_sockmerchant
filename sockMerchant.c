#include <stdio.h>
#define MAX 1000
int main(void)
{

    int arr[MAX],num,i,diff[MAX],trial=1,j,count=1,same=0,num2,count2=1,countSame[MAX],pairs=0;

    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    diff[0] = arr[0];
    for(i=0;i<num;i++)
    {
        for(j =0 ;j<=count;j++)
        {
            if(arr[i] == diff[j])
                same++;
        }
        if(same ==0)
        {
            diff[count] = arr[i];
            count++;
        }
        same =0;
    }

    for(i=0;i<count;i++)
    {
        for(j=0;j<num;j++)
        {
            if(diff[i] == arr[j])
                same++;
        }

        countSame[i] = same;
        same=0;
    }

    for(i=0;i<count;i++)
    {
      pairs = pairs + (countSame[i]/2);
    }

    printf("\n");
    printf("%d",pairs);

    return 0;
}
