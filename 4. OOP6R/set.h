/*	Класс - множество Set. Дополнительно перегрузить следующие операции: 
	>  проверка на принадлежность (типа операции in множественного типа);
	* - пересечение множеств; 
	< - проверка на подмножество;
	int() - мощность множества;
	[] - доступ к элементу в заданной позиции.	*/

#pragma  once

#include "exception.h"

template <typename T>
class set{
public:
	set(){
		this->size_ = NULL;
	}

	set(int size){
		if (size <= NULL){
			throw ERROR::ErrorConstructor("set");
		};
		this->arr_ = new T[size];
	}

	set(int size, T first, ...){
		if (size <= NULL){
			throw ERROR::ErrorConstructor("set");
		};
		this->arr_ = new T[size];
		this->size_ = size;

		for (int i = 0; i < size; i++)
			this->arr_[i] = *(&first + i);
	}

	bool operator< (set<T>& second){
		int counter = 0;

		if (this->powerSet() == NULL || second.powerSet() == NULL)
			return false;

		else 
			for (int i = 0; i < this->powerSet(); i++)
				for (int j = 0; j < second.powerSet(); j++)
					if (this->arr_[i] == second.arr_[j])
						counter++;

		return second.powerSet() == counter ? true : false;
	};

	bool operator>(T var){
		for (int i = 0; i < this->powerSet(); i++)
			if (this->arr_[i] == var)
				return true;

		return false;
	};

	T& operator[](int i){
		return this->arr_[i];
	};

	friend set<T>* operator* (set<T>& first, set<T>& second){
		int arrSize = first.powerSet() > second.powerSet() 
			? first.powerSet() : second.powerSet();

		set* rc = new set(arrSize);

		for (int i = 0; i < first.powerSet(); i++)
			for (int j = 0; j < second.powerSet(); j++)
				if (first.arr_[i] == second.arr_[j])
					rc->addElement(first.arr_[i]);

		return rc;
	};

	void addElement(T count){
		if (this->size_ == NULL || !this->isSimilar(count))
			this->arr_[this->size_++] = count;
	};

	bool isSimilar(T count){
		for (int i = 0; i < this->size_; i++)
			if (this->arr_[i] == count)   return true;

		return false;
	};

	int powerSet(){
		return this->size_;
	};

	T getMin(){
		T min = INT_MAX;
		for (int i = 0; i < this->size_; i++){
			if (this->arr_[i] < min){
				min = this->arr_[i];
			};
		};
		return min;
	};

	T getSize(){
		return this->size_;
	};

	T getElem(int i){
		return this->arr_[i];
	};

	~set(){
		if (this->arr_ == nullptr){
			throw ERROR::ErrorDectructor("set");
		};
		delete[] this->arr_;
		this->size_ = NULL;
	};

private:
	T*	arr_;
	int	size_;
};





template <typename T>
class element
{
public:
	enum typeOfQuadrilateral { RECTANGLE, FOTRSQTARE, RHOMBUS };

	element(){
		this->firstSize_ = NULL;
		this->secondSize_ = NULL;
		this->typeOfQuad_ = -1;
	};

	element(short type, T firstSize, T secondSize){
		std::cout << "---Вызов конструктора---" << std::endl;
		std::cout << " Вызвал: " << type << " с параметрами " << firstSize
			<< ", " << secondSize << std::endl;

		if (firstSize < NULL){
			throw ERROR::ErrorSize("firstSize");
		};
		if (secondSize < NULL){
			throw ERROR::ErrorSize("secondSize");
		};
		if ((type == RECTANGLE) && (firstSize == secondSize)){
			throw ERROR::ErrorRectangle();
		};
		if ((type == FOTRSQTARE) && (firstSize != secondSize)){
			throw ERROR::ErrorFoursquare();
		};
		if ((type < RECTANGLE) || (type > RHOMBUS)){
			throw ERROR::ErrorType();
		};

		this->firstSize_ = firstSize;
		this->secondSize_ = secondSize;
		this->typeOfQuad_ = type;
		this->setArea();
		this->setPerimeter();
		std::cout << "---Конец работы конструктора---" << std::endl 
			<< std::endl;
	};

	element(const element& copy){
		this->typeOfQuad_ = copy.typeOfQuad_;
		this->firstSize_ = copy.firstSize_;
		this->secondSize_ = copy.secondSize_;
	};

	short getType(){
		return this->typeOfQuad_;
	};

	T getFirstSize(){
		return this->firstSize_;
	};

