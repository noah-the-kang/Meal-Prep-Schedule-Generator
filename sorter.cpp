#include "Sorter.hpp"
#include "Person.hpp"

#include <string>
#include <vector>



/**
 * Generate every single possible schedule such that there are at least two people on each serving slot.
 * There are 40 serving slots in total from Monday to Friday, 4 slots each day
 */
void Sorter::generate_schedules() {
    for (unsigned int i = 0; i < TOTAL_DAYS; ++i) {
        for (unsigned int j = 0; j < TOTAL_SLOTS; ++j) {
            std::vector<Person> slot_people;
            for (const Person& person : people) {
                const std::vector<std::vector<bool>>& prefs = person.get_preferred_times();
                if (prefs[i][j % 4]) { // j % 4 to cycle through the 4 slots each day
                    slot_people.push_back(person);
                }
            }
            // Here you can store or process slot_people as needed
        }
    }
}