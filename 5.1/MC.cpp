#include "stdafx.h"
#include "MC.h"

namespace MC{
	Map::Map(int size, long val, ...){
		for (int i = 0; i < size; i++){
			this->container_[*(&val + i)] = *(&val + i);
		};
	}

	void Map::add(Map& second){
		std::map<long, long>::iterator itStart = second.container_.begin();
		std::map<long, long>::iterator itEnd = second.container_.end();
		this->container_.insert(itStart, itEnd);
	};

	void Map::show(){
		for (auto& p : this->container_){
			std::cout << p.second << ' ';
		};
		std::cout << std::endl;
	};

	void Map::showViaIt(){
		std::map<long, long>::iterator it;
		for (it = container_.begin(); it != container_.end(); it++){
			std::cout << it->second << ' ';
		};
		std::cout << std::endl;
	};

	void Map::erase(long key){
		this->container_.erase(key);
	};

	void Map::eraseFrom(long startKey, int count){
		int i;
		std::map<long, long>::iterator it = this->container_.find(startKey);
		it++; // Т.к. после заданного
		std::map<long, long>::iterator endIt = it;

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

	void Map::change(long key, long newVal){
		std::map<long, long>::iterator it;
		if ((it = this->container_.find(key)) != this->container_.end()){
			this->container_.erase(key);
			this->container_.insert(std::pair<long, long>(newVal, newVal));
		};
	};
};