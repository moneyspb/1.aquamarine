МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ  
Федеральное государственное автономное образовательное учреждение высшего образования  
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  
Кафедра компьютерной инженерии и моделирования
<br/><br/>

### Отчёт по лабораторной работе № 7<br/> по дисциплине "Программирование"
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
*Закрепить навыки разработки программ использующих операторы цикла;
*Закрепить навыки разработки программ использующих массивы;
*Освоить методы подключения библиотек.

**Ход работы**
1) Исходное изображение
![screenshot_1](https://neroid.ru/wp-content/uploads/2020/02/pic2.bmp)

2) Ключ => 00r 00g 00b 10r 10g 10b 01r 01g

3) Код программы 
#include <iostream>
#include "include/libbmp.h"
#include <stdio.h>
#include <fstream>
#include <bitset>
using namespace std;

bool check_bitset(bitset<8>& bits, int& p, char& c)
{
	p--;

	if (p < 0)
	{
		p = 7;
		c = (char)bits.to_ulong();
		bits.reset();
		return true;
	}
	return false;
    }
    string decode_text(string filename)
    {
	BmpImg img;

	img.read(filename);

	const int width = img.get_width();
	const int height = img.get_height();

	bitset<8> bits;
	int p = 7;
	string decode_text = "";
	char c;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			int red = img.red_at(j, i);
			int green = img.green_at(j, i);
			int blue = img.blue_at(j, i);

			if (red % 2 == 1)
				bits.set(p);
		    	if (check_bitset(bits, p, c))
			{
				decode_text += c;
			    	if (c == '\0')
					return decode_text;
			}

			if (green % 2 == 1)
				bits.set(p);
			    if (check_bitset(bits, p, c))
			{
				decode_text += c;
				    if (c == '\0')
					return decode_text;
			}

			if (blue % 2 == 1)
				bits.set(p);
			    if (check_bitset(bits, p, c))
			{
				decode_text += c;
			    	if (c == '\0')
					return decode_text;
			}
		}
	}
	return "";
    }

    int main()
    {
	string res = decode_text("pic2.bmp");
	cout << res << endl;

	ofstream file("decode.txt");
	file << res;
	file.close();
    }

4) Декодированное сообщение.
John Adams (October 30, 1735[a] – July 4, 1826) was an American statesman, attorney, diplomat, writer, and Founding Father who served as the second president of the United States, from 1797 to 1801. Before his presidency, he was a leader of the American Revolution that achieved independence from Great Britain and served as the first vice president of the United States. Adams was a dedicated diarist and regularly corresponded with many important figures in early American history, including his wife and adviser, Abigail. His letters and other papers serve as an important source of historical information about the era. 
A lawyer and political activist prior to the revolution, Adams was devoted to the right to counsel and presumption of innocence. He defied anti-British sentiment and successfully defended British soldiers against murder charges arising from the Boston Massacre. Adams was a Massachusetts delegate to the Continental Congress and became a principal leader of the Revolution. He assisted in drafting the Declaration of Independence in 1776 and was its foremost advocate in Congress. As a diplomat in Europe, he helped negotiate the peace treaty with Great Britain and secured vital governmental loans. Adams was the primary author of the Massachusetts Constitution in 1780, which influenced the United States' own constitution, as did his earlier Thoughts on Government. 
Adams was elected to two terms as vice president under President George Washington and was elected as the United States' second president in 1796. He was the first, and only, president elected under the banner of the Federalist Party. During his single term, Adams encountered fierce criticism from the Jeffersonian Republicans and from some in his own Federalist Party, led by his rival Alexander Hamilton. Adams signed the controversial Alien and Sedition Acts and built up the Army and Navy in the undeclared "Quasi-War" with France. The main accomplishment of his presidency was a peaceful resolution of this conflict in the face of public anger and Hamilton's opposition. During his term, he became the first president to reside in the executive mansion now known as the White House. 
In his bid for reelection, opposition from Federalists and accusations of despotism from Republicans led to Adams's loss to his former friend Thomas Jefferson, and he retired to Massachusetts. He eventually resumed his friendship with Jefferson by initiating a correspondence that lasted fourteen years. He and his wife generated a family of politicians, diplomats, and historians now referred to as the Adams political family, which includes their son John Quincy Adams, the sixth president of the United States. John Adams died on July 4, 1826 – the fiftieth anniversary of the adoption of the Declaration of Independence – hours after Jefferson's death. Surveys of historians and scholars have favorably ranked his administration.


Вывод:
в ходе лабораторной работы были получены такие навыки, как
-работать с изображениями формата BMP;
-писать сложные функции с использованием статических переменных и перечислений;
-умение создавать многофайловые проекты.




