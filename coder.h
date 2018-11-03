/*
 * coder.h
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Coder class header.
 *
 * You have to change this file to fix build errors, and make
 * the unit tests passed.
 *
 */

#ifndef CODER_H
#define CODER_H

#include <stdexcept>
#include <limits>
#include <iostream>
#include <cstring>
#include <cmath>
 /*
  * This function was pre-compiled and is provided as a part of the
  * static library.
  *
  */
void encode(char* buf, int size);

#pragma pack(push, 1)

/*
 * Coder class header.
 *
 */
class Coder
{
public:
	Coder(const Coder &obj);
	
	void set(const char* buf, int size);
	char* buf() const;
	Coder() {
		m_buf = 0;
		m_size = 0;
	}
	int size() const;
	Coder& operator=(const Coder& b) 
	{

		m_size = b.m_size;

		m_buf = new char[m_size];
		strcpy(m_buf, b.m_buf);
		return *this;
	}
	void encode();
	void decode();
	
private:
	char* m_buf;
	int m_size;
	//int numw;
	int code;
};

#pragma pack(pop)

#endif // CODER_H
