#include "../include/cloning_tank.hpp"

// Implement this:
void CloningTank::filter_op(std::vector<Monkey> &monkeys)
{

    //we calculate the old size so the size doesnt change when new monekys are added
    int old_size = monkeys.size();
    for(int i = 0;i<old_size;i++){

        Monkey to_clone = monkeys[i];
        //Instance a new monkey with same name and hunger level as old one
        Monkey * cloned_monkey = new Monkey(to_clone.name,to_clone.hunger_level);

        //push the new monkey to the back of the vector
        monkeys.push_back(*cloned_monkey);
    }
}