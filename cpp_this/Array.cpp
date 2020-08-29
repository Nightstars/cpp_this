#include "Array.h"
#include <iostream>
using namespace std;
Array::Array(int _len)
{
	this->m_iLen = _len;
}

Array::~Array()
{
}

//Array& Array::setLen(int _len)
//{
//	this->m_iLen = _len;
//	return *this;
//}

Array* Array::setLen(int _len)
{
	this->m_iLen = _len;
	return this;
}

int Array::getLen()
{
	return this->m_iLen;
}

//Array& Array::printInfo()
//{
//	cout <<"Len="<< this->m_iLen << endl;
//	return *this;
//}

Array* Array::printInfo()
{
	cout << "Len=" << this->m_iLen << endl;
	cout << this << endl;
	return this;
}
