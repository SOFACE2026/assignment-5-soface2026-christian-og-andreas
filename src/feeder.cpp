#include "../include/feeder.hpp"

// Implement this:
void Feeder::filter_op(std::vector<Monkey> &monkeys)
{

    //Increment through all monkeys in the given vector and decrement their hunger level by 1
    for (int m = 0; m < monkeys.size(); m++){
        monkeys[m].hunger_level -= 1;
    }
}