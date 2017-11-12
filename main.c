/*
* (C) buernotwo 2017
* This is free software, anything can call my phone:
* buernotwo@gmail.com.
* 
* MakeFile hatsu-taiken:
* 
* Usage:
*   now no usage.
* 
* Return codes:
*    0 - sucess
*/ 
#include "PrintHello.h"
#include "PrintWorld.h"

int main(int argc, char **argv)
{
	PrintHello_SPrint("hello");
	PrintWorld_SPrint("world");
	return 0;
}
