

double Exp(int x) {
	int a;
	double e = 2.71828182846;
  	if(x==0){
	return 1;
	}
   for( a = 1; a < x; a = a + 1 ){
    e=e*e;
   }
	return e;
}

double Pow(double x, int y) {
	int a;
	
  
   for( a = 1; a < y; a = a + 1 ){
    x=x*x;
   }
 
   return x;
}



