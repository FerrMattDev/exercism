#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
    std::string convert (int number){
        std::string drop{""};
        if (number % 3 == 0)
            drop += "Pling";
        if (number % 5 == 0)
            drop += "Plang";
        if (number % 7 == 0)
            drop += "Plong";
        if (drop.empty())
            drop = std::to_string(number);
        return drop;                    
    }

}  // namespace raindrops
