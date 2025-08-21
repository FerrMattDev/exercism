#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

    class space_age{
    public:
        space_age ();
        space_age (double planet_age);
        double on_earth() const;
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
        double seconds() const;
    private:
        double age;
        double earth_year_seconds {31557600};
    };

// TODO: add your solution here

}  // namespace space_age

#endif  // SPACE_AGE_H