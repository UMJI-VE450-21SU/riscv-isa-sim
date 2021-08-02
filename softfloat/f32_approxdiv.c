#include <stdbool.h>
#include <stdint.h>
#include "platform.h"
#include "internals.h"
#include "specialize.h"
#include "softfloat.h"

float32_t f32_approxdiv( float32_t a, float32_t b )
{
	float16_t a_temp;
	float16_t b_temp;
	float16_t c_temp;
	float32_t c;

	a_temp = f32_to_f16(a);
	b_temp = f32_to_f16(b);

	c_temp = f16_div(a_temp,b_temp);

	c = f16_to_f32(c_temp);

	return c;
}