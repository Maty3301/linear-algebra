#include "../include/vector_operations.hpp"

Vector2 add(const Vector2 &v1, const Vector2 &v2)
{
    return Vector2(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}

Vector3 add(const Vector3 &v1, const Vector3 &v2)
{
    return Vector3(v1.getX() + v2.getX(), v1.getY() + v2.getY(), v1.getZ() + v2.getZ());
}

Vector2 subtract(const Vector2 &v1, const Vector2 &v2)
{
    return Vector2(v1.getX() - v2.getX(), v1.getY() - v2.getY());
}

Vector3 subtract(const Vector3 &v1, const Vector3 &v2)
{
    return Vector3(v1.getX() - v2.getX(), v1.getY() - v2.getY(), v1.getZ() - v2.getZ());
}

Vector3 crossProduct(const Vector3 &v1, const Vector3 &v2)
{
    double x, y, z;
    x = (v1.getY() * v2.getZ()) - (v1.getZ() * v2.getY());
    y = (v1.getZ() * v2.getX()) - (v1.getX() * v2.getZ());
    z = (v1.getX() * v2.getY()) - (v1.getY() * v2.getX());
    return Vector3(x, y, z);
}

double dotProduct(const Vector2 &v1, const Vector2 &v2)
{
    return (v1.getX() * v2.getX() + v1.getY() * v2.getY());
}

double dotProduct(const Vector3 &v1, const Vector3 &v2)
{
    return (v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ());
}

Vector2 scale(const Vector2 &v, const double &scale)
{
    return Vector2(v.getX() * scale, v.getY() * scale);
}

Vector3 scale(const Vector3 &v, const double &scale)
{
    return Vector3(v.getX() * scale, v.getY() * scale, v.getZ() * scale);
}

double magnitude(const Vector2 &v)
{
    return std::hypot(v.getX(), v.getY());
}

double magnitude(const Vector3 &v)
{
    return std::hypot(v.getX(), v.getY(), v.getZ());
}

Vector2 unitVector(const Vector2 &v)
{
    double mag = magnitude(v);
    if (mag == 0)
        return Vector2();
    return Vector2(v.getX() / mag, v.getY() / mag);
}

Vector3 unitVector(const Vector3 &v)
{
    double mag = magnitude(v);
    if (mag == 0)
        return Vector3();
    return Vector3(v.getX() / mag, v.getY() / mag, v.getZ() / mag);
}

Vector2 orthogonalVector(const Vector2 &v)
{
    return Vector2(-v.getY(), v.getX());
}

Vector3 orthogonalVector(const Vector3 &v)
{
    return crossProduct(v, Vector3(1, 0, 0));
}

double vectorArea(const Vector3 &v1, const Vector3 &v2)
{
    return magnitude(crossProduct(v1, v2));
}

double vectorArea(const Vector2 &v1, const Vector2 &v2)
{
    return abs(dotProduct(v1, orthogonalVector(v2)));
}
