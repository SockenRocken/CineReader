#ifndef __data_h
#define __data_h

#include <string>

typedef unsigned char BYTE;
typedef signed char CHAR;
typedef unsigned short int WORD;
typedef signed short int INT16;
typedef signed short int SHORT;
typedef int BOOL;
typedef unsigned int DWORD;
typedef unsigned int UINT;
typedef signed int LONG;
typedef signed int INT;
typedef float FLOAT;
typedef double DOUBLE;
typedef std::string STRING;

class TIME64 {
 public:
  DWORD Fractions; // Fractions of second, divide by 2^32 to convert to seconds
  DWORD Seconds; // Seconds since Jan 1, 1970

  TIME64() {}
};

class IMFILTER { //structure to define a convolution filter
 public:
  INT Dim; //square kernel dimension
  INT Shifts; //not sure about this one
  INT Bias; // or this one
  INT Coef[25]; //coefficinets of kernel

  IMFILTER() {}
};

class WBGAIN {
 public:
  FLOAT R; //gain correction for red
  FLOAT B; //gain correction for blue
};





#endif
