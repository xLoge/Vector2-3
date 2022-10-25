#pragma once

#ifndef _VECTOR2_3_
#define _VECTOR2_3_

#include <ostream>
#include <cmath>

template <typename TYPE = double> struct Vector2
{
	template <typename TYPE = double> struct Vector3;

	TYPE x, y;

	constexpr Vector2() { }

	constexpr Vector2(const TYPE _x, const TYPE _y) :x(_x), y(_y) { }

	constexpr Vector2(const Vector2<TYPE>& _vec) : x(_vec.x), y(_vec.y) { }

	constexpr Vector2(const Vector3<TYPE>& _vec) : x(_vec.x), y(_vec.y) { }

	constexpr void Set(const TYPE _x, const TYPE _y)
	{
		x = _x;
		y = _y;
	}

	constexpr void SetAll(const TYPE _v)
	{
		x = _v;
		y = _v;
	}

	constexpr Vector2<TYPE> Sqrt()
	{
		return Vector2<TYPE>((TYPE)sqrt(x), (TYPE)sqrt(y));
	}

	constexpr Vector2<TYPE> Pow(const double _pow)
	{
		return Vector2<TYPE>((TYPE)pow(x, _pow), (TYPE)pow(y, _pow));
	}

	constexpr bool IsZero()
	{
		return !(x || y);
	}

	//----------------- | =

	Vector2<TYPE>& operator=(const Vector2<TYPE>& _vec)
	{
		x = _vec.x;
		y = _vec.y;
		return *this;
	}

	bool operator==(const Vector2<TYPE>& _vec)
	{
		if (x == _vec.x && y == _vec.y)
			return true;
		else
			return false;
	}

	bool operator!=(const Vector2<TYPE>& _vec)
	{
		if (x == _vec.x && y == _vec.y)
			return false;
		else
			return true;
	}

	//-----------------| +

	Vector2<TYPE>& operator+(const Vector2<TYPE>& _vec)
	{
		x += _vec.x;
		y += _vec.y;
		return *this;
	}

	Vector2<TYPE>& operator+(const TYPE& _size)
	{
		x += _size;
		y += _size;
		return *this;
	}

	//-----------------| ++

	Vector2<TYPE>& operator++()
	{
		x += 1;
		y += 1;
		return *this;
	}

	Vector2<TYPE>& operator++(int)
	{
		Vector2<TYPE> orig = *this;
		++(*this);
		return orig;
	}

	//-----------------| +=

	Vector2<TYPE>& operator+=(const TYPE& _size)
	{
		x += _size;
		y += _size;
		return *this;
	}

	Vector2<TYPE>& operator+=(const Vector2<TYPE>& _vec)
	{
		x += _vec.x;
		y += _vec.y;
		return *this;
	}

	//-----------------| -

	Vector2<TYPE>& operator-(const Vector2<TYPE>& _vec)
	{
		x -= _vec.x;
		y -= _vec.y;
		return *this;
	}

	Vector2<TYPE>& operator-(const TYPE& _size)
	{
		x -= _size;
		y -= _size;
		return *this;
	}

	//-----------------| --

	Vector2<TYPE>& operator--()
	{
		x -= 1;
		y -= 1;
		return *this;
	}

	Vector2<TYPE>& operator--(int)
	{
		Vector2<TYPE> orig = *this;
		--(*this);
		return orig;
	}

	//-----------------| -=

	Vector2<TYPE>& operator-=(const TYPE& _size)
	{
		x -= _size;
		y -= _size;
		return *this;
	}

	Vector2<TYPE>& operator-=(const Vector2<TYPE>& _vec)
	{
		x -= _vec.x;
		y -= _vec.y;
		return *this;
	}

	//-----------------| *

	Vector2<TYPE>& operator*(const TYPE& _size)
	{
		x *= _size;
		y *= _size;
		return *this;
	}

	Vector2<TYPE>& operator*(const Vector2<TYPE>& _vec)
	{
		x *= _vec.x;
		y *= _vec.y;
		return *this;
	}

	//-----------------| *=

	Vector2<TYPE>& operator*=(const TYPE& _size)
	{
		x *= _size;
		y *= _size;
		return *this;
	}

	Vector2<TYPE>& operator*=(const Vector2<TYPE>& _vec)
	{
		x *= _vec.x;
		y *= _vec.y;
		return *this;
	}

	//-----------------| /

	Vector2<TYPE>& operator/(const TYPE& _size)
	{
		if (x)
			x /= _size;
		if (y)
			y /= _size;
		return *this;
	}

	Vector2<TYPE>& operator/(const Vector2<TYPE>& _vec)
	{
		if (x)
			x /= _vec.x;
		if (y)
			y /= _vec.y;
		return *this;
	}

	//-----------------| /=

	Vector2<TYPE>& operator/=(const TYPE& _size)
	{
		if (x)
			x /= _size;
		if (y)
			y /= _size;
		return *this;
	}

	Vector2<TYPE>& operator/=(const Vector2<TYPE>& _vec)
	{
		if (x)
			x /= _vec.x;
		if (y)
			y /= _vec.y;
		return *this;
	}

	//-----------------| []

	constexpr TYPE operator[](const int _indx)
	{
		if (_indx == 0)
			return x;
		if (_indx == 1)
			return y;
		return NULL;
	}
};

template <typename TYPE> std::ostream& operator<<(std::ostream& out, const Vector2<TYPE>& _vec) {
	return out << _vec.x << "," << _vec.y;
}

