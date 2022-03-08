#pragma once
#include "MyVector3.h"

class Matrix3
{
public:
	double m11;
	double m12;
	double m13;
	double m21;
	double m22;
	double m23;
	double m31;
	double m32;
	double m33;

	Matrix3();
	Matrix3(
		double t_a11, double t_a12, double t_a13,
		double t_a21, double t_a22, double t_a23,
		double t_a31, double t_a32, double t_a33);

	Matrix3 operator +(const Matrix3 t_other) const;
	Matrix3 operator -(const Matrix3 t_other) const;
	Matrix3 operator *(const Matrix3 t_other) const;
	MyVector3 operator *(const MyVector3 t_vector)const;
	Matrix3 operator *(const double t_scale)const;


	bool operator ==(const Matrix3 other)const;
	bool operator !=(const Matrix3 other)const;


	Matrix3 transpose()const;
	double determinant() const;
	Matrix3 inverse() const;


	static Matrix3 rotationAntiClockwiseZ(const double t_angleRadians);
	static Matrix3 rotationAntiClockwiseY(const double t_angleRadians);
	static Matrix3 rotationAntiClockwiseX(const double t_angleRadians);

	static Matrix3 translationXY(const MyVector3 t_displacement); // 2d translation make sure z=1
	static Matrix3 scale(const double t_scalingfactor);
};

