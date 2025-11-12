#include "Person.hpp"

#include <string>
#include <vector>

// should only have 2 people per slot
struct Slot {
    std::vector<Person> assigned_people;
};

struct Schedule {
    // 40 slots, each with a vector of assigned Persons
    Slot slots[Sorter::TOTAL_DAYS][Sorter::TOTAL_SLOTS];
};

class Sorter {
    private:
        std::vector<Person> people;
        std::vector<Schedule> schedules;
    public:
        static const unsigned int TOTAL_DAYS = 5;
        static const unsigned int TOTAL_SLOTS = 40;

        Sorter(std::vector<Person> people) {
            this->people = people;
        }
        
        std::vector<Person> get_people(){return people;}
        void set_people(const std::vector<Person>& new_people){people = new_people;}

        std::vector<Schedule> Sorter::get_schedules() const {return schedules;}
        void Sorter::set_schedules(const std::vector<Schedule>& new_schedules) {
            schedules = new_schedules;
        }

        void add_person(const Person& person) {people.push_back(person);}
        void add_schedule(const Schedule& schedule) {schedules.push_back(schedule);}

        void generate_schedules();

        void print_schedule();
};
