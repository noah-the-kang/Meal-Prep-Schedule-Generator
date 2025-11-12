#include "Person.hpp"

#include <string>
#include <vector>
#include <stdexcept>

// eventually can add in reading CSV files to populate Person objects

Person::Person(const std::string& name, const std::vector<std::vector<bool>>& preferred_times){
    this->name = name;
    this->preferred_times = preferred_times;
}

std::string Person::get_name() const {
    return name;
}

void Person::set_name(const std::string& new_name) {
    name = new_name;
}

std::vector<std::vector<bool>> Person::get_preferred_times() const {
    return preferred_times;
}

void Person::set_preferred_times(const std::vector<std::vector<bool>>& new_preferred_times) {
    preferred_times = new_preferred_times;
}


