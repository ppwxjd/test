/***************************************************************************
 * 
 * Copyright (c) 2012 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 
 
/**
 * @file test.c
 * @author wangpan01(wangpan01@baidu.com)
 * @date 2012/09/05 12:54:57
 * @version $Revision$ 
 * @brief 
 *
 *  
 **/
//ƒ„∫√£¨Œ“‘⁄÷–π
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char sz[1024] = {0};
	FILE *fp = fopen("test.txt", "r");
	while (feof(fp) == 0)
	{
		fscanf(fp,"%s\n", sz);
		fflush(fp);
		printf("%s\n",sz);
		fflush(stdout);
		sleep(1);
	}
	fclose(fp);
	return 0;
}



















/* vim: set ts=4 sw=4 sts=4 tw=100 */
