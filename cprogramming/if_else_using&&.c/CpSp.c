#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Cost prize is:");
    scanf("%f",&cp);
    printf("The selling prize is :");
    scanf("%f",&sp);
    if(cp<sp)
     {
        float profit;
        profit=(sp-cp)/cp*100;
        printf("The seller has made a profit of %f percent",profit);
     }
    if(cp>sp)
        {
            float loss;
            loss=(cp-sp)/cp*100;
        printf("The seller has made a loss of %f percent",loss);
        }
    if(cp=sp)
        {
             printf("no profit no loss");
        }
    return 0;
}