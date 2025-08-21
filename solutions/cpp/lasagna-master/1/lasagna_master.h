#pragma once
#include <vector>
#include <string>


namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime (std::vector<std::string> layers, int prep_time = 2);
    amount quantities (std::vector<std::string> layers);
    void addSecretIngredient (std::vector<std::string>& ingredients ,const std::vector<std::string>& friend_ingredients);
    std::vector<double> scaleRecipe (const std::vector<double> quantities, int portions);
    void addSecretIngredient (std::vector<std::string>& ingredients, std::string secretIngredient);
}  // namespace lasagna_master
