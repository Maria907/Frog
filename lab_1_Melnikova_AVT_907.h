#pragma once

class Payment {
	std::string* FIO = new std::string;
	int dailySalary; // Переменная содержащая оклад работника
	int employmentYear; // Переменная содержащая год принятия работника 
	int workedDays; // Переменная содержащая отработанные работником дни за месяц 
	float salary; // Переменная содержащая зарплату работника
	float pensionContributions; // Переменная содержащая пенсионный вычет работника
	float incomeTax; // Переменная содержащая подоходный налог работника

public:
	void set(); // Объявление функция класса Payment отвечающей за задание значений объекту
	void calculationSalary(); // Объявление функция класса Payment отвечающей за расчет зарплаты работника
	void calculationPensionContributions(); // Объявление функция класса Payment отвечающей за расчет пенсионных вычетов работника
	void calculationIncomeTax(); // Объявление функция класса Payment отвечающей за расчет подоходного налога работника
	void print(); // Объявление функция класса Payment отвечающей за вывод объекта в консоль

}; // Объявление класса Payment