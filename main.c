#include <stdio.h>
#include "myMath.h"

int main() {
	double num,a,b,c;
	double ans;
	printf("Please inset a real number: ");
	scanf("%lf",&num);
	b=(float)Exp((int)num);
	a=(float)Pow(num, 3);
	c=add(b,a);
	ans=sub(c,2.0);
	printf ("The value of f(𝑥)=𝑒^𝑥+𝑥^3−2 at the point %.2lf is: %.4lf\n", num, ans);
	a=(float)mul(num,3);
	b=Pow(num,2);
	c=(float)mul(b,2);
	ans=add(a,c);
	printf ("The value of f(x) = 3x + 2X^2 at the point %.2f is: %.4f\n", num, ans);
	a=mul(num,4);
	ans=div(Pow(mul(num,4),3),5);
	ans=div(ans,mul(num,2));
	printf ("The value of f(x) = (4x^3)/5 -2x at the point %.2f is: %.4f\n", num, ans);
	return 0;
}
