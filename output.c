/***************************************************************************
 * 
 * Copyright (c) 2012 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 
 
/**
 * @file output.c
 * @author wangpan01(wangpan01@baidu.com)
 * @date 2012/09/06 17:55:22
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int main()
{
	char sz[1024] = {0};
	while (scanf("%s\n", sz) != EOF)
	{
		printf("%s\n", sz);
	}

	return 0;
}



















/* vim: set ts=4 sw=4 sts=4 tw=100 */
