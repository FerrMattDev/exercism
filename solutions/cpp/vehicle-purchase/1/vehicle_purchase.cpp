#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    bool ret {false};
    if (kind == "car" || kind == "truck")
        ret = true;
    return ret;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string chosen = option1;
    if (option1 > option2)
        chosen = option2;
    return chosen + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double price;
    if (age < 3){
        price = original_price * (1 - 0.2);
    }
    else if ( age >= 10){
        price = original_price * (1 - 0.5);
    }
    else{
        price = original_price * (1 - 0.3);
    }       
    
    return price;
}

}  // namespace vehicle_purchase