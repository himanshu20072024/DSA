#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int noofpages;
    };

    struct book A,B,C;
    A.price=345.543;
    A.noofpages=234;
   // A.name="Clash of Clans";  --> ham aise declare nhi kar sakte hai string ko structure ke andar 
   //ham strcpy(A.name,"Clash of Clans"); --> aise karenge ham strcpy ka use karke clash of clans ko A.name ke andar copy kar dia  understand!!
   strcpy(A.name,"Clash of Clans");
   printf("%s\n",A.name); // %c use nhi karna %s use karna hai 
   printf("%f\n",A.price);
   printf("%d\n",A.noofpages);

   B.price=777.6567656;
   B.noofpages=1234;
   strcpy(B.name,"Clash of Ideal");
   printf("%s\n",B.name); // %c use nhi karna %s use karna hai 
   printf("%f\n",B.price);
   printf("%d\n",B.noofpages);



    return 0;
}