#include "stdafx.h"
#include "mcUser.h"

namespace MC_USER{
	Map::Map(){}

	Map::Map(int size, std::pair<long, set<long>*> setVar, ...){
		for (int i = 0; i < size; i++){
			this->container_.insert(*(&setVar + i));
		};
	}

	void Map::erase(long key){
		container_.erase(key);
	};

	void Map::eraseFrom(long startKey, int count){
		int i;
		std::map<long, set<long>*>::iterator it = this->container_.find(startKey);
		it++; // Т.к. после заданного
		std::map<long, set<long>*>::iterator endIt = it;

		if (count > NULL && it != this->container_.end()){
			for (i = 0; i < count && endIt != this->container_.end(); i++){
				endIt++;
			};
			if (i != count){
				endIt = this->container_.end();
			};
			this->container_.erase(it, endIt);
		};
	};

	set<long>& Map::getSet(long key){
		return *this->container_[key];
	};

	void Map::operator<< (long key){
		std::map<long, set<long>*>::iterator it = container_.begin();
		if ((it = this->container_.find(key)) != this->container_.end()){
			for (int i = 0; i < it->second->getSize(); i++){
				std::cout << it->second->getElem(i) << ' ';
			};
			std::cout << std::endl;
		};
	};

	void Map::operator>> (std::pair<long, set<long>*> addVar){
		this->container_.insert(addVar);
	};
};