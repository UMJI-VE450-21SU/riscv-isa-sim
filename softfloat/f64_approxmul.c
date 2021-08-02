#include <stdbool.h>
#include <stdint.h>
#include "platform.h"
#include "internals.h"
#include "specialize.h"
#include "softfloat.h"

float64_t f64_approxmul( float64_t a, float64_t b )
{
	float32_t a_temp;
	float32_t b_temp;
	float32_t c_temp;
	float64_t c;

	a_temp = f64_to_f32(a);
	b_temp = f64_to_f32(b);

	c_temp = f32_mul(a_temp,b_temp);

	c = f32_to_f64(c_temp);

	return c;
}