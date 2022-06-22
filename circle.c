#include <stdio.h>


int main(){
int t, x, y;
while(scanf("%d",&t)!=EOF) {
while (t--)
  {
  scanf("%d %d", &x, &y);
 int sm = x*y;
  if((sm-1)%2==0)
printf("Hussain\n");
else
printf("Hasan\n") ;
  }

}

return 0;

}
