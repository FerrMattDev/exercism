#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
    bool connection_check (pillar_men_sensor* ptr){
        return ptr != nullptr;
    }

    int activity_counter (pillar_men_sensor* sensor, int capacity) {
        int activity_count = 0;
        for (int i = 0; i < capacity; i++){
            activity_count += (sensor + i)->activity;
        }
    return activity_count;
    }

    bool alarm_control (pillar_men_sensor* sensor) {
        bool alarm {false};
        if (sensor != nullptr && sensor->activity > 0){
            alarm = true;
        }
        return alarm;
    }

    bool uv_alarm (pillar_men_sensor* sensor) {
        bool alarm {false};
        if (sensor != nullptr) {
            int uv_light = uv_light_heuristic(&sensor->data);
            alarm = uv_light > sensor->activity;
        }
        return alarm;
    }

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
