#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H
#include <random>
#include <string>

namespace robot_name {
    class robot{
    public:
        robot();
        std::string name() const;
        void reset();
        std::string generate_name ();
    private:
        std::string robot_name;
    };

// TODO: add your solution here

}  // namespace robot_name

#endif  // ROBOT_NAME_H