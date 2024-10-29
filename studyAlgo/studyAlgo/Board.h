#include <list>
#include <vector>
#include <iostream>
namespace studyAlgo
{
	template <typename T>
	class MyList
	{
	private: 
		const int DEFAULT_SIZE = 1;
		T* data;
	public:
		MyList(size_t cap = DEFAULT_SIZE) : data(new T[cap]), Count(0), Capacity(cap)
		{ 
		};
		int Count = 0;	// 실제 사용중인 데이터 개수
		int Capacity = DEFAULT_SIZE;
		
		void Add(T item)
		{
			// 공간이 충분히 남아 있는지 확인한다.
			if (Count >= Capacity)
			{
				// 공간 확보 
				Capacity = Count * 2;
				T* newArray = new T[Capacity];
				for (int i = 0; i < Count; i++)
				{
					newArray[i] = data[i];
				}
				delete[] data;
				data = newArray;
			}

			// 공간에다가 데이터를 넣어준다.
			data[Count] = item;
			Count++;
		}

		void RemoveAt(int index)
		{
			for (int i = index; i < Count - 1; i++)
			{
				data[i] = data[i + 1];
			}
			data[Count - 1] = default(T);
			Count--;
		}

		T operator[](int index)
		{
			return data[index];
		}


	};


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