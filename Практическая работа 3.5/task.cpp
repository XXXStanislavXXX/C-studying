#include <iostream>

int main() {
/*
Задача 1. Симулятор маршрутки
Что нужно сделать
Напишите программу, которая симулирует работу маршрутки. Она умеет объявлять
остановки и узнавать у пользователя, сколько человек вышло и зашло на остановке.
Пассажиры оплачивают проезд при входе. Работать она должна примерно так:

Прибываем на остановку «Улица программистов». В салоне пассажиров: 0

Сколько пассажиров вышло на остановке? 0

Сколько пассажиров зашло на остановке? 3

Отправляемся с остановки «Улица программистов». В салоне пассажиров: 3

-----------Едем---------

Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: 3

…

…


Маршрут состоит из четырёх остановок. Напишите программу так, чтобы в конце она
выводила, сколько денег мы заработали при условии, что билет стоит 20 руб.,
а расходы следующие:

четверть — на зарплату водителю;
пятая часть — на топливо;
пятая часть — на налоги;
пятая часть — на ремонт машины.
Формат вывода (после прибытия на последнюю остановку):

Всего заработали: 100 руб.

Зарплата водителя: 25 руб.

Расходы на топливо: 20 руб.

Налоги: 20 руб.

Расходы на ремонт машины: 20 руб.

Итого доход: 15 руб.
*/

std::string stopNames[4] = {"Programmers street", "Algorhitm street" "Frunze", "Sain"};
int passengersIn = 0;
int passengersOut = 0;
int passengersTotal = 0;
std::cout << "Прибываем на остановку «" << stopNames[0] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "Сколько пассажиров вышло на остановке? ";
std::cin >> passengersOut;
std::cout << "Сколько пассажиров зашло на остановке? ";
std::cin >> passengersIn;
passengersTotal += passengersIn - passengersOut;
std::cout << "Отправляемся с остановки «" << stopNames[0] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "-----------Едем---------" << std::endl;
std::cout << "Прибываем на остановку «" << stopNames[1] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "Сколько пассажиров вышло на остановке? ";
std::cin >> passengersOut;
std::cout << "Сколько пассажиров зашло на остановке? ";
std::cin >> passengersIn;
passengersTotal += passengersIn - passengersOut;
std::cout << "Отправляемся с остановки «" << stopNames[1] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "-----------Едем---------" << std::endl;
std::cout << "Прибываем на остановку «" << stopNames[2] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "Сколько пассажиров вышло на остановке? ";
std::cin >> passengersOut;
std::cout << "Сколько пассажиров зашло на остановке? ";
std::cin >> passengersIn;
passengersTotal += passengersIn - passengersOut;
std::cout << "Отправляемся с остановки «" << stopNames[2] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "-----------Едем---------" << std::endl;
std::cout << "Прибываем на остановку «" << stopNames[3] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "Сколько пассажиров вышло на остановке? ";
std::cin >> passengersOut;
std::cout << "Сколько пассажиров зашло на остановке? ";
std::cin >> passengersIn;
passengersTotal += passengersIn - passengersOut;
std::cout << "Отправляемся с остановки «" << stopNames[3] << "». В салоне пассажиров: " << passengersTotal << std::endl;
std::cout << "Всего заработали: " << passengersTotal * 20 << " руб." << std::endl;
std::cout << "Зарплата водителя: " << (passengersTotal * 20) / 4 << " руб." << std::endl;
std::cout << "Расходы на топливо: " << (passengersTotal * 20) / 5 << " руб." << std::endl;
std::cout << "Налоги: " << (passengersTotal * 20) / 5 << " руб." << std::endl;
std::cout << "Расходы на ремонт машины: " << (passengersTotal * 20) / 5 << " руб." << std::endl;
std::cout << "Итого доход: " << (passengersTotal * 20) - ((passengersTotal * 20) / 4 + (passengersTotal * 20) / 5 + (passengersTotal * 20) / 5 + (passengersTotal * 20) / 5) << " руб." << std::endl;

}