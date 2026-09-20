#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sum = 0;
    time_t t;
    int temp = 0;
    srand((unsigned) time(&t));
    int size1 = rand()%500;
    size_t s = size1;
    int list1[s];
    int median = 0;
    int counter[s];
    printf("Array of %d elements:\n",size1);
    for(size_t i = 0;i<s;++i)
    {
        list1[i] = rand()%size1;
        sum+=list1[i];
    }

    for(size_t i = 0;i<s;++i)
    {
        printf("%d ",list1[i]);
    }
    printf("\n\nSorted:\n");
    for(size_t i = 0;i<s-1;++i)
    {
        if(list1[i]>list1[i+1])
        {
            temp = list1[i+1];
            list1[i+1] = list1[i];
            list1[i] = temp;
            i = -1;
        }
    }
    for(size_t i = 0;i<s;++i)
    {
        printf("%d ",list1[i]);
    }
    for(size_t i = 0;i<s;++i)
    {
        counter[list1[i]]=counter[list1[i]]+1;
    }
    if(size1%2 ==1)
    {
        median = list1[((size1-1)/2)];
    }
    else
    {
        median = (list1[size1/2]+list1[(size1/2)-1])/2;
    }
    printf("\n\nAverage value: %d",sum/size1);
    printf("\n\nMedian: %d",median);
    printf("\nTekrar Sayıları:\n");
    for(size_t i = 0;i<s;++i)
    {
        printf("%zu :%d\n",i,counter[i]);
    }
}
