#include <stdio.h>
double fun(){
	double x,y;
	printf("请输入两个不同数：");
    scanf ("%lf%lf",&x,&y);
	if (x>y)
	printf("%lf",x);
	else printf ("%lf",y);
	return 1;
}
int main(){
    int x;
    x=fun();
    return 0; 
} 
 
  