template <typename TYPE = double> struct Vector3
{
	template <typename TYPE = double> struct Vector2;

	TYPE x, y, z;

	constexpr Vector3() { }

	constexpr Vector3(const TYPE _x, const TYPE _y, const TYPE _z) :x(_x), y(_y), z(_z) { }

	constexpr Vector3(const Vector3<TYPE>& _vec) :x(_vec.x), y(_vec.y), z(_vec.z) { }
	
	constexpr Vector3(const Vector2<TYPE>& _vec) :x(_vec.x), y(_vec.y), z(NULL) { }

	constexpr void Set(const TYPE _x, const TYPE _y, const TYPE _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}

	constexpr void SetAll(const TYPE _v)
	{
		x = _v;
		y = _v;
		z = _v;
	}

	constexpr Vector3<TYPE> Sqrt()
	{
		return Vector3<TYPE>((TYPE)sqrt(x), (TYPE)sqrt(y), (TYPE)sqrt(z));
	}

	constexpr Vector3<TYPE> Pow(const double _pow)
	{
		return Vector3<TYPE>((TYPE)pow(x, _pow), (TYPE)pow(y, _pow), (TYPE)pow(z, _pow));
	}

	constexpr bool IsZero()
	{
		return !(x || y || z);
	}

	//----------------- | =

	Vector3<TYPE>& operator=(const Vector3<TYPE>& _vec)
	{
		x = _vec.x;
		y = _vec.y;
		z = _vec.z;
		return *this;
	}
	
	bool operator==(const Vector3<TYPE>& _vec)
	{
		if (x == _vec.x && y == _vec.y && z == _vec.z)
			return true;
		else
			return false;
	}

	bool operator!=(const Vector3<TYPE>& _vec)
	{
		if (x == _vec.x && y == _vec.y && z == _vec.z)
			return false;
		else
			return true;
	}

	//-----------------| +

	Vector3<TYPE>& operator+(const Vector3<TYPE>& _vec)
	{
		x += _vec.x;
		y += _vec.y;
		z += _vec.z;
		return *this;
	}

	Vector3<TYPE>& operator+(const TYPE& _size)
	{
		x += _size;
		y += _size;
		z += _size;
		return *this;
	}

	//-----------------| ++

	Vector3<TYPE>& operator++()
	{
		x += 1;
		y += 1;
		z += 1;
		return *this;
	}

	Vector3<TYPE>& operator++(int)
	{
		Vector3<TYPE> orig = *this;
		++(*this);
		return orig;
	}
	
	//-----------------| +=

	Vector3<TYPE>& operator+=(const TYPE& _size)
	{
		x += _size;
		y += _size;
		z += _size;
		return *this;
	}

	Vector3<TYPE>& operator+=(const Vector3<TYPE>& _vec)
	{
		x += _vec.x;
		y += _vec.y;
		z += _vec.z;
		return *this;
	}

	//-----------------| -

	Vector3<TYPE>& operator-(const Vector3<TYPE>& _vec)
	{
		x -= _vec.x;
		y -= _vec.y;
		z -= _vec.z;
		return *this;
	}

	Vector3<TYPE>& operator-(const TYPE& _size)
	{
		x -= _size;
		y -= _size;
		z -= _size;
		return *this;
	}

	//-----------------| --

	Vector3<TYPE>& operator--()
	{
		x -= 1;
		y -= 1;
		z -= 1;
		return *this;
	}

	Vector3<TYPE>& operator--(int)
	{
		Vector3<TYPE> orig = *this;
		--(*this);
		return orig;
	}

	//-----------------| -=

	Vector3<TYPE>& operator-=(const TYPE& _size)
	{
		x -= _size;
		y -= _size;
		z -= _size;
		return *this;
	}

	Vector3<TYPE>& operator-=(const Vector3<TYPE>& _vec)
	{
		x -= _vec.x;
		y -= _vec.y;
		z -= _vec.z;
		return *this;
	}

	//-----------------| *

	Vector3<TYPE>& operator*(const TYPE& _size)
	{
		x *= _size;
		y *= _size;
		z *= _size;
		return *this;
	}

	Vector3<TYPE>& operator*(const Vector3<TYPE>& _vec)
	{
		x *= _vec.x;
		y *= _vec.y;
		z *= _vec.z;
		return *this;
	}

	//-----------------| *=

	Vector3<TYPE>& operator*=(const TYPE& _size)
	{
		x *= _size;
		y *= _size;
		z *= _size;
		return *this;
	}

	Vector3<TYPE>& operator*=(const Vector3<TYPE>& _vec)
	{
		x *= _vec.x;
		y *= _vec.y;
		z *= _vec.z;
		return *this;
	}

	//-----------------| /

	Vector3<TYPE>& operator/(const TYPE& _size)
	{
		if (x)
			x /= _size;
		if (y)
			y /= _size;
		if (z)
			z /= _size;
		return *this;
	}

	Vector3<TYPE>& operator/(const Vector3<TYPE>& _vec)
	{
		if (x)
			x /= _vec.x;
		if (y)
			y /= _vec.y;
		if (z)
			z /= _vec.z;
		return *this;
	}

	//-----------------| /=

	Vector3<TYPE>& operator/=(const TYPE& _size)
	{
		if (x)
			x /= _size;
		if (y)
			y /= _size;
		if (z)
			z /= _size;
		return *this;
	}

	Vector3<TYPE>& operator/=(const Vector3<TYPE>& _vec)
	{
		if (x)
			x /= _vec.x;
		if (y)
			y /= _vec.y;
		if (z)
			z /= _vec.z;
		return *this;
	}

	//-----------------| []

	constexpr TYPE operator[](const int _indx)
	{
		if (_indx == 0)
			return x;
		if (_indx == 1)
			return y;
		if (_indx == 2)
			return z;
		return NULL;
	}
};

template <typename TYPE> std::ostream& operator<<(std::ostream& out, const Vector3<TYPE>& _vec) {
	return out << _vec.x << "," << _vec.y << "," << _vec.z;
}

#endif
