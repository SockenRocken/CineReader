#ifndef __bitreader_h
#define __bitreader_h

#include "data.h"
#include <fstream>

class bitreader {
 public:
  bitreader(std::ifstream *in) { input = in; }
  ~bitreader() {}
  BYTE  readBYTE();  
  CHAR  readCHAR();
  WORD  readWORD();
  INT16 readINT16();
  SHORT  readSHORT();
  BOOL  readBOOL();
  DWORD  readDWORD();
  UINT readUINT();
  LONG readLONG();
  INT readINT();
  FLOAT readFLOAT();
  DOUBLE readDOUBLE();
  //  STRING readSTRING();
  
 private:
  std::ifstream *input;

};
#endif