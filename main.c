#include <stdio.h>
#include "myMath.h"

int main() {
	double num;
	double ans;
	printf("Please inset a real number: ");
	scanf("%lf",&num);
	ans= sub((float)add((float)Exp((int)num),(float)Pow(num,3)),(float)2);
	printf ("The value of f(𝑥)=𝑒^𝑥+𝑥^3−2 at the point %.4f is: %.4f\n", num, ans);
	ans=(double)add((float)mul(num,3),(float)mul(Pow(num,2),2));
	printf ("The value of f(x) = 3x + 2X^2 at the point %.4f is: %.4f\n", num, ans);
	ans=(double)sub((float)mul(Pow(num,3),(int)4),(float)mul(num,2));
	printf ("The value of f(x) = (4x^3)/5 -2x at the point %.4f is: %.4f\n", num, ans);
	return 0;
}
