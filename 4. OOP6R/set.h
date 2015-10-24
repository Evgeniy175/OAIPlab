/*

����� - ��������� Set. ������������� ����������� ��������� ��������: 
>  �������� �� �������������� (���� �������� in �������������� ����);	?????
* - ����������� ��������; 
< - �������� �� ������������;
int() - �������� ���������;												?????
[] - ������ � �������� � �������� �������.

*/

class set
{
public:
	set();
	set(int size);
	set(int size, int first, ...);

	bool		operator> (int var);							// �������� �� ������� �������� var � ���������
	bool		operator< (set& second);						// �������� �� ������������
	friend set*	operator* (set& first, set& second);			// ����������� ��������
	int&		operator[] (int i);								// ���������� ������� i �� ���������
	
	void		addElement(int count);							// ���������� �������� � ���������
	bool		isSimilar(int count);							// �������� �� ������� �������� � ���������
	int			powerSet();										// �������� ���������

private:
	int*	arr_;
	int		size_;
};