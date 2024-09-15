//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "memory", 10, 20},
/*  {"",  "nettraf",  1,  16}, */
  {"",  "volume", 1,  10},
  {"",  "internet", 5,  4},
  {"",  "battery",  60,  1}, 
  {"",  "clock",  60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
