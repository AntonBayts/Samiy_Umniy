#define CTEST_MAIN

#include <Game_Process.h>
#include <ctest.h>
#include <menu.h>
#include <otris.h>

CTEST(GAME_PROCESS, TROW_ROLL)
{
    ASSERT_INTERVAL(1, 6, Trow_roll());
}

CTEST(GAME_PROCESS, WHATFIRST_1)
{
    ASSERT_EQUAL(0, WhatFirst(1));
}

CTEST(GAME_PROCESS, WHATFIRST_RAND)
{
    ASSERT_INTERVAL(0, 3, WhatFirst(4));
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
