/*                              58 KEY MATRIX / LAYOUT MAPPING

  ╭───────────────────────────┬───────────────────────────  ╮
  │  0   1   2   3   4   5    │    6   7   8   9  10  11    │
  │ 12  13  14  15  16  17    │   18  19  20  21  22  23    │
  │ 24  25  26  27  28  29    │   30  31  32  33  34  35    │
  │ 36  37  38  39  40  41    │   42  43  44  45  46  47    │
  ╰──────╮  48  49  50 51  52 |53 54 55 56  57 ╭─────────   ╯


Left half                          Right half
┌───┬───┬───┬───┬───┬───┐     ┌───┬───┬───┬───┬───┬───┐
│LT5│LT4│LT3│LT2│LT1│LT0│     │RT0│RT1│RT2│RT3│RT4│RT5│
├───┼───┼───┼───┼───┼───┤     ├───┼───┼───┼───┼───┼───┤
│LM5│LM4│LM3│LM2│LM1│LM0│     │RM0│RM1│RM2│RM3│RM4│RM5│
├───┼───┼───┼───┼───┼───┤     ├───┼───┼───┼───┼───┼───┤
│LB5│LB4│LB3│LB2│LB1│LB0│     │RB0│RB1│RB2│RB3│RB4│RB5│
├───┼───┼───┼───┼───┼───┤     ├───┼───┼───┼───┼───┼───┤
│LF5│LF4│LF3│LF2│LF1│LF0│     │RF0│RF1│RF2│RF3│RF4│RF5│
└───┴───┴───┴───┴───┴───┘     └───┴───┴───┴───┴───┴───┘

Thumb clusters (straight 5 per side):
┌───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┐
│LH0│LH1│LH2│LH3│LH4│           │RH0│RH1│RH2│RH3│RH4│
└───┴───┴───┴───┴───┘           └───┴───┴───┴───┴───┘

*/

#pragma once

// Left top row
#define LT0 5
#define LT1 4
#define LT2 3
#define LT3 2
#define LT4 1
#define LT5 0

// Right top row
#define RT0 6
#define RT1 7
#define RT2 8
#define RT3 9
#define RT4 10
#define RT5 11

// Left second row
#define LM0 17
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12

// Right second row
#define RM0 18
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

// Left third row
#define LB0 29
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24

// Right third row
#define RB0 30
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

// Left fourth row
#define LF0 41
#define LF1 40
#define LF2 39
#define LF3 38
#define LF4 37
#define LF5 36

// Right fourth row
#define RF0 42
#define RF1 43
#define RF2 44
#define RF3 45
#define RF4 46
#define RF5 47

// Left thumb cluster (5 keys, inner → outer)
#define LH0 52
#define LH1 51
#define LH2 50
#define LH3 49
#define LH4 48

// Right thumb cluster (5 keys, inner → outer)
#define RH0 53
#define RH1 54
#define RH2 55
#define RH3 56
#define RH4 57

// // Left thumb cluster (5 keys)
// #define LH0 48
// #define LH1 49
// #define LH2 50
// #define LH3 51
// #define LH4 52

// // Right thumb cluster (5 keys)
// #define RH0 53
// #define RH1 54
// #define RH2 55
// #define RH3 56
// #define RH4 57