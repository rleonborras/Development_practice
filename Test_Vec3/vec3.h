#pragma once
#include <math.h>

#ifndef VEC3_H_
#define VEC3_H_

template <class T>

class vec3 {
private:
	T x;
	T y;
	T z;

public:
	vec3(T x_, T y_, T z_) : x(x_), y(y_), z(z_) {};
	vec3() : x(0), y(0), z(0) {};
public:

	vec3 normalize() {
		vec3 aux;

		float lenght = sqrt(pow(x,2)) + sqrt(pow(y,2)) + sqrt(pow(z,2));

		aux.x = x / lenght;
		aux.y = y / lenght;
		aux.z = z / lenght;
		return aux;

	};

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	};

	bool is_zero() const {

		if ((x == 0) && (y == 0) && (z == 0)) {
			return true;
		}
		else
			return false;
	};

	T distance_to(vec3 &v2) const {
		float lenght = sqrt(pow(v2.x - x,2.0) + pow(v2.y - y,2.0) + pow(v2.z - z,2.0));
		return (float)lenght;
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

		x -= v.x;
		y -= v.y;
		z -= v.z;

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


#endif // VEC3_H_
