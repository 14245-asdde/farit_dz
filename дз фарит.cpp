/*1 задание*/

#include <iostream> 
#include <windows.h>

/*
int main() 
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, time, speed;

    std::cout << "Введите расстояние до аэропорта (в км): ";
    std::cin >> distance;
    std::cout << "Введите время, за которое нужно доехать (в часах): ";
    std::cin >> time;

    speed = distance / time;

    std::cout << "Чтобы доехать вовремя, нужно ехать со скоростью " << speed << " км/ч";

    return 0;
}
*/


/*2 задание*/

/*
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int h1, m1, s1; 
    int h2, m2, s2; 
    const double PRICE_MINUTE = 2.0;

    std::cout << "Введите время начала поездки (часы минуты секунды): ";
    std::cin >> h1 >> m1 >> s1;

    std::cout << "Введите время завершения поездки (часы минуты секунды): ";
    std::cin >> h2 >> m2 >> s2;

    long start_seconds = h1 * 3600 + m1 * 60 + s1;
    long end_seconds = h2 * 3600 + m2 * 60 + s2;

    long duration_seconds = end_seconds - start_seconds;

    if (duration_seconds < 0) 
    {
        duration_seconds += 24 * 3600;
    }

    double duration_minutes = duration_seconds / 60.0;
    double total_cost = duration_minutes * PRICE_MINUTE;

    std::cout << "\nРезультат расчета:" << "\n";
    std::cout << "Длительность поездки: " << duration_minutes << " мин." << "\n";
    std::cout << "Стоимость: " << total_cost << " грн." << "\n";

    return 0;
}
*\

/*3 задание*/

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distan;
    double rashod;
    double price1;
    double price2;
    double price3;

    std::cout << "Введите расстояние поездки (км): ";
    std::cin >> distan;

    std::cout << "Введите расход на 100 км: ";
    std::cin >> rashod;

    std::cout << "Введите цену 1-го вида бензина: ";
    std::cin >> price1;
    std::cout << "Введите цену 2-го вида бензина: ";
    std::cin >> price2;
    std::cout << "Введите цену 3-го вида бензина: ";
    std::cin >> price3;

    double totalLiters = (distan / 100.0) * rashod;
    double chena1 = totalLiters * price1;
    double chena2 = totalLiters * price2;
    double chena3 = totalLiters * price3;

    std::cout << "\nСРАВНИТЕЛЬНАЯ ТАБЛИЦА:\n";
    std::cout << "-------------------------------------\n";
    std::cout << "Вид бензина\t|\tСтоимость поездки\n";
    std::cout << "-------------------------------------\n";

    std::cout << "Бензин №1\t|\t" << chena1 << " руб." << "\n";
    std::cout << "Бензин №2\t|\t" << chena2 << " руб." << "\n";
    std::cout << "Бензин №3\t|\t" << chena3 << " руб." << "\n";
    std::cout << "-------------------------------------\n";

    return 0;
}


