#include <cheat.h>

CHEAT_TEST(mathematics_still_work,
    cheat_assert(3+2 == 5);
    cheat_assert_not(2 + 2 == 5);
)
