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
изучить основные возможности создания и отладки программ в IDE Qt Creator.



**Ход работы**

1) Как создать консольное приложение С++ в IDE Qt Creator без использования компонентов Qt?
Заходим в Qt creator нажимаем Файл/Создать проект или решение.
![Screenshot_1](https://sun1.43222.userapi.com/mZ61n8n1b3qKnw4EurNo4H_jZ2qPP5XTIG_lyw/lijexQAUsRA.jpg)
В появившемся окне выбираем "Приложение на языке С++"
Нажимаем "Выбрать"
![Screenshot_2](https://sun1.43222.userapi.com/lmnWiwJoI0Gkps_2FAh6uO-0fXR9bT8sHho_8A/ltANMCyjLtA.jpg)
Затем выбираем имя и жмём продолжить
![Screenshot_3](https://sun3.43222.userapi.com/f3EKBi1xDSV2NN8ZAysooP3MG1_cXjfKY19s4Q/_BCvHttGDNg.jpg)
Выбираем сборку "qmake" и жмем продолжить
![Screenshot_4](https://sun1.43222.userapi.com/cTCHxWmdIy-Qnsn7B1Hj36h52vmUmGWqV_JeXQ/z09vdDm_86Q.jpg)
Выбираем комплект и жмем продолжить  
![screenshot_5](https://sun9-3.userapi.com/LU9RWyb_taAgljNl2KZZ-YV0xbALJqXGX_5BWQ/Od0BdS44y0A.jpg)
Ничего не выбираем жмем "Готово"
![screenshot_6](https://sun1.43222.userapi.com/HOyy2juEp_D_SZTktR3H8718sElndwtwKpI0iw/JutQSoNMT84.jpg)
2) Как изменить цветовую схему (оформление) среды?
Заходим в инструменты => Внешние => Настроить.
![screenshot_7](https://sun1.43222.userapi.com/B_C-CL8ogpvIoYf5lYvY3jZDlxf-RUfzSqMmSA/784rfTsXYOg.jpg)
В появившемся окне, меняем цвет или тему, жмем "ОК"
![screenahot_8](https://sun9-64.userapi.com/hOK0JPGfV6sP1jxjaDQt7t7yk3_Me4cSjwMkSg/qq5V8ZO7WVk.jpg)
3) Как закомментировать/раскомментировать блок кода средствами Qt Creator?
Комбинация клавишь Command + /
4)Как открыть в проводнике Windows папку с проектом средствами Qt Creator?
Нажать по файлу проекта правой кнопкой мыши и выбрать Показать в Finder
![screenshot_9](https://sun3.43222.userapi.com/b5VSEmx6SMKjJkoW5RPWhGrYni8-NEPO2g8Y2w/7ZF34RRy9hQ.jpg)
5)Какое расширение файла-проекта используется Qt Creator?
.PRO
![screenshot_10](https://sun1.43222.userapi.com/Fb6zdbHQ4vupKJBVSKot5PdkL9EBg6qCDIzuvA/Cv1GTVNMHl0.jpg)
6)Как запустить код без отладки?
Комбинация клавиш Command + R
7)Как запустить код в режиме отладки?
Комбинация клавиш Command + Y
8)Как установить/убрать точку останова (breakpoint)?
Слева от цифр строк нажать ЛКМ:
![screenshot_11](https://sun3.43222.userapi.com/wpOqm7lLsagsfiAjEcBHIL-2ZU_dZirTBhMjNA/dGKW0WPWJ3Q.jpg)
9)Создайте программу со следующим кодом:
![screenshot_12](https://sun1.43222.userapi.com/xZT6NQH-riRep6dCbW4Bne-IhDzCOYY1ZJr0wg/4FNDO6mEhPc.jpg)
Переключитесь в конфигурацию сборки «Отладка»;
Установите breakpoint на 5, 6 и 7 строках;
Запустите приложение щелкнув по кнопке с изображением жука .
Используйте эту же кнопку для перехода к следующей точке останова;
Какое значение содержит переменная i в 5й строке?
![screenshot_13](https://sun3.43222.userapi.com/4Jopt2IkyWI0s99YSIdP2J78D8xaZW9zxZU4CQ/Y0tPjZQ3064.jpg)
Какое значение содержит переменная d в 6й строке?
![screenshot_14](https://sun1.43222.userapi.com/9Y8ABMP1qNvnREOmBlPiw9lntJHHVtoq7kAgVQ/eaRCFQaue6Q.jpg)
Какие значение содержатся в переменных i и  d в 7й строке?
![screenshot_15](https://sun2.43222.userapi.com/e2p_1rUKC0XA8Zm3-Rl4k1Yn9z8aE6dX7rMGfw/8HZuFzVm2IM.jpg)
Совпадают ли эти значения с теми, что вы получали в MSVS для соответствующих типов? 
Значения не совпадают с MSVS.
10) Закройте проект и перейдите на вкладку «Начало» => «Примеры»;
11)Выберите проект «Calculator Form Example». Для этого можно воспользоваться строкой поиска;
12)Изучите (по желанию) описание проекта в открывшемся окне;
13)Сейчас вы находитесь на вкладке «Проекты». Выберите комплект сборки.
Перейдите на вкладку «Редактор» и запустите сборку проекта;
В инспекторе проекта выберите файл «main.cpp». В этом файле установите курсор на слово «show» в строке calculator.show(); и нажмите F1. Изучите справочную информацию. Таким же образом можно получить справку по любому объекту/методу/полю доступному в Qt;
![screenshot_16](https://sun2.43222.userapi.com/tCWmV_8_AY_FWRavmEoRXHTgvmJRgbKLiuRAcA/e_-YGB4cams.jpg)
14)В инспекторе проекта выберите файл «Формы» => «calculatorform.ui» и дважды счёлкните ЛКМ;
![screenshot_17](https://sun2.43222.userapi.com/yH66YN4iK5mc8plV7VWVPisygg_9oCIZJu3GeA/p4e6xp5p8qQ.jpg)
15)Вы попали на вкладку «Дизайн». На форме замените английский текст на русский. Пересоберите проект.
![screenshot_18](https://sun2.43222.userapi.com/3y4_Tr-aCtMoL9Q84RzCJAB27ZaA0HHYMHkjHw/x2kpe1nVNkY.jpg)
Вывод: В данной лабораторной работе я познакомился с интерфейсом и основными функциями Qt Creator.


 
