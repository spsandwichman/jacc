#pragma once

#ifdef NO_COLOR

#define Reset ""
#define Bold ""
#define Dim ""
#define Italic ""
#define Underline ""

#define Black ""
#define Red ""
#define Green ""
#define Yellow ""
#define Blue ""
#define Magenta ""
#define Cyan ""
#define White ""
#define Default ""

#define BG_Black ""
#define BG_Red ""
#define BG_Green ""
#define BG_Yellow ""
#define BG_Blue ""
#define BG_Magenta ""
#define BG_Cyan ""
#define BG_White ""
#define BG_Default ""

#else

#define Reset "\x1b[0m"
#define Bold "\x1b[1m"
#define Dim "\x1b[2m"
#define Italic "\x1b[3m"
#define Underline "\x1b[4m"

#define Black "\x1b[30m"
#define Red "\x1b[31m"
#define Green "\x1b[32m"
#define Yellow "\x1b[33m"
#define Blue "\x1b[34m"
#define Magenta "\x1b[35m"
#define Cyan "\x1b[36m"
#define White "\x1b[37m"
#define Default "\x1b[39m"

#define BG_Black "\x1b[40m"
#define BG_Red "\x1b[41m"
#define BG_Green "\x1b[42m"
#define BG_Yellow "\x1b[43m"
#define BG_Blue "\x1b[44m"
#define BG_Magenta "\x1b[45m"
#define BG_Cyan "\x1b[46m"
#define BG_White "\x1b[47m"
#define BG_Default "\x1b[49m"

#endif