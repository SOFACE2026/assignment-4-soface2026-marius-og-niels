#include "tourist.hpp"

// Implement this (visitor pattern)
void Tourist::visit(Monkey &monkey)
{
    visited.push_back("monkey"); // implementeret med pushback
}

// Implement this (visitor pattern)
void Tourist::visit(Tiger &tiger)
{
    visited.push_back("tiger");
}

// Implement this (visitor pattern)
void Tourist::visit(Fish &fish) // vi har også rettet &monkey til &fish
{
    visited.push_back("fish");
}

std::vector<std::string> Tourist::list_visited()
{
    return visited;
}