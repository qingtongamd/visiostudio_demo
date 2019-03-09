#ifndef _HEAD_

#include "typedef.h"

class box
{
	public:
		Uint32 height;
		Uint32 length;
		Uint32 breadth;	
		Uint64 value(void);  //类成员函数
	private:
		Uint32 result;


};

#endif
