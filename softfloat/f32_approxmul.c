#include <stdbool.h>
#include <stdint.h>
#include "platform.h"
#include "internals.h"
#include "specialize.h"
#include "softfloat.h"

float32_t f32_approxmul( float32_t a, float32_t b )
{
	return f32_div(a,b);   /* VE450 */
}
