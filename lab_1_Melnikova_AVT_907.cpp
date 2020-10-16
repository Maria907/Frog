#include <iostream>
#include "lab1_Melnikova.h"
using namespace std;

void Payment::set() {
	*FIO = "Олегченко Олег Олегович";
	dailySalary = 500;
	employmentYear = 2012;
	workedDays = 22;
} // Функция класса Payment отвечающая за задание значий объекту

void Payment::calculationSalary() {
	salary = workedDays * dailySalary;
} // Функция класса Payment отвечающая за расчет зарплаты работника

void Payment::calculationPensionContributions() {
	pensionContributions = salary * 0.01;
} // Функция класса Payment отвечающая за расчет пенсионных вычетов работника

void Payment::calculationIncomeTax() {
	incomeTax = salary * 0.13;
} // Функция класса Payment отвечающая за расчет подоходного налога работника

void Payment::print() {
	cout << "Данные сотрудника '" << *FIO << "'" << endl << "Оклад: " << dailySalary << " р." << endl << "Год постпуления на работу: " << employmentYear << endl << "Кол-во отработанных дней в месяце: " << workedDays << endl << "Зарплата: "<< salary << " р." << endl << "Отчисления в пенсионый фон: " << pensionContributions << " р." << endl << "Подоходный налог: " << incomeTax << " р." << endl;
} // Функция класса Payment отвечающая за вывод объекта в консоль


int main() {
	setlocale(LC_ALL, "Russian");

	Payment oleg; // Создания объекта "oleg"
	oleg.set();
	oleg.calculationSalary();
	oleg.calculationPensionContributions();
	oleg.calculationIncomeTax();
	oleg.print();

	cout << endl;
	cin.get();
	cin.get();
}
