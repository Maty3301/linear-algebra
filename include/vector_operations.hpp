/**
 * @file vector_operations.hpp
 * @author Casteglione Matias
 * @brief Library containing basic vectorial operations.
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef VECTOR_OPERATIONS_HEADER
#define VECTOR_OPERATIONS_HEADER

#include "vector2.hpp"
#include "vector3.hpp"
#include <cmath>

/**
 * @brief Calculates the addition of the vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return Vector2
 */
Vector2 add(const Vector2 &v1, const Vector2 &v2);

/**
 * @brief Calculates the addition of the vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return Vector3
 */
Vector3 add(const Vector3 &v1, const Vector3 &v2);

/**
 * @brief Calculates the subtract of the vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return Vector2
 */
Vector2 subtract(const Vector2 &v1, const Vector2 &v2);

/**
 * @brief Calculates the subtract of the vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return Vector3
 */
Vector3 subtract(const Vector3 &v1, const Vector3 &v2);

/**
 * @brief Calculates the cross product of two vectors using Sarrus algorithm.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return Vector3
 */
Vector3 crossProduct(const Vector3 &v1, const Vector3 &v2);

/**
 * @brief Calculates the dot product of two vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return double
 */
double dotProduct(const Vector2 &v1, const Vector2 &v2);

/**
 * @brief Calculates the dot product of two vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return double
 */
double dotProduct(const Vector3 &v1, const Vector3 &v2);

/**
 * @brief Calculates the scale product.
 *
 * @param v Vector
 * @param scale Scale factor
 * @return Vector2
 */
Vector2 scale(const Vector2 &v, const double &scale);

/**
 * @brief Calculates the scale product.
 *
 * @param v Vector
 * @param scale Scale factor
 * @return Vector3
 */
Vector3 scale(const Vector3 &v, const double &scale);

/**
 * @brief Calculates the magnitude of the vector.
 *
 * @param v Vector
 * @return double
 */
double magnitude(const Vector2 &v);

/**
 * @brief Calculates the magnitude of the vector.
 *
 * @param v Vector
 * @return double
 */
double magnitude(const Vector3 &v);

/**
 * @brief Calculates the unit vector.
 *
 * @param v Vector
 * @return Vector2
 */
Vector2 unitVector(const Vector2 &v);

/**
 * @brief Calculates the unit vector.
 *
 * @param v Vector
 * @return Vector3
 */
Vector3 unitVector(const Vector3 &v);

/**
 * @brief Returns an orthogonal vector of the given one.
 *
 * @param v Vector
 * @return Vector2
 */
Vector2 orthogonalVector(const Vector2 &v);

/**
 * @brief Returns an orthogonal vector of the given one.
 *
 * @param v Vector
 * @return Vector3
 */
Vector3 orthogonalVector(const Vector3 &v);

/**
 * @brief Calculates the area between two vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return double
 */
double vectorArea(const Vector3 &v1, const Vector3 &v2);

/**
 * @brief Calculates the area between two vectors.
 *
 * @param v1 Vector
 * @param v2 Vector
 * @return double
 */
double vectorArea(const Vector2 &v1, const Vector2 &v2);

/**
 * @brief Calculates the angle between two vectors.
 *
 * @tparam vector
 * @param v1 Vector
 * @param v2 Vector
 * @return double
 */
template <typename T>
double angle(const T &v1, const T &v2)
{
    double angle = acos(dotProduct(v1, v2) / (magnitude(v1) * magnitude(v2))) * 180.f / M_PI;
    if (angle != angle) // if is NaN
        return 0;
    return angle;
}

/**
 * @brief Calculates the scale of the proyection vector.
 *
 * @tparam vector
 * @param v1 Vector
 * @param v2 Vector
 * @return double
 */
template <typename T>
double vectorComponent(const T &v1, const T &v2)
{
    return dotProduct(v1, v2) / magnitude(v2);
}

/**
 * @brief Calculates the projection vector of V1 on V2.
 *
 * @tparam vector
 * @param v1 Vector
 * @param v2 Vector
 * @return T
 */
template <typename T>
T proyection(const T &v1, const T &v2)
{
    return scale(unitVector(v2), vectorComponent(v1, v2));
}

#endif