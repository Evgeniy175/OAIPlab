#include <map>
#include <vector>
#include <algorithm>

namespace THIRD{
	class UserClass{
	public:
		UserClass(char symbol);

		int getInt();
		char getChar();

	private:
		int intVal_;
		char charVal_;
	};

	class Third{
	public:
		std::map<long, UserClass> container_;

		Third(int size, UserClass first, ...);

		std::map<long, UserClass>::iterator getBegin();
		std::map<long, UserClass>::iterator getEnd();

		void copyElements(std::vector<UserClass>& dest, char condition);

		static bool isLess(UserClass first, UserClass second);
	};
}