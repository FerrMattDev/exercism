#pragma once
#include <memory>
#include <string>
#include <algorithm>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

struct human{
    human(){};
    std::unique_ptr<artifact> possession {nullptr};
    std::shared_ptr<power> own_power {nullptr};
    std::shared_ptr<power> influenced_by {nullptr};    
};

void give_new_artifact(human& human, std::string artifact_name);
void exchange_artifacts(std::unique_ptr<artifact>& first, std::unique_ptr<artifact>& second);
void manifest_power (human& human, std::string power_name);
void use_power (human& first, human& second);
int power_intensity (human& human);

}  // namespace troy
