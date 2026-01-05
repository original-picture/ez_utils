
#pragma once

#include <algorithm>

namespace ez {
    template<typename float_type>
    float_type lerp(float_type a, float_type b, float_type factor) {
        return (float_type(1)-factor)*a + factor*b;
    }

    float  fpi = 3.14159265358979323846264f;
    double dpi = 3.14159265358979323846264 ;

    template<typename float_type>
    float_type clamp(float_type number, float_type lower_bound = float_type(-1), float_type upper_bound = float_type(1)) {
        return std::max(lower_bound, std::min(upper_bound, number));
    }
}


