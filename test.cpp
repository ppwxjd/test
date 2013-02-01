/***************************************************************************
 * 
 * Copyright (c) 2013 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 
 
/**
 * @file test.cpp
 * @author wangpan01(wangpan01@baidu.com)
 * @date 2013/01/23 14:03:42
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
using namespace std;
class A
{
public:
	static int func();
};

int A::func()
{
	cout << "A" << endl;
	return 0;
}

class B : public A
{
public:
	static int func();
};

int B::func()
{
	cout << "B" << endl;
	return 0;
}

int main()
{
	A::func();
	return 0;
}



















/* vim: set ts=4 sw=4 sts=4 tw=100 */
