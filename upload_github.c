#include <stdio.h>

int main(void) {
	int t,x,v;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d",&x);
    if(x%3==0)
    {
      printf("0\n");
    }
    else if(x%3==1)
      printf("2\n");
    else if(x%3==2)
      printf("1\n");
	}
	return 0;
}
