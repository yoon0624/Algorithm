#include "Board.h"

#include <iostream>
#include <conio.h>
#include <chrono>
#include <Windows.h>

using namespace studyAlgo;
void main()
{
	const int COLOR_GREEN = 10;
	const int COLOR_RED = 12;
	const int COLOR_WHITE = 15;

	const int WAIT_TICK = 1000 / 30;
	const std::string CIRCLE = "\x1B[32m\u25cf\033[0m";

	CONSOLE_CURSOR_INFO cursorInfo{ 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	std::chrono::system_clock::time_point last = std::chrono::system_clock::now();



	while (true)
	{
		std::cout << "start!" << std::endl;
#pragma region 프레임 관리
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

		auto nanoSec = start - last;
#pragma endregion



		// 입력

		// 로직

		// 렌더링

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), COORD{ 0,0 });
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		for (int i = 0; i < 25; i++)
		{
			for (int j = 0; j < 25; j++)
			{
				std::cout << (CIRCLE);
			}
			std::cout << std::endl;
		}

		std::cout << "\x1B[33m" << nanoSec.count() << "\x1B[m" << std::endl;
		last = start;

		Board* board = new Board();
		board->init();

	}

}
