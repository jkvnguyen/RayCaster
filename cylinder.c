/*
 * implement ray/cylinder intersection routine
 *
 *	John Amanatides, Oct 2016
 */


#include <math.h>
#include "artInternal.h"

#define EPSILON	(1e-5)

/*
 * compute intersection between ray and a cylinder (-1<= y <= 1, x^2 + z^2 <= 1)
 * Returns MISS if no intersection; otherwise, it returns HIT and
 * sets t to the the distance  to the intersection point and sets the
 * normal vector to the outward facing normal (unit length) at the
 * intersection point.  Note: no intersection is returned if myT >= t
 * (ie my intersection point is further than something else already hit).
 */

int IntersectCylinder(ray, t, normal)
	Ray *ray;
	double *t;
	Vector *normal;
{

	/* your code goes here */
	
	return MISS;
}
