#include "leap.h"

namespace leap {

// TODO: add your solution here
    bool is_leap_year(int year){
        bool ret {false};
        if (year % 4 == 0){
            if (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0))
                ret = true;
        }
        return ret;
    }
}  // namespace leap
