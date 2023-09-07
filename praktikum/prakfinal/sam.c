#include <stdio.h>
#include <math.h>

int main ()
{
    double a,b,c,d,bridge_lenght,cliff_height,distobase, bridge_height, cliff_distance, garden_area, pi = 3.14159;;
    scanf("%lf%lf%lf%lf", &bridge_lenght, &cliff_height, &distobase, &d);

    bridge_height = cliff_height - distobase;      // tinggi tebing - tinggi bawah jembatan ke tanah/dasar jurang

    // mencari jarak antar 2 tebing
    a = (0.25*bridge_lenght*bridge_lenght - bridge_height*bridge_height)/(2*bridge_height); 
    b = (a + bridge_height)/a;
    cliff_distance = 2*a*acosh(b);

    if (bridge_height==bridge_lenght/2) cliff_distance=0;
    else if(cliff_height==distobase) {
        cliff_distance = bridge_lenght;
    }
    printf("%.2lf\n", cliff_distance);

    if (cliff_distance>(bridge_lenght/2)) {             // jarak tebing > panjang jembatan/2 maka dibangun taman model 1
    garden_area = 0.25*pow(d,2)*(1+2*sqrtl(2)-pi);
    printf("%.2lf\n", garden_area);
    }

	  else {                                              // jarak tebing < panjang jembatan maka dibangun taman model 2
		garden_area = pow(d,2)*(pi-2)/8;
		printf("%.2lf\n", garden_area);
    }
    return 0;
}