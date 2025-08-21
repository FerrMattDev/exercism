// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#include "doctor_data.h"

namespace heaven {
    Vessel::Vessel (std::string name, int number)
    :vessel_name(name), generation(number) {}
    
    Vessel::Vessel (std::string name, int number, star_map::System type)
    :vessel_name(name), generation(number), current_system (type) {}
    
    Vessel Vessel::replicate (std::string name) {
        Vessel new_vessel (name, ++generation, current_system);
        return new_vessel;
    }
    
    void Vessel::make_buster (){
        busters++;
    }
    
    bool Vessel::shoot_buster (){
        bool success {false};
        if (busters > 0){
            busters--;
            success = true;
        }
        return success;
    }
    
    std::string get_older_bob (Vessel a, Vessel b){
        std::string name = a.vessel_name;
        if (a.generation > b.generation)
                name = b.vessel_name;
        return name;
    }
    
    bool in_the_same_system (Vessel a, Vessel b){
        return a.current_system == b.current_system;
    }   
}