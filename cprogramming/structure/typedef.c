#include<stdio.h>
typedef int Integer;
typedef float RealNumber; // typedef kisi bhi chiz ka naam badalne ke kaam aata hai ab ham int ki jagah Integer bhi likhenge toh computer int samjhega 
typedef char Himanshu;  // naam change karne ke lie typedef ke baad jiska naam change ka rna hai uska naam likh ke and uske baad jo naam se bulana hai wo naam likho
int main()
{
    Integer A=2334;
    RealNumber B=234.3423176;
    Himanshu C='@';
    printf("%d\n",A);
    printf("%.2f\n",B); // nai chiz jo chatgpt ne batai %f ko agar %.2f kareg matlab decima ke baad 2 decimal tak hi show karega 
    printf("%c\n",C);
    return 0;
}