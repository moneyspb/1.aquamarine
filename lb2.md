МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ  
Федеральное государственное автономное образовательное учреждение высшего образования  
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  
Кафедра компьютерной инженерии и моделирования
<br/><br/>

### Отчёт по лабораторной работе № 2<br/> по дисциплине "Программирование"
<br/>

студента 1 курса группы ИВТ-б-о-192(2)  
Соколова Игоря Андреевича 
направления подготовки 09.03.01 "Информатика и вычислительная техника"  
<br/>

<table>
<tr><td>Научный руководитель<br/> старший преподаватель кафедры<br/> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br/><br/>

Симферополь, 2019

<br/><br/><br/>**Цель:** 
Овладеть практическими навыками разработки и программирования вычислительного процесса циклической структуры;
Сформировать навыков программирования алгоритмов разветвляющейся структуры;
Изучить операторы ветвления. Особенности использования полной и сокращенной формы оператора if и тернарного оператора.


**Ход работы**
 1) Протабулируйте функцию и запишите получившиеся реультаты в отчёт в виде таблицы. При этом ***a*** = 0.7, ***b*** = 1.2, начала и конца интервала ***х<sub>нач</sub>*** = 0.5, ***x<sub>кон</sub>*** = 1.5 и шага ***d<sub>x</sub>*** = 0.05;
 
 ![screenshot_1](https://sun1.43222.userapi.com/exHSXyJpgMPEZzNYF1LlM7s4gDNIO4AOcyxd4A/2iNjLbBires.jpg)
 
 2)  Определите минимальное и максимальное значение функции на указанном интервале и запешите результаты в отчёт;
  Min: 14.1014, Max: 0.5.
 3) График функции 4 с нанесенными точками
 ![screenshot_2](https://sun3.43222.userapi.com/G7fglejg_KBg0OH9O_CDBA_IfJwgQO5UZG4jvw/AKA5eOYyhw0.jpg)
 #### Код программы
```cpp
#include <iostream>
using namespace std;

void tabulate(double a, double b, double x_start, double x_end, double dx)
{
	cout << "x\tz" << endl;
	double max = INT_MIN;
	double min = INT_MAX;
	for (double_t x = x_start; x <= x_end; x = round((x+dx) * 100) / 100)
	{
		double z;
		if (x <= a)
			z = abs(x);
		else if (x > a&& x < b)
			z = abs(x) + cos(x);
		else
			z = tan(x);
		if (z > max)
			max = z;
		if (z < min)
			min = z;
		cout << x << "\t" << z << endl;
	}
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
}
int main()
{
	double a, b, x_start, x_end, dx;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "x start = ";
	cin >> x_start;
	cout << "x end = ";
	cin >> x_end;
	cout << "dx = ";
	cin >> dx;
	tabulate(a, b, x_start, x_end, dx);
}
```
#### Ввывод

в ходе лабораторной работы были получены такие навыки, как
* умение применять оператор ветвления и циклы;
* умение разработки и программирования вычислительного процесса циклической структуры;
* умение программирования алгоритмов разветвляющейся структуры.