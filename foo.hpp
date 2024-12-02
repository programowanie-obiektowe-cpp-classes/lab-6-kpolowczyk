#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::for_each(people.begin(), people.end(), [](Human& human) { human.birthday(); });
    std::transform(people.rbegin(), people.rend(), retval.begin(),
                   [](const Human& human) { return human.isMonster() ? 'n' : 'y'; });

    return retval;
}
