#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime (std::vector<std::string> layers, int prep_time){
        return layers.size() * prep_time;
    }

    amount quantities (std::vector<std::string> layers){
        amount quantity;
        quantity.noodles = 0;
        quantity.sauce = 0.0;
        for (std::string layer : layers){
            if (layer == "noodles")
                quantity.noodles += 50;
            if (layer == "sauce")
                quantity.sauce += 0.2;
        }
        return quantity;
    }

    void addSecretIngredient (std::vector<std::string>& ingredients ,const std::vector<std::string>& friend_ingredients){
        ingredients[ingredients.size()-1] = friend_ingredients[friend_ingredients.size() -1 ];
    }

    std::vector<double> scaleRecipe (const std::vector<double> quantities, int portions){
        std::vector<double> correct_quantities;
        for (double quantity : quantities){
            correct_quantities.emplace_back(quantity * portions / 2);
        }
        return correct_quantities;
    }

    void addSecretIngredient (std::vector<std::string>& ingredients, std::string secretIngredient){
        ingredients[ingredients.size()-1] = secretIngredient;
    }


}  // namespace lasagna_master
