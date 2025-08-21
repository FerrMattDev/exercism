#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
        std::string reverse_string(std::string to_be_reversed){
            std::string reversed;
            reversed.reserve(to_be_reversed.length());
            
            for (size_t i = to_be_reversed.length(); i > 0; i--) {
                reversed.push_back(to_be_reversed[i-1]);
            }
            return reversed;
        }

}  // namespace reverse_string
