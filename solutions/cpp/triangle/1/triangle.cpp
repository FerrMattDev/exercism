    #include "triangle.h"

namespace triangle {

// TODO: add your solution here
    flavor kind(double a, double b, double c){
        if (a <= 0 || b <= 0 || c <= 0) {
            throw std::domain_error("All sides must be positive");
        }
        
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw std::domain_error("Violates triangle inequality");
        }
        
        flavor result;
        if (a == b && b == c) {
            result = flavor::equilateral;
        } else if (a == b || b == c || a == c) {
            result = flavor::isosceles;
        } else {
            result = flavor::scalene;
        }
            return result;
    }

}  // namespace triangle
