#include<stdio.h>
#include<math.h>
int main(){
	float a, b ,c;
	float x1, x2;
	float delta;
	scanf("%f %f %f", &a, &b, &c);
	if(a != 0){
		delta = b*b-4*a*c;
		if(delta < 0){ printf("VN");}
		else if(delta == 0){
			x1 = -b/(2*a); printf("%.3f", x1);}
			else if(delta > 0) {
			x1 = (-b-sqrt(delta))/(2*a); printf("%.3f ", x1);
			x2 = (-b+sqrt(delta))/(2*a); printf("%.3f", x2);}
    }
    else{
    	if(b!=0){ x1=-c/b; printf("%.3f", x1);}
        else{
               if(c!=0){ printf("VN");}
               else{ printf("VSN");}
               }
    }
return 0;
}
