/*	����� - ��������� Set. ������������� ����������� ��������� ��������: 
	>  �������� �� �������������� (���� �������� in �������������� ����);
	* - ����������� ��������; 
	< - �������� �� ������������;
	int() - �������� ���������;
	[] - ������ � �������� � �������� �������.	*/

template <typename T>
class set
{
public:
	set(){
		this->size_ = NULL;
	}

	set(int size){
		this->arr_ = new T[size];
	}

	set(int size, T first, ...){
		this->arr_ = new T[size];
		this->size_ = size;

		for (int i = 0; i < size; i++)
			this->arr_[i] = *(&first + i);
	}

	bool operator< (set<T>& second){
		int counter = 0;

		if (this->powerSet() == NULL || second.powerSet() == NULL)   return false;

		else for (int i = 0; i < this->powerSet(); i++)
				for (int j = 0; j < second.powerSet(); j++)
					if (this->arr_[i] == second.arr_[j])   counter++;

		return second.powerSet() == counter ? true : false;
	};

	bool operator>(T var){
		for (int i = 0; i < this->powerSet(); i++)
			if (this->arr_[i] == var)   return true;

		return false;
	};

	T& operator[](int i){
		return this->arr_[i];
	};

	friend set<T>* operator* (set<T>& first, set<T>& second){
		int arrSize = first.powerSet() > second.powerSet() ? first.powerSet() : second.powerSet();
		set* rc = new set(arrSize);

		for (int i = 0; i < first.powerSet(); i++)
			for (int j = 0; j < second.powerSet(); j++)
				if (first.arr_[i] == second.arr_[j])   rc->addElement(first.arr_[i]);

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

	~set(){
		delete[] this->arr_;
		this->size_ = NULL;
	};

private:
	T*	arr_;
	int	size_;
};



template <class T>
class quadTemplate{

public:
	T* getElem(int i){
		return (arr + i);
	};

	quadTemplate() { }									// ����������� �� ���������

	quadTemplate(int count, T firstQuad, ...){			// ����������� ��� ���������� �������
		this->sizeOfArray = count;
		this->arr = new T[this->sizeOfArray];

		T* temp = &firstQuad;

		for (int i = 0; i != this->sizeOfArray; i++)
			this->arr[i] = *(temp + i);
	}

	quadTemplate(const T& copy){						// ����������� �����������
		this->typeOfQuad = copy.typeOfQuad;
		this->firstSize = copy.firstSize;
		this->secondSize = copy.secondSize;
	}

	double areaOfQuadrangle(T quad){					// ������� ������
		if (quad.getType() == quadrilateral::RHOMBUS)
			return ((quad.getFirstSize()*quad.getSecondSize()) / 2);

		return (quad.getFirstSize())*(quad.getSecondSize());
	};

	double perimeterOfQuadrangle(T quad){				// �������� ������
		if (quad.getType() == quadrilateral::RHOMBUS)
		{
			return 4 * (sqrt((quad.getFirstSize() / 2)*(quad.getFirstSize() / 2)
				+ (quad.getSecondSize() / 2)*(quad.getSecondSize() / 2)));
		};
		return 2 * (quad.getFirstSize() + quad.getSecondSize());
	};

	void showMaxVal(){									// ����� � ����� ������������ �����
		quadTemplate maxQuad(	// ����� ����������� ���������
			3,
			T(T::RECTANGLE, 0, 0),
			T(T::FOURSQUARE, 0, 0),
			T(T::RHOMBUS, 0, 0)
			);

		T* temp = &maxQuad.arr[0];

		for (int i = 0; this->arr[i].getType() >= T::RECTANGLE
			&& this->arr[i].getType() <= T::RHOMBUS; i++)
		{
			if (this->arr[i].getType() == T::RECTANGLE)
			{
				if (maxQuad.areaOfQuadrangle(temp[0]) < this->areaOfQuadrangle(arr[i]))
					temp[0] = this->arr[i];
			}
			else if (this->arr[i].getType() == T::FOURSQUARE)
			{
				if (maxQuad.areaOfQuadrangle(temp[1]) < this->areaOfQuadrangle(arr[i])) temp[1] = this->arr[i];
			}
			else if (this->arr[i].getType() == T::RHOMBUS)
			{
				if (maxQuad.areaOfQuadrangle(temp[2]) < this->areaOfQuadrangle(arr[i])) temp[2] = this->arr[i];
			};
		};

		std::cout << "Max rectangle has an area " << maxQuad.areaOfQuadrangle(temp[0]) << std::endl;
		std::cout << "Max foursquare has an area " << maxQuad.areaOfQuadrangle(temp[1]) << std::endl;
		std::cout << "Max rhombus has an area " << maxQuad.areaOfQuadrangle(temp[2]) << std::endl << std::endl;
	};

	~quadTemplate(){									// ����������
	}

private:
	T* arr;				// ������ �������
	int sizeOfArray;	// ���������� ��������� � �������
};