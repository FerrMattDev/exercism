#include "grade_school.h"

namespace grade_school {

    void school::add(const std::string& name, int grade_level){
        for (auto & [grade, students] : roster_map) {
            if (std::find(students.begin(), students.end(), name) != students.end()) {
                return;
            }
        }
        roster_map[grade_level].push_back(name);
        std::sort(roster_map[grade_level].begin(), roster_map[grade_level].end()); 
    }

    
    std::map<int, std::vector<std::string>> school::roster()const{
        return roster_map;
    }

    
    std::vector<std::string> school::grade (int grade_level)const{
            if (roster_map.count(grade_level)) {
                std::vector<std::string> students = roster_map.at(grade_level);
                return students;
            }
            return {};
    }

}  // namespace grade_school
