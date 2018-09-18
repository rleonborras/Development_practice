#include <iostream>
#include <stdio.h>
#include "vec3.h"

int main()
 {
	vec3<float> v1(1.0,2.0,4.0);
	vec3<float> v2(0, 0, 0);
	vec3<float> v3(5.0,7.0, 1.0);
	vec3<float> v4(0, 0, 0);

	v1.is_zero();
	//v1.zero();
	//v1.distance_to(v3);
	//v1.normalize();

	//v3 = v1 + v2;
	//v2 += v1;
	//v2 = v3;
	v2 == v3;
	v2 == v4;

	system("pause");
	return 0;
}