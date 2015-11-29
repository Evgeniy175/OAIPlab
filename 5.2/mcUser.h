#include "../4. OOP6R/set.h"
#include <iostream>
#include <map>

namespace MC_USER{
	class Map{
	public:
		Map();
		Map(int size, std::pair<long, set<long>*> setVar, ...);

		set<long>& getSet(long key);
		void erase(long key);
		void eraseFrom(long startKey, int count);
		void operator<< (long key);
		void operator>> (std::pair<long, set<long>*> addVar);

	private:
		std::map<long, set<long>*> container_;
	};
};