#include "keeper.hpp"
#include "monkey.hpp" // aldrig glem includes igen ellers bliver jeg sur.
#include "tiger.hpp"
#include "fish.hpp"

// Implement this (visitor part)
void Keeper::visit(Monkey &monkey)
{
    monkey.feed_banana();
}

// Implement this (visitor part)
void Keeper::visit(Tiger &tiger)
{
    tiger.scratch_back();
}

// Implement this (visitor part)
void Keeper::visit(Fish &fish) // rettet &monkey til &fish
{
    fish.clean_teeth();
}