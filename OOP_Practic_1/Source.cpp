//Реализуйте класс студент. Необходимо хранить в переменной классаЖ
// ФИО
// дату рождения
// контактный телефон
// город
// страну
// название учебного заведения
// город(УЗ)
// страна(УЗ)
// номер группы
// 
// Реализуйте функции класса для ввода данных, вывода данных реализуйте:
// аксессоры для доступа к отдельным переменным.
//

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

class Student
{
private:
	char m_fio[50];
	char m_birthday[50];
	char m_phonenumber[50];
	char m_citystudent[50];
	char m_countrystudent[50];
	char m_nameuniversity[50];
	char m_cityuniversity[50];
	char m_countryuniversity[50];
	int m_groupnumber;
public:
	void input()
	{
		cout << "Enter FIO: ";
		cin.getline(m_fio, 50);
		//cout << "Enter BIRTHDAY: ";
		//cin.getline(m_birthday, 50);
		
		//cin >> m_groupnumber;
	}

	void print()
	{
		cout <<"FIO: "<< m_fio << endl;
		/*cout << "BIRTHDAY: " << m_birthday << endl;
		cout << "PHONE NUMBER: " << m_phonenumber << endl;
		cout << "CITY OF STUDENT: " << m_citystudent << endl;
		cout << "COUNTRY OF STUDENT: " << m_countrystudent << endl;
		cout << "NAME OF UNIVERSITY: " << m_nameuniversity << endl;
		cout << "CITY OF UNIVERSITY: " << m_cityuniversity << endl;
		cout << "COUNTRY OF UNIVERSITY: " << m_countryuniversity << endl;
		cout << "GROUP NUMBER: " << m_groupnumber << endl;*/
	}

};

int main()
{
	Student onestudent;
	onestudent.input();
	onestudent.print();
	return 0;
}