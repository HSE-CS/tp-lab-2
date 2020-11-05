#ifndef TASK3_H
#define TASK3_H

template<typename T, unsigned int arrSize> void map( T (&initialArr)[arrSize], T(*change)(T) )
{
	for (int i = 0; i < arrSize; i++){
		initialArr[i] = change(initialArr[i]);
	}
}

#endif
