#include "two_fer.h"

namespace two_fer {

    std::string two_fer(std::string name){
        if (name != "One for you, one for me.")
            return "One for " + name + ", one for me.";
        else
            return name;
        }

}  // namespace two_fer
