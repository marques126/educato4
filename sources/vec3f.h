



#ifndef VEC3F_H_INCLUDED
#define VEC3F_H_INCLUDED

#include <iostream>

class Vec3f {
	private:
		float v[3];
	public:
		Vec3f();
		Vec3f(float x, float y, float z);

		float &operator[](int index);
		float operator[](int index) const;

		Vec3f operator*(float scale) const;
		Vec3f operator/(float scale) const;
		Vec3f operator+(const Vec3f &other) const;
		Vec3f operator-(const Vec3f &other) const;
		Vec3f operator-() const;

		const Vec3f &operator*=(float scale);
		const Vec3f &operator/=(float scale);
		const Vec3f &operator+=(const Vec3f &other);
		const Vec3f &operator-=(const Vec3f &other);

		float magnitude() const;
		float magnitudeSquared() const;
		Vec3f normalize() const;
		float dot(const Vec3f &other) const;
		Vec3f cross(const Vec3f &other) const;
};

Vec3f operator*(float scale, const Vec3f &v);
std::ostream &operator<<(std::ostream &output, const Vec3f &v);

float intersection(int x1, int y1, int z1, int x2, int y2, int z2, int x3,
		int y3, int z3, float x4, float z4);








#endif
