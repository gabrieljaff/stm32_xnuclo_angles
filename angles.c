#include <stdio.h>
#include <math.h>

int main () {
float ax,ay,az,mx,my,mz,teta,psi,phi;

/*ax,ay,az,mx,my,mz sont récupéré par les capteurs*/
teta=atan(ay/ax);
psi=atan(-az/sqrt(ay^2+ax^2));
phi=atan((mx*sin(teta)-my*cos(teta))/(mz*cos(psi)+my*sin(teta)*sin(psi)+mx*cos(teta)*sin(psi)));
}
