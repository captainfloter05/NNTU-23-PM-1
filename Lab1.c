#include <stdio.h>
#include <math.h>
float main(){
float x=0,y=1,u;
float v1,v2,v3;
for(float x=0;x<=1;x+=0.6){
for(float y=0;y<=1;y+=0.7){
if((x+y)<=2){
v1=pow(fabs(cos(x)),y);
v2=pow(x+6,0.2);
u=fminf(v1,v2);
}else{
v3=pow(x,2)+x*pow(y,2);
u=v3;
}
printf("x=%g,y=%g,u=%g\n",x,y,u);
}
}
return 0;
}
