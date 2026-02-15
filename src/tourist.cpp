#include "tourist.hpp"

// Implement this (visitor pattern)
void Tourist::visit(Monkey &monkey)
{
}

// Implement this (visitor pattern)
void Tourist::visit(Tiger &tiger)
{
}

// Implement this (visitor pattern)
void Tourist::visit(Fish &monkey)
{
}

std::vector<std::string> Tourist::list_visited()
{
    return visited;
}