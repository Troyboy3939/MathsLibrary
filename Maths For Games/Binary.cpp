#include "Binary.h"
#include <iostream>
int Binary::binToDec(const char * binaryString)
{
	int count = strlen(binaryString);
	int result = 0;
	int place = 0;
	for(int i = count - 1; i >= 0; --i)
	{
		char bit = binaryString[place];
		if (bit == '1')
		{
			result += (1 << place);
		}
		place++;
	}
	return result;
}

void  Binary::decToBin(char * binaryString, int length, int value)
{
	for (int i = 0; i < length; i++)
	{
		int place = length - i;
		int rem = value % 2;
		value /= 2;

		binaryString[place] + rem;
	}
}

void  Binary::setBit(char & bitfield, int bit, bool value)
{
	if (value)
	{
		bitfield |= (1 << bit);
	}
	else
	{
		bitfield ^= (1 << bit);
	}
}

bool  Binary::checkBit(char & bitfield, int bit)
{

	return (bitfield & (1 << bit)) != 0;
}
