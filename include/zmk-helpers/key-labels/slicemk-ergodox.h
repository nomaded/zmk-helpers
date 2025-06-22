// SliceMK ErgoDox key matrix / layout mapping
//
// ,-----.
// |   0 |
// `-----'
// ,-----------------------------.      ,-----------------------------.
// |   1   2   3   4   5   6   7 |      |   8   9  10  11  12  13  14 |
// |  15  16  17  18  19  20  21 |      |  22  23  24  25  26  27  28 |
// |  29  30  31  32  33  34     |      |      35  36  37  38  39  40 |
// |  41  42  43  44  45  46  47 |      |  48  49  50  51  52  53  54 |
// |  55  56  57  58  59 +-------'      `-------+  60  61  62  63  64 |
// `---------------------',---------.,---------.`--------------------'
//                    ,---+  65  66 ||  67  68 +---.
//                    |  69  70  71 ||  72  73  74 |
//                    |          75 ||  76         |
//                    `-------------'`-------------'
// ,-----.
// | DGL |
// `-----'
// ,-----------------------------.      ,-----------------------------.
// | LN5 LN4 LN3 LN2 LN1 LN0 LN6 |      | RN6 RN0 RN1 RN2 RN3 RN4 RN5 |
// | LT5 LT4 LT3 LT2 LT1 LT0 LT6 |      | RT6 RT0 RT1 RT2 RT3 RT4 RT5 |
// | LM5 LM4 LM3 LM2 LM1 LM0     |      |     RM0 RM1 RM2 RM3 RM4 RM5 |
// | LB5 LB4 LB3 LB2 LB1 LB0 LB6 |      | RB6 RB0 RB1 RB2 RB3 RB4 RB5 |
// | LF5 LF4 LF3 LF2 LF1 +-------'      `-------+ RF1 RF2 RF3 RF4 RF5 |
// `---------------------',---------.,---------.`--------------------'
//                    ,---+ LH5 LH4 || RH4 RH5 +---.
//                    | LH3 LH2 LH1 || RH1 RH2 RH3 |
//                    |         LH0 || RH0         |
//                    `-------------'`-------------'

#pragma once

// dongle
#define DGL 0

// left number row
#define LN0 6
#define LN1 5
#define LN2 4
#define LN3 3
#define LN4 2
#define LN5 1
#define LN6 7

// right number row
#define RN0 9
#define RN1 10
#define RN2 11
#define RN3 12
#define RN4 13
#define RN5 14
#define RN6 8

// left top row
#define LT0 20
#define LT1 19
#define LT2 18
#define LT3 17
#define LT4 16
#define LT5 15
#define LT6 21

// right top row
#define RT0 23
#define RT1 24
#define RT2 25
#define RT3 26
#define RT4 27
#define RT5 28
#define RT6 22

// left middle row
#define LM0 34
#define LM1 33
#define LM2 32
#define LM3 31
#define LM4 30
#define LM5 29

// right middle row
#define RM0 35
#define RM1 36
#define RM2 37
#define RM3 38
#define RM4 39
#define RM5 40

// left bottom row
#define LB0 46
#define LB1 45
#define LB2 44
#define LB3 43
#define LB4 42
#define LB5 41
#define LB6 47

// right bottom row
#define RB0 49
#define RB1 50
#define RB2 51
#define RB3 52
#define RB4 53
#define RB5 54
#define RB6 48

// left floor row
#define LF1 59
#define LF2 58
#define LF3 57
#define LF4 56
#define LF5 55

// right floor row
#define RF1 60
#define RF2 61
#define RF3 62
#define RF4 63
#define RF5 64

// left thumb row
#define LH0 75
#define LH1 71
#define LH2 70
#define LH3 69
#define LH4 66
#define LH5 65

// right thumb row
#define RH0 76
#define RH1 72
#define RH2 73
#define RH3 74
#define RH4 67
#define RH5 68
