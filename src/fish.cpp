#include "fish.hpp"

// Implement this (visitor pattern)
void Fish::accept(Visitor &visitor)
{
     visitor.visit(*this); //implementeret fra github
}

// Implement this (Observer part)
void Fish::clean_teeth()
{
}