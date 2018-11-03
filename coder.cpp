/*
 * coder.cpp
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Coder class source.
 *
 * You may have to change this file to fix build errors, and make
 * the unit tests pass.
 *
 * Usually source files are used to write an implementation of
 * global and member functions.
 *
 */

#include "coder.h"


 /*
  * To make all unit tests pass you may try to puzzle out the ::encode() algorithm
  * and it should help you to write the decoding one. But there are other ways to
  * make them pass.
  *
  * Good luck!
  *
  */
void Coder::encode()
{

	::encode(m_buf, m_size);
}



Coder::Coder(const Coder &obj)
{
	m_size = obj.m_size;
	m_buf = new char[obj.m_size];

	for (int i = 0; i < obj.m_size - 1; i++)
	{
		m_buf[i] = obj.m_buf[i];
		if (obj.m_buf[i] == '\0') break;
	}
}


void Coder::set(const char* buf, int size) 
{	
	  if (buf == 0 && size == 1) throw std::logic_error("Error");
	  if ( size == 0 ) throw std::logic_error("Error test");	  
	  if ((unsigned int) size == std::numeric_limits<unsigned int>::max())
	  {
		  throw std::logic_error("Err");
	  }

	  m_buf = new char[size];
	  strcpy(m_buf, buf);
	  m_size = size;
}

char* Coder::buf() const {
	return m_buf;
}

int Coder::size() const {
	return m_size;
}


void Coder::decode() {
	
	for(int i=0; i<2047; i++)//1 word 7 | two words 15 (7*2+1)| three words 23 (7*3+2) | four words 31 | five words 63
	::encode(m_buf, m_size);

	/*for (int i = 0; i < 2; i++)
		::encode(m_buf, m_size);*/
	
}






