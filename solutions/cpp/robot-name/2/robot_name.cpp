#include "robot_name.h"

namespace robot_name {

// TODO: add your solution here

    robot::robot():
    robot_name(generate_name()){}
    
    std::string robot::name() const {
        return robot_name;
    }
    void robot::reset(){
        robot_name = generate_name();
    }
    std::string robot::generate_name () {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(100, 999); 
        int randomNumber = distrib(gen);

        std::uniform_int_distribution<> distrib_char(0, 25); // For uppercase letters A-Z (0-25 index)
        char randomChar1 = 'A' + distrib_char(gen);
        char randomChar2 = 'A' + distrib_char(gen);

        return (std::stringstream() << randomChar1 << randomChar2 << randomNumber).str();
    }
}  // namespace robot_name
