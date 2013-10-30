/*
The MIT License (MIT)

Copyright (c) 2013 Nicolas Pauss

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#include "../LFLLTests.h"

TEST(LFLLRRamp, Test)
{
    LFLLRRamp term(-1.0f, 1.0f);

    ASSERT_LFLL_ABS_EQ(0.0f, term.membership(-1.5f));
    ASSERT_LFLL_ABS_EQ(0.0f, term.membership(-1.0f));
    ASSERT_LFLL_ABS_EQ(0.3f, term.membership(-0.4f));
    ASSERT_LFLL_ABS_EQ(0.5f, term.membership(0.0f));
    ASSERT_LFLL_ABS_EQ(0.6f, term.membership(0.2f));
    ASSERT_LFLL_ABS_EQ(0.9f, term.membership(0.8f));
    ASSERT_LFLL_ABS_EQ(1.0f, term.membership(1.0f));
    ASSERT_LFLL_ABS_EQ(1.0f, term.membership(1.4f));
}
