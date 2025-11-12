#include <string>
#include <vector>


/**
 * Context: Koinonia has 40 serving slots:
 * Mon: Lunch prep / Lunch cleanup / Dinner prep / Dinner cleanup
 * ...
 * Fri: Lunch prep / Lunch cleanup / Dinner prep / Dinner cleanup
 * 
 * We will assume that Koin holds 30 residents who are on the list to serve.
 * 
 * We will format preferred_times as a 2D array containing 5 sub-vectors each with a binary condition.
 * The position of the binary condition refers to the time slot where preferred_times[i][j] is the time slot
 * such that i in [0,4] ranging from Mon-Fri and j in [0,3] ranges from lunch prep to dinner cleanup.
 * 
 * 
 * Strategy 1:
 * The sorter algorithm will generate all possible schedules. It will then iterate through each schedule and check if it
 * compatible with the preferences of each person.
 * 
 * Strategy 2:
 * Each Person object contains a 2D vector of preferred times. This will be implemented as a sort of contour plot.
 * The sorter algorithm will iterate through each time slot and find the two people with the highest preference for that time slot.
 * Each person will have a tally of how many times they have been assigned to a slot, and the algorithm will try to balance the assignments.
 * This means that if a person already has two assignments, they will be less likely to be assigned to another slot unless absolutely necessary.
 * The algorithm will continue to iterate through the time slots and adjust assignments until a balanced schedule is achieved.
 */

class Person{
    private:
        std::string name;
        std::vector<std::vector<bool>> preferred_times;
    public:
        Person(const std::string& name, const std::vector<std::vector<bool>>& preferred_times);
        // getters and setters
        std::string get_name() const;
        void set_name(const std::string& new_name);

        std::vector<std::vector<bool>> get_preferred_times() const;
        void set_preferred_times(const std::vector<std::vector<bool>>& new_preferred_times);
};