#ifndef IMAGE_TRANSFORMER_IMAGE_OPERATIONS_H
#define IMAGE_TRANSFORMER_IMAGE_OPERATIONS_H

#include "image.h"
#include <algorithm>

enum class axis {
    vertical,
    horizontal
};

image to_gray(image img) {
    for (auto& row: img.pixels) {
        for (auto& pixel: row) {
            pixel[0] *= 0.2989;
            pixel[1] *= 0.5870;
            pixel[2] *= 0.1140;
            pixel[0] += pixel[1]+pixel[2];
            pixel.resize(1);
        }
    }
    return img;
}

#endif 
