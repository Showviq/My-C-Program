#include<stdio.h>
main()
{
 int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
 printf("Enter the number from 1 to 16 in any order");
 scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
 printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
 q=a+b+c+d;
 r=e+f+g+h;
 s=i+j+k+l;
 t=m+n+o+p;
 u=a+e+i+m;
 v=b+f+j+n;
 w=c+g+k+o;
 x=d+h+l+p;
 y=a+f+k+p;
 z=m+j+g+d;
 printf("Row sums: %d %d %d %d\n",q,r,s,t);
 printf("Column sums: %d %d %d %d\n",u,v,w,x);
 printf("Diagonal sums: %d %d",y,z);


 return 0;



}

