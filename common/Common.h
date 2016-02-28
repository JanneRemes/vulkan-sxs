/*
 * Copyright (c) 2016 Philip Taylor
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef INCLUDED_VKSXS_COMMON
#define INCLUDED_VKSXS_COMMON

#ifdef _WIN32
// Disable secure CRT warnings since we prefer to use portable CRT functions
#define _CRT_SECURE_NO_WARNINGS
// Reduce the amount of stuff pulled in by windows.h
#define WIN32_LEAN_AND_MEAN
// Avoid bad interactions with std::min, std::max
#define NOMINMAX
#include <windows.h>
#endif // _WIN32

// We use function pointers for everything, so disable the prototypes
#define VK_NO_PROTOTYPES

#include "vulkan/vulkan.h"

// MSVC doesn't support PRIu64 for 64-bit ints in printf, so add it ourselves
#if defined(_WIN32) && !defined(PRIu64)
# define PRId64 "I64d"
# define PRIi64 "I64i"
# define PRIu64 "I64u"
# define PRIo64 "I64o"
# define PRIx64 "I64x"
# define PRIX64 "I64X"
#endif

#endif // INCLUDED_VKSXS_COMMON