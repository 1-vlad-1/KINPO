#pragma once
/*!
* \mainpage Polygon
* The program determines whether a point belongs to a polygon
*/

/*! the function checks whether the desired point lies on the segment (õ1,y1)(x2,y2)
* \param[in] x1 x-coordinate of the beginning of the segment
* \param[in] y1 y-coordinate of the beginning of the segment
* \param[in] x2 x-coordinate of the end of the segment
* \param[in] y2 y-coordinate of the end of the segment
* \param[in] x x-coordinate of the desired point
* \param[in] y y-coordinate of the desired point
* \return - true - if the point lies on the segment and false - if the point does not lie on the segment
*/
bool point_on_segment(double x1, double y1, double x2, double y2, double x, double y);


/*! the function checks whether the segments intersect (x1,y1)(x2,y2) and (x3,y3)(x4,y4)
* \param[in] x1 x-coordinate of the beginning of the first segment
* \param[in] y1 y-coordinate of the beginning of the first segment
* \param[in] x2 x-coordinate of the end of the first segment
* \param[in] y2 y-coordinate of the end of the first segment
* \param[in] x3 x-coordinate of the beginning of the second segment
* \param[in] y3 y-coordinate of the beginning of the second segment
* \param[in] x4 x-coordinate of the end of the second segment
* \param[in] y4 y-coordinate of the end of the second segment
* \return - true - if the segments intersect and false - if they do not intersect
*/
bool intersect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

/*! The function checks the intersections of the ray with the coefficients k,b and the segment (x1,y1)(x2,y2)
* \param[in] x1 x-coordinate of the beginning of the segment
* \param[in] y1 y-coordinate of the beginning of the segment
* \param[in] x2 x-coordinate of the end of the segment
* \param[in] y2 y-coordinate of the end of the segment
* \param[in] k - angular coefficient of the ray
* \param[in] b - ray coefficient b
* \param[in] pointY - y-coordinate the point from which we emit the ray
* \param[in] pointX - x-coordinate the point from which we emit the ray
* \return - true - if there is an intersection and false - if there is no intersection
*/
bool ray_intersection_segment(double x1, double y1, double x2, double y2, double k, double b, double pointY, double pointX);

/*! A function to check that there are only numbers in a string
* \param[in] str[] - the string in which we check the characters
* \return - true - if there are only numbers in the string and false - if there are not only numbers in the string
*/
bool check(char str[]);

/*!
* structure storing the coordinates of x,y points
*/
struct point
{
    unsigned int x[100];
    unsigned int y[100];
};
