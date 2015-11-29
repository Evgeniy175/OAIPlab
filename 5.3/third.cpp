#include "stdafx.h"
#include "third.h"

namespace THIRD{
	UserClass::UserClass(char c){
		this->charVal_ = c;
		this->intVal_ = static_cast<int>(c);
	}

	int UserClass::getInt(){
		return this->intVal_;
	};

	char UserClass::getChar(){
		return this->charVal_;
	};

	Third::Third(int size, UserClass first, ...){
		for (int i = 0; i < size; i++){
			this->container_.insert(std::pair<long, UserClass>((&first + i)->getInt(), *(&first + i)));
		};
	}

	std::map<long, UserClass>::iterator Third::getBegin(){
		return this->container_.begin();
	};

	std::map<long, UserClass>::iterator Third::getEnd(){
		return this->container_.end();
	};

	void Third::copyElements(std::vector<UserClass>& dest, char condition){
		for_each(container_.begin(), container_.end(), 
			[&dest, condition](std::pair<long, UserClass> i){
				if (i.second.getChar() < condition)
					dest.push_back(i.second);
			}
		);
	};

	bool Third::isLess(UserClass first, UserClass second){
		return first.getInt() < second.getInt();
	};
};