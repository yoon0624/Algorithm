#include <list>
#include <vector>
#include <iostream>
#include "MyList.h"
namespace studyAlgo
{
	class Board
	{
	public:
		int* _data = new int[25];	// 배열
		std::vector<int> _data2 = std::vector<int>();// 동적배열
		std::list<int> _data3 = std::list<int>();// 연결리스트

		MyList<int> _data4 = MyList<int>(4);
		Board();
		void init()
		{
			_data2.push_back(101);
			_data2.push_back(102);
			_data2.push_back(103);
			_data2.push_back(104);
			_data2.push_back(105);

			int temp = _data2[2];
			std::cout << temp << std::endl;
			std::cout << _data2.capacity() << std::endl;
			std::cout << _data2.size() << std::endl;
			_data2.pop_back();

			_data4.Add(101);
			_data4.Add(102);
			_data4.Add(103);
			_data4.Add(104);
			_data4.Add(105);
			int temp2 = _data4[2];
			std::cout << temp2 << std::endl;
			std::cout << _data4.Capacity << std::endl;
			std::cout << _data4.Count << std::endl;

		}

	private:

	};
}