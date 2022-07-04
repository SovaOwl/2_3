#include <iostream>
#include <string>

using namespace std;

struct address
{
	string city;
	string street;
	int house_number = -999;
	int apartment_number = -999;
	int index = -999;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	address a, b, c;
	{
		a.city = "Москва";
		a.street = "Арбат";
		a.house_number = 12;
		a.apartment_number = 8;
		a.index = 123456;
	}
	{
		b.city = "Ижевск";
		b.street = "Пушкина";
		b.house_number = 59;
		b.apartment_number = 143;
		b.index = 953769;
	}
	{
		c.city = "Париж";
		c.street = "Пионерская";
		c.house_number = 3;
		c.apartment_number = 5;
		c.index = 457654;
	}

	cout << "Город: " << a.city << endl << "Улица: " << a.street << endl << "Номер дома: " << a.house_number << endl << "Номер квартиры: " << a.apartment_number << endl << "Индекс: " << a.index << endl << endl;
	cout << "Город: " << b.city << endl << "Улица: " << b.street << endl << "Номер дома: " << b.house_number << endl << "Номер квартиры: " << b.apartment_number << endl << "Индекс: " << b.index << endl << endl;
	cout << "Город: " << c.city << endl << "Улица: " << c.street << endl << "Номер дома: " << c.house_number << endl << "Номер квартиры: " << c.apartment_number << endl << "Индекс: " << c.index << endl << endl;
}