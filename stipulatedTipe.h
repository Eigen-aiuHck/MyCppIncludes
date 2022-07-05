#pragma once
#include <cstdio>

namespace stipulated_type
{
    typedef std::int8_t s8;
    typedef std::int16_t s16;
    typedef std::int32_t s32;
    typedef std::int64_t s64;

    typedef std::uint8_t u8;
    typedef std::uint16_t u16;
    typedef std::uint32_t u32;
    typedef std::uint64_t u64;

    typedef float f32;
    typedef double f64;
    typedef long double f128;
}

namespace stipulated_type_least
{
    typedef std::int_least8_t s8;
    typedef std::int_least16_t s16;
    typedef std::int_least32_t s32;
    typedef std::int_least64_t s64;

    typedef std::uint_least8_t u8;
    typedef std::uint_least16_t u16;
    typedef std::uint_least32_t u32;
    typedef std::uint_least64_t u64;
    
    typedef float f32;
    typedef double f64;
    typedef long double f128;
}

namespace stipulated_type_fast
{
    typedef std::int_fast8_t s8;
    typedef std::int_fast16_t s16;
    typedef std::int_fast32_t s32;
    typedef std::int_fast64_t s64;

    typedef std::uint_fast8_t u8;
    typedef std::uint_fast16_t u16;
    typedef std::uint_fast32_t u32;
    typedef std::uint_fast64_t u64;

    typedef float f32;
    typedef double f64;
    typedef long double f128;
}