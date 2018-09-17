#include <iostream>
#include <stdio.h>
#include "vec3.h"

//template <class T>

/*class vec3 {
private:
	T x;
	T y;
	T z;

public:
	vec3(T x_, T y_, T z_) : x(x_), y(y_), z(z_){};
	vec3() : x(0), y(0), z(0) {};
public:

	void normalize() {
		vec3 aux;

		float lenght = sqrt(pow(x)) + sqrt(pow(y)) + sqrt(pow(z));

		aux.x = x / length;
		aux.y = y / length;
		aux.z = z / length;
		return aux;

	};

	void zero() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	};

	bool is_zero() const {

		if ((x == 0) && (y == 0) && (z == 0)) {
			return true;
		}
		else
			return false;
	};

	void distance_to(vec3 &v2) const {

		float lenght = sqrt(pow(v2.x - x) + pow(v2.y - y) + pow(v2.z - z));
		return lenght;
	};

public:

	vec3 operator+(vec3 &v) {

		vec3 aux;

		aux.x = x + v.x;
		aux.y = y + v.y;
		aux.z = z + v.z;
		
		return aux;
	};
	
	vec3 operator-(vec3 &v) {

		vec3 aux;

		aux.x = x - v.x;
		aux.y = y - v.y;
		aux.z = z - v.z;

		return aux;
	};

	void operator+=(vec3 &v) {

		x += v.x;
		y += v.y;
		z -= v.z;

	};

	void operator-= (vec3 &v) {

		x -=v.x;
		y -=v.y;
		z -=v.z;

	};
	
	bool operator== (vec3 &v) {

		if ((x == v.x) && (y == v.y) && (z == v.z)) {
			return true;
		}
		else
			return false;

	};

	void operator=(vec3 &v) {

		x = v.x;
		y = v.y;
		z = v.z;
	};


};
*/

int main()
 {
	vec3<float> v1(1,2,4);
	vec3<float> v2(0, 0, 0);
	vec3<float> v3(5,7, 1);
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