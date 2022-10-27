// -*- C++ -*-

// AUTO GENERATED; DO NOT EDIT.
// To regenerate this file, see comments in bin/validatorgen

#ifndef CPP_HTMLPARSER_VALIDATORS_SUPPORTED_MEDIA_QUERY_H_
#define CPP_HTMLPARSER_VALIDATORS_SUPPORTED_MEDIA_QUERY_H_

#include <array>
#include <functional>
#include <iostream>
#include <optional>
#include <string_view>
#include <utility>
#include <vector>

namespace htmlparser::css {

enum class StateCode : uint8_t {
  $ = 0,
  ALL_L1 = 1,
  ALL_L2 = 2,
  AND_D = 3,
  AND_N = 4,
  AND_OR_END = 5,
  ASPECT_RATIO_A2 = 6,
  ASPECT_RATIO_C = 7,
  ASPECT_RATIO_E = 8,
  ASPECT_RATIO_HYPHEN = 9,
  ASPECT_RATIO_I = 10,
  ASPECT_RATIO_O = 11,
  ASPECT_RATIO_P = 12,
  ASPECT_RATIO_R = 13,
  ASPECT_RATIO_S = 14,
  ASPECT_RATIO_T = 15,
  ASPECT_RATIO_T2 = 16,
  CM_UNIT = 17,
  COARSE_A = 18,
  COARSE_E = 19,
  COARSE_O = 20,
  COARSE_R = 21,
  COARSE_S = 22,
  DEVICE_ASPECT_RATIO_C = 23,
  DEVICE_ASPECT_RATIO_E = 24,
  DEVICE_ASPECT_RATIO_E2 = 25,
  DEVICE_ASPECT_RATIO_HYPHEN = 26,
  DEVICE_ASPECT_RATIO_I = 27,
  DEVICE_ASPECT_RATIO_V = 28,
  DEVICE_HYPHEN_NEXT = 29,
  EM_UNIT = 30,
  END_LENGTH_UNIT = 31,
  EXPRESSION_BEGIN = 32,
  EXPRESSION_VALUE_END = 33,
  FINE_E = 34,
  FINE_I = 35,
  FINE_N = 36,
  HEIGHT_E = 37,
  HEIGHT_G = 38,
  HEIGHT_H = 39,
  HEIGHT_I = 40,
  HEIGHT_OR_HOVER = 41,
  HEIGHT_T = 42,
  HOVER_E = 43,
  HOVER_R = 44,
  HOVER_V = 45,
  HOVER_VALUE_BEGIN = 46,
  HOVER_VALUE_E = 47,
  HOVER_VALUE_O = 48,
  HOVER_VALUE_R = 49,
  HOVER_VALUE_V = 50,
  INCH_UNIT = 51,
  LENGTH_NUMBER = 52,
  LENGTH_NUMBER_BEGIN = 53,
  MAX_HYPHEN = 54,
  MAX_X = 55,
  MINMAX_EXPRESSION_BEGIN = 56,
  MIN_N = 57,
  MIN_OR_MAX = 58,
  MM_UNIT = 59,
  NONE_E = 60,
  NONE_N = 61,
  NONE_O = 62,
  ONLY_L = 63,
  ONLY_N = 64,
  ONLY_Y = 65,
  POINTER_E = 66,
  POINTER_I = 67,
  POINTER_N = 68,
  POINTER_O = 69,
  POINTER_R = 70,
  POINTER_T = 71,
  POINTER_VALUE_BEGIN = 72,
  P_UNIT = 73,
  RATIO_DENOMINATOR = 74,
  RATIO_DENOMINATOR_BEGIN = 75,
  RATIO_NUMERATOR = 76,
  RATIO_NUMERATOR_BEGIN = 77,
  SCREEN_C = 78,
  SCREEN_E = 79,
  SCREEN_E2 = 80,
  SCREEN_N = 81,
  SCREEN_R = 82,
  SPACE_AFTER_AND = 83,
  SPACE_AFTER_ONLY = 84,
  SPACE_AFTER_SCREEN = 85,
  SPACE_OR_COLON = 86,
  WIDTH_D = 87,
  WIDTH_H = 88,
  WIDTH_I = 89,
  WIDTH_T = 90,
};

enum class CallbackCode {
  NONE = 0,
};

using Callback = std::function<void(CallbackCode, StateCode, int)>;
using LineCol = std::pair<int, int>;


// Validates json string, returns error line/col if str is invalid json.
inline std::pair<bool, LineCol> Validate(std::string_view str,
                                         Callback callback = nullptr);

// Extracts CallbackCode from the bytes.
inline static CallbackCode ToCallbackCode(uint32_t code);

// Extracts push StateCode from the bytes.
inline static StateCode ToPushStateCode(uint32_t code);

// Extracts active State code from the bytes.
inline static StateCode ToCurrentStateCode(uint32_t code);

// Returns code for current token and active state.
inline static uint32_t CodeForToken(unsigned char c, StateCode state);

// Checks the push bit is on.
inline static bool HasPushBit(uint32_t code);

// Checks the pop bit is on.
inline static bool HasPopBit(uint32_t code);

// Checks the shift bit is on.
inline static bool HasShiftBit(uint32_t code);

constexpr std::array<int, INT8_MAX> kTokenIndexes {
    39, 39, 39, 39, 39, 39, 39, 39,
    39, 0, 1, 39, 39, 2, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39,
    3, 39, 39, 39, 39, 39, 39, 39,
    4, 5, 39, 39, 39, 6, 39, 7,
    8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39,
    39, 19, 39, 20, 21, 22, 23, 24,
    25, 26, 39, 39, 27, 28, 29, 30,
    31, 39, 32, 33, 34, 39, 35, 36,
    37, 38, 39, 39, 39, 39, 39, };

constexpr std::array<std::array<uint32_t, 41>, 91> kParseStates {{
    // $
    // Code: 0
    {0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x100, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x4000, 0xff, 0xff, 0x4e00, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ALL_L1
    // Code: 1
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x200, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ALL_L2
    // Code: 2
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x5500, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // AND_D
    // Code: 3
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x5300, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // AND_N
    // Code: 4
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x300,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // AND_OR_END
    // Code: 5
    {0x500, 0x500, 0x500, 0x500, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x400, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x40, 0x40},
    // ASPECT_RATIO_A2
    // Code: 6
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x1000, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_C
    // Code: 7
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xf00, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_E
    // Code: 8
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x700, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_HYPHEN
    // Code: 9
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xd00, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_I
    // Code: 10
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xb00, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_O
    // Code: 11
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x4d5680, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_P
    // Code: 12
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x800, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_R
    // Code: 13
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x600, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_S
    // Code: 14
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xc00, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_T
    // Code: 15
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x900, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ASPECT_RATIO_T2
    // Code: 16
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xa00, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // CM_UNIT
    // Code: 17
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1f00, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // COARSE_A
    // Code: 18
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x1500, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // COARSE_E
    // Code: 19
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x2100, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // COARSE_O
    // Code: 20
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x1200, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // COARSE_R
    // Code: 21
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x1600, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // COARSE_S
    // Code: 22
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x1300, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // DEVICE_ASPECT_RATIO_C
    // Code: 23
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x1900, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // DEVICE_ASPECT_RATIO_E
    // Code: 24
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1c00, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // DEVICE_ASPECT_RATIO_E2
    // Code: 25
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1a00, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // DEVICE_ASPECT_RATIO_HYPHEN
    // Code: 26
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x1d00, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // DEVICE_ASPECT_RATIO_I
    // Code: 27
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x1700, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // DEVICE_ASPECT_RATIO_V
    // Code: 28
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x1b00,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // DEVICE_HYPHEN_NEXT
    // Code: 29
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xe00, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x2900, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x5900, 0xff, 0xff, 0xff, 0xff},
    // EM_UNIT
    // Code: 30
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1f00, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // END_LENGTH_UNIT
    // Code: 31
    {0x1f00, 0x1f00, 0x1f00, 0x1f00, 0xff, 0x500,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // EXPRESSION_BEGIN
    // Code: 32
    {0x2000, 0x2000, 0x2000, 0x2000, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xe00, 0xff, 0x1800, 0xff, 0xff,
     0xff, 0x2900, 0xff, 0xff, 0x3a00, 0xff,
     0xff, 0x4500, 0xff, 0xff, 0xff, 0xff,
     0x5900, 0xff, 0xff, 0xff, 0xff},
    // EXPRESSION_VALUE_END
    // Code: 33
    {0x2100, 0x2100, 0x2100, 0x2100, 0xff, 0x500,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // FINE_E
    // Code: 34
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x2100, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // FINE_I
    // Code: 35
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x2400, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // FINE_N
    // Code: 36
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x2200,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HEIGHT_E
    // Code: 37
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x2800, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HEIGHT_G
    // Code: 38
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x2700, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HEIGHT_H
    // Code: 39
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x2a00, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HEIGHT_I
    // Code: 40
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x2600, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HEIGHT_OR_HOVER
    // Code: 41
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x2800, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x2d00, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HEIGHT_T
    // Code: 42
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x355680, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_E
    // Code: 43
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x2c00, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_R
    // Code: 44
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x2e5680, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_V
    // Code: 45
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x2b00,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_VALUE_BEGIN
    // Code: 46
    {0x2e00, 0x2e00, 0x2e00, 0x2e00, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x3000, 0xff, 0xff, 0xff, 0x3e00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_VALUE_E
    // Code: 47
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x3100, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_VALUE_O
    // Code: 48
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x3200, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_VALUE_R
    // Code: 49
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x2100, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // HOVER_VALUE_V
    // Code: 50
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x2f00,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // INCH_UNIT
    // Code: 51
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x1f00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // LENGTH_NUMBER
    // Code: 52
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x3400, 0x3400, 0x3400, 0x3400,
     0x3400, 0x3400, 0x3400, 0x3400, 0x3400, 0x3400,
     0xff, 0xff, 0x1100, 0xff, 0x1e00, 0xff,
     0xff, 0xff, 0x3300, 0xff, 0x3b00, 0xff,
     0xff, 0x4900, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // LENGTH_NUMBER_BEGIN
    // Code: 53
    {0x3500, 0x3500, 0x3500, 0x3500, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x3400, 0x3400, 0x3400,
     0x3400, 0x3400, 0x3400, 0x3400, 0x3400, 0x3400,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // MAX_HYPHEN
    // Code: 54
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x3800, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // MAX_X
    // Code: 55
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x3600, 0xff, 0xff, 0xff},
    // MINMAX_EXPRESSION_BEGIN
    // Code: 56
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xe00, 0xff, 0x1800, 0xff, 0xff,
     0xff, 0x2500, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x5900, 0xff, 0xff, 0xff, 0xff},
    // MIN_N
    // Code: 57
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x3600,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // MIN_OR_MAX
    // Code: 58
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x3700, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x3900, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // MM_UNIT
    // Code: 59
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1f00, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // NONE_E
    // Code: 60
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x2100, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // NONE_N
    // Code: 61
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x3c00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // NONE_O
    // Code: 62
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x3d00, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ONLY_L
    // Code: 63
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x4100, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ONLY_N
    // Code: 64
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x3f00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // ONLY_Y
    // Code: 65
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x5400, 0xff, 0xff},
    // POINTER_E
    // Code: 66
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x4600, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // POINTER_I
    // Code: 67
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x4400, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // POINTER_N
    // Code: 68
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x4700,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // POINTER_O
    // Code: 69
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x4300, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // POINTER_R
    // Code: 70
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x485680, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // POINTER_T
    // Code: 71
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x4200, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // POINTER_VALUE_BEGIN
    // Code: 72
    {0x4800, 0x4800, 0x4800, 0x4800, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x1400, 0xff, 0xff, 0x2300,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x3e00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // P_UNIT
    // Code: 73
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x1f00, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1f00, 0xff,
     0xff, 0x1f00, 0xff, 0xff, 0xff},
    // RATIO_DENOMINATOR
    // Code: 74
    {0xff, 0xff, 0xff, 0xff, 0xff, 0x500,
     0xff, 0xff, 0x4a00, 0x4a00, 0x4a00, 0x4a00,
     0x4a00, 0x4a00, 0x4a00, 0x4a00, 0x4a00, 0x4a00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // RATIO_DENOMINATOR_BEGIN
    // Code: 75
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x4a00, 0x4a00, 0x4a00,
     0x4a00, 0x4a00, 0x4a00, 0x4a00, 0x4a00, 0x4a00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // RATIO_NUMERATOR
    // Code: 76
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x4b00, 0x4c00, 0x4c00, 0x4c00, 0x4c00,
     0x4c00, 0x4c00, 0x4c00, 0x4c00, 0x4c00, 0x4c00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // RATIO_NUMERATOR_BEGIN
    // Code: 77
    {0x4d00, 0x4d00, 0x4d00, 0x4d00, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x4c00, 0x4c00, 0x4c00,
     0x4c00, 0x4c00, 0x4c00, 0x4c00, 0x4c00, 0x4c00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SCREEN_C
    // Code: 78
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x5200, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SCREEN_E
    // Code: 79
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x5000, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SCREEN_E2
    // Code: 80
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x5100, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SCREEN_N
    // Code: 81
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x5500,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SCREEN_R
    // Code: 82
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x4f00, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SPACE_AFTER_AND
    // Code: 83
    {0x5300, 0x5300, 0x5300, 0x5300, 0x2000, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SPACE_AFTER_ONLY
    // Code: 84
    {0x5400, 0x5400, 0x5400, 0x5400, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x4e00, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SPACE_AFTER_SCREEN
    // Code: 85
    {0x5500, 0x5500, 0x5500, 0x5500, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x400, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // SPACE_OR_COLON
    // Code: 86
    {0x5600, 0x5600, 0x5600, 0x5600, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x40, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // WIDTH_D
    // Code: 87
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x5a00, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // WIDTH_H
    // Code: 88
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x355680, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // WIDTH_I
    // Code: 89
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x5700, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
    // WIDTH_T
    // Code: 90
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x5800, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff},
}};


inline static CallbackCode ToCallbackCode(uint32_t code) {
  // 4th byte.
  return static_cast<CallbackCode>((code & 0xff000000) >> 24);
}

inline static StateCode ToPushStateCode(uint32_t code) {
  // 3rd byte.
  return static_cast<StateCode>((code & 0x00ff0000) >> 16);
}

inline static StateCode ToCurrentStateCode(uint32_t code) {
  // 2nd byte.
  return static_cast<StateCode>((code & 0x0000ff00) >> 8);
}

inline static bool HasPushBit(uint32_t code) {
  // 8th bit in first byte.
  return (code & 0x80);
}

inline static bool HasPopBit(uint32_t code) {
  // 7th bit in first byte.
  return ((code & 0x40) >> 6) == 1;
}

inline static bool HasShiftBit(uint32_t code) {
  // 6th bit in first byte.
  return ((code & 0x20) >> 5) == 1;
}

inline static uint32_t CodeForToken(unsigned char c, StateCode state) {
  if (c > INT8_MAX) {
    return kParseStates[static_cast<uint8_t>(state)][39];
  }
  int index = kTokenIndexes[c];
  if (index == -1) index = 40;
  return kParseStates[static_cast<uint8_t>(state)][index];
}


inline std::optional<StateCode> ParseToken(
    char c, StateCode state, int i, std::vector<StateCode>* states_stack,
    Callback callback = nullptr) {
  uint32_t code = CodeForToken(c, state);
  if (code == 0xff) {
    code = CodeForToken(0, state);
  }

  if (code == 0xff) {
    return std::nullopt;
  }

  auto callback_code = ToCallbackCode(code);
  if (callback && callback_code > CallbackCode::NONE) {
    callback(callback_code, state, i);
  }

  if (HasPushBit(code)) {
    auto shift_code = ToPushStateCode(code);
    states_stack->push_back(shift_code);
    return ToCurrentStateCode(code);
  } else if (HasPopBit(code) && !states_stack->empty()) {
    state = states_stack->back();
    states_stack->pop_back();
    return state;
  } else if (HasShiftBit(code) && !states_stack->empty()) {
    auto shift_state = states_stack->back();
    states_stack->pop_back();
    if (auto s = ParseToken(c, shift_state, i, states_stack); s) {
      code = CodeForToken(c, shift_state);
      callback_code = ToCallbackCode(code);
      if (callback && callback_code > CallbackCode::NONE) {
        callback(callback_code, shift_state, i);
      }
      return s.value();
    } else {
      return std::nullopt;
    }
  } else {
    return ToCurrentStateCode(code);
  }
}

std::pair<bool, LineCol> Validate(std::string_view str, Callback callback) {
  StateCode state = StateCode::$;
  uint32_t code = 0;
  CallbackCode callback_code = CallbackCode::NONE;
  std::vector<StateCode> states_stack {StateCode::$};

  LineCol line_col{0, 0};
  std::size_t str_size = str.size();
  for (std::size_t i = 0; i < str_size; i++) {
    uint8_t c = str.at(i);
    if (c == '\n' || (c == '\r' &&
                      i < str_size - 1 &&
                      str.at(i + 1) != '\n')) {
      line_col.first++;
      line_col.second = 0;
    } else {
      line_col.second++;
    }

    auto s = ParseToken(c, state, i, &states_stack, callback);
    if (!s.has_value()) {
      // Invalid character.
      return {false, line_col};
    }
    state = s.value();
  }

  code = CodeForToken(0, state);
  callback_code = ToCallbackCode(code);
  auto end = ParseToken(0, state, str.size() - 1, &states_stack, callback);
  if (!end.has_value()) {
    return {false, line_col};
  }
  state = end.value();
  if (callback && callback_code > CallbackCode::NONE) {
    callback(callback_code, state, str.size() - 1);
  }

  if (state != StateCode::$) {
    return {false, line_col};
  }

  return {true, line_col};
}

}  // namespace htmlparser::css

#endif  // CPP_HTMLPARSER_VALIDATORS_SUPPORTED_MEDIA_QUERY_H_