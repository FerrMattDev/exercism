#pragma once
#include <map>
#include <vector>
#include <string>
#include <algorithm>

namespace grade_school {
    class school{
    public:
        void add(const std::string& name, int grade_level);
        std::map<int, std::vector<std::string>> roster()const;
        std::vector<std::string> grade (int grade_level)const;
    private:
        std::map<int, std::vector<std::string>> roster_map;
    };

}  // namespace grade_school
