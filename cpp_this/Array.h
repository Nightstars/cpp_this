#pragma once
class Array
{
public:
	Array(int _len);
	~Array();
	//Array& setLen(int _len);
	Array* setLen(int _len);
	int getLen();
	//Array& printInfo();
	Array* printInfo();
private:
	int m_iLen;
};

