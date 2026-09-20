#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){

        int dayseg = 0;
        char daysegtext[] = {"000"};
        int yearseg = 0;
        char yearsegtext[] = {"00"};
        int numtotal5seg = 0;
        int num5seg[5] = {0,0,0,0,0};
        int sum5seg = 0;
        char numfinal5seg[] = "00000";
        int randomseg = 0;
        char randomsegtext[] = {"00000"};
        time_t t;
        srand((unsigned)time(&t));




        dayseg = rand()%366;
        daysegtext[2]= (dayseg%10)+48;
        daysegtext[1]= (((dayseg%100)-(dayseg%10))/10)+48;
        daysegtext[0]= (((dayseg)-(randomseg%100))/100)+48;




        yearseg = rand()%103;
        while (yearseg <95)
        {
            yearseg = rand()%103;
        }
        yearseg = yearseg%100;
        yearsegtext[1]= (yearseg%10)+48;
        yearsegtext[0]= (((yearseg)-(yearseg%10))/10)+48;





        numtotal5seg = rand()%99999;
        num5seg[0]= numtotal5seg%10;
        num5seg[1]= ((numtotal5seg%100)-(numtotal5seg%10))/10;
        num5seg[2]= ((numtotal5seg%1000)-(numtotal5seg%100))/100;
        num5seg[3]= ((numtotal5seg%10000)-(numtotal5seg%1000))/1000;
        num5seg[4]= ((numtotal5seg)-(numtotal5seg%10000))/10000;
        for(size_t i = 0;i<5;++i)
        {
            sum5seg+=num5seg[i];
        }
        while(sum5seg%7!=0)
        {
        sum5seg=0;
        numtotal5seg = rand()%99999;
        num5seg[0]= numtotal5seg%10;
        num5seg[1]= ((numtotal5seg%100)-(numtotal5seg%10))/10;
        num5seg[2]= ((numtotal5seg%1000)-(numtotal5seg%100)-(numtotal5seg%10))/100;
        num5seg[3]= ((numtotal5seg%10000)-(numtotal5seg%1000)-(numtotal5seg%100)-(numtotal5seg%10))/1000;
        num5seg[4]= ((numtotal5seg)-(numtotal5seg%10000)-(numtotal5seg%1000)-(numtotal5seg%100)-(numtotal5seg%10))/10000;
        for(size_t j = 0;j<5;++j)
        {
            sum5seg+=num5seg[j];
        }
        }

        for(size_t k = 0;k<5;++k)
        {
            numfinal5seg[4-k]=num5seg[k]+48;
        }




        randomseg = rand()%99999;
        randomsegtext[4]= (randomseg%10)+48;
        randomsegtext[3]= (((randomseg%100)-(randomseg%10))/10)+48;
        randomsegtext[2]= (((randomseg%1000)-(randomseg%100))/100)+48;
        randomsegtext[1]= (((randomseg%10000)-(randomseg%1000))/1000)+48;
        randomsegtext[0]= (((randomseg)-(randomseg%10000))/10000)+48;




        printf("%s%s-OEM-00%s-%s\n",daysegtext,yearsegtext,numfinal5seg,randomsegtext);

}
