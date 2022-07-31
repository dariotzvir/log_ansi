//Fork from: https://github.com/tomsik68/ansi_colors

#ifndef _LOG_ANSI_
#define _LOG_ANSI_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define __ANSI_SEQ(n) "\033[" #n "m"

#define BOLD __ANSI_SEQ(1)
#define WEAK __ANSI_SEQ(2) 
#define HIGHLIGHT __ANSI_SEQ(3) 
#define UNDERLINE __ANSI_SEQ(4)
#define BLACK __ANSI_SEQ(30)
#define DARK_RED __ANSI_SEQ(31)
#define DARK_GREEN __ANSI_SEQ(32)
#define DARK_YELLOW __ANSI_SEQ(33)
#define DARK_BLUE __ANSI_SEQ(34)
#define DARK_PINK __ANSI_SEQ(35)
#define DARK_CYAN __ANSI_SEQ(36)
#define BLACK_BG __ANSI_SEQ(40)       //Black background white text
#define DARK_RED_BG __ANSI_SEQ(41)    //Red background white text
#define DARK_GREEN_BG __ANSI_SEQ(42)  //Green background white text
#define DARK_YELLOW_BG __ANSI_SEQ(43) //Yellow background white text
#define DARK_BLUE_BG __ANSI_SEQ(44)   //Blue background white text
#define DARK_PINK_BG __ANSI_SEQ(45)   //Pink background white text
#define DARK_CYAN_BG __ANSI_SEQ(46)   //Cyan background white text
#define GRAY __ANSI_SEQ(90)
#define LIGHT_RED __ANSI_SEQ(91)
#define LIGHT_GREEN __ANSI_SEQ(92)
#define LIGHT_YELLOW __ANSI_SEQ(93)
#define LIGHT_BLUE __ANSI_SEQ(94)
#define LIGHT_PINK __ANSI_SEQ(95)
#define LIGHT_CYAN __ANSI_SEQ(96)
#define LIGHT_GRAY __ANSI_SEQ(97)
#define GRAY_BG __ANSI_SEQ(100)
#define LIGHT_RED_BG __ANSI_SEQ(101)
#define LIGHT_GREEN_BG __ANSI_SEQ(102)
#define LIGHT_YELLOW_BG __ANSI_SEQ(103)
#define LIGHT_BLUE_BG __ANSI_SEQ(104)
#define LIGHT_PINK_BG __ANSI_SEQ(105)
#define LIGHT_CYAN_BG __ANSI_SEQ(106)
#define LIGHT_GRAY_BG __ANSI_SEQ(107)

#define RESET "\033[m"
#define NO_MODIFIER ""

#define FORMATO_LOG(color, modificador, format)\
color modificador "%s: " format RESET "\n\r"

#define LOG(color, modificador, tag, format, ...)\
printf(FORMATO_LOG(color, modificador, format), tag, ##__VA_ARGS__)

#define LOG_E(format, ...)\
LOG(DARK_RED, NO_MODIFIER, "ERROR", format, ##__VA_ARGS__)

#define LOG_GENERIC(format, ...)\
LOG(LIGHT_GREEN, NO_MODIFIER, "GENERIC", format, ##__VA_ARGS__)

#endif //_LOG_ANSI_