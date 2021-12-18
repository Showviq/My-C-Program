#include<cstdio.h>
using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        for (int i=1;i<=n;i++)
        {
            if (i%2) printf("I hate ");
            else printf("I love ");
            if (i==n) printf("it\n");
            else printf("that ");
        }
    }
    return 0;
}