	T getSecondSize(){
		return this->secondSize_;
	};

	double getArea(){
		return this->area_;
	};

	double getPerimeter(){
		return this->perimeter_;
	};

	void setType(short type){
		this->typeOfQuad_ = type;
	};

	void setFirstSize(T firstSize){
		this->firstSize_ = firstSize;
	};

	void setSecondSize(T secondSize){
		this->secondSize_ = secondSize;
	};

	void changeArea(T area){
		this->area_ = area;
	};

	void changePerimeter(T perimeter){
		this->perimeter_ = perimeter;
	};
		
	void setArea(){					// площадь фигуры
		if (this->getFirstSize() != NULL
			&& this->getSecondSize() != NULL){
				if (this->getType() == quadrilateral::RHOMBUS){
					this->area_ = (((this->getFirstSize())
						*(this->getSecondSize())) / 2);
				}
				else{
					this->area_ 
						= ((this->getFirstSize())*(this->getSecondSize()));
				};
		}
		else{
			this->area_ = NULL;
		};
	};

	void setPerimeter(){				// периметр фигуры
		if (this->getType() == quadrilateral::RHOMBUS){
			this->perimeter_ = (4 * (sqrt((this->getFirstSize() / 2)
				*(this->getFirstSize() / 2) + (this->getSecondSize() / 2)
				*(this->getSecondSize() / 2))));
		}
		else{
			this->perimeter_ 
				= (2 * (this->getFirstSize() + this->getSecondSize()));
		};
	};

private:
	short typeOfQuad_;		// тип четырёхугольника через
							// enum (0 - прямоугольник)
	T firstSize_;			// ширина четырёхугольника или длина 
							// 1-й диагонали ромба
	T secondSize_;			// высота четырёхугольника или длина
							// 2-й диагонали ромба
	double area_;
	double perimeter_;
};





template <class T>
class quadTemplate{
public:
	quadTemplate(){
		this->sizeOfArray_ = NULL;
	}

	quadTemplate(int size, T firstQuad, ...){
		if (size < NULL){
			throw ERROR::ErrorSize("quadTemplate");
		};
		this->sizeOfArray_ = size;
		this->arr_ = new T[this->sizeOfArray_];

		T* temp = &firstQuad;

		for (int i = 0; i != this->sizeOfArray_; i++)
			this->arr_[i] = *(temp + i);
	}

	quadTemplate(const T& copy){
		this->typeOfQuad _= copy.typeOfQuad_;
		this->firstSize_ = copy.firstSize_;
		this->secondSize_ = copy.secondSize_;
	}

	T* getElem(int i){
		if ((arr_+i) == nullptr){
			throw ERROR::ErrorNoElement();
		};
		return (arr_ + i);
	};

	void showMaxVal(){
		quadTemplate max(3, T(), T(), T());
		T* temp = &max.arr_[0];

		for (int i = 0; this->arr_[i].getType() >= T::RECTANGLE
			&& this->arr_[i].getType() <= T::RHOMBUS; i++){
				if (this->arr_[i].getType() == T::RECTANGLE){
					if (temp[0].getArea() < arr_[i].getArea())
						temp[0] = arr_[i];
				}
				else if (this->arr_[i].getType() == T::FOTRSQTARE){
					if (temp[1].getArea() < arr_[i].getArea())
						temp[1] = this->arr_[i];
				}
				else if (this->arr_[i].getType() == T::RHOMBUS){
					if (temp[2].getArea() < arr_[i].getArea())
						temp[2] = this->arr_[i];
				};
		};

		std::cout << "Max rectangle has an area " << temp[0].getArea()
			<< std::endl << "Max foursquare has an area " << temp[1].getArea()
			<< std::endl << "Max rhombus has an area " << temp[2].getArea()
			<< std::endl << std::endl;
	};

	T* getMinFirstSize(){
		T* temp = new T(T::RHOMBUS, INT_MAX, INT_MAX);
		for (int i = 0; i < this->sizeOfArray_; i++){
			if (this->arr_[i].getFirstSize() < temp->getFirstSize()){
				temp->setFirstSize(this->arr_[i].getFirstSize());
			};
		};
		return temp;
	};

	~quadTemplate(){
		if (this->arr_ == nullptr){
			throw ERROR::ErrorDectructor("quadTemplate");
		};
		delete[] this->arr_;
	}

private:
	T* arr_;			// массив классов
	int sizeOfArray_;	// количество элементов в массиве
};