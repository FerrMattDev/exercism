#include "power_of_troy.h"

namespace troy {

    void give_new_artifact(human& human, std::string artifact_name){
        artifact new_artifact(artifact_name);
        human.possession = std::make_unique<artifact>(new_artifact);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& first, std::unique_ptr<artifact>& second) {
        std::swap(first, second);
    }
    void manifest_power (human& human, std::string power_name){
        power new_power(power_name);
        human.own_power = std::make_shared<power>(new_power);
    }
    void use_power (human& first, human& second){
        second.influenced_by = first.own_power;
    }

    int power_intensity (human& human){
        int power_intensisy {0};
        if (human.own_power != nullptr)
            power_intensisy += human.own_power.use_count();
        return power_intensisy;
    }
}  // namespace troy
