
#pragma once

namespace ez {
    template<typename float_type>
    float_type lerp(float_type a, float_type b, float_type factor) {
        return (float_type(1)-factor)*a + factor*b;
    }
}

