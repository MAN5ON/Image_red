#ifndef IMAGE_TRANSFORMER_ERROR_H
#define IMAGE_TRANSFORMER_ERROR_H

#include <stdexcept>

class file_not_found : public std::runtime_error {
    public:
        using runtime_error::runtime_error;
};

#endif //IMAGE_TRANSFORMER_ERROR_H
