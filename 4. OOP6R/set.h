/*

Класс - множество Set. Дополнительно перегрузить следующие операции: 
>  проверка на принадлежность (типа операции in множественного типа);	?????
* - пересечение множеств; 
< - проверка на подмножество;
int() - мощность множества;												?????
[] - доступ к элементу в заданной позиции.

*/

class set
{
public:
	set();
	set(int size);
	set(int size, int first, ...);

	bool		operator> (int var);							// проверка на наличие элемента var в множестве
	bool		operator< (set& second);						// проверка на подмножество
	friend set*	operator* (set& first, set& second);			// пересечение множеств
	int&		operator[] (int i);								// возвращает элемент i из множества
	
	void		addElement(int count);							// добавление элемента в множество
	bool		isSimilar(int count);							// проверка на наличие элемента в множестве
	int			powerSet();										// мощность множества

private:
	int*	arr_;
	int		size_;
};