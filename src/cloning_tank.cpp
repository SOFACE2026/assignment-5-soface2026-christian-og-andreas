#include "../include/cloning_tank.hpp"

// Implement this:
void CloningTank::filter_op(std::vector<Monkey> &monkeys)
{
    int old_size = monkeys.size();
    for(int i = 0;i<old_size;i++){

        Monkey to_clone = monkeys[i];

        Monkey * cloned_monkey = new Monkey(to_clone.name,to_clone.hunger_level);

        monkeys.push_back(*cloned_monkey);
    }
}