#include "../include/feeder.hpp"

// Implement this:
void Feeder::filter_op(std::vector<Monkey> &monkeys)
{
    for (int m = 0; m < monkeys.size(); m++){
        monkeys[m].hunger_level -= 1;
    }
}