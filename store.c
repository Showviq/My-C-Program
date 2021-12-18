#include<stdio.h>
main()
{
   int a,mm,dd,yyyy;
   float c;
   printf ("Enter item number:");
   scanf ("%d", &a);
   printf("Enter unit price:");
   scanf("%f", &c);
   printf("Enter purchase date(mm/dd/yyyy)");
   scanf("%d/%d/%d",&mm,&dd,&yyyy);
   printf("Item\tPurchase\tunit\n   \tdate       \tprice\n");
   printf("%d     %d/%d/%d     $%0.2f",a,mm,dd,yyyy,c);
   return 0;


}
