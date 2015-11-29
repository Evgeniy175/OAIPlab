#include <iostream>
#include <map>

namespace MC{ // map container

	class Map{
	public:
 		Map(int size, long val, ...);

		void add(Map& second);
 		void show();
		void showViaIt();
		void erase(long key);
		void eraseFrom(long startKey, int count);
		void change(long key, long newVal);

	private:
		std::map<long, long> container_;
	};
};