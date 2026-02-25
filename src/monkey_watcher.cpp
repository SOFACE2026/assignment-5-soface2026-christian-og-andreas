#include "../include/monkey_watcher.hpp"

// Implement this:
void MonkeyWatcher::filter_op(std::vector<Monkey> &monkeys)
{
    for (int i = 0; i < monkeys.size(); i++){
        this->monkeys_seen.push_back(monkeys[i]);
    } 
}

const std::vector<Monkey> &MonkeyWatcher::get_monkeys_seen() const
{
    return this->monkeys_seen;
}