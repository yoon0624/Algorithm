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
}