#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>


//Задача 1. Площадь трапеции.
double trapezoidArea(double b1, double b2, double h)
{
    return h * (b1 + b2) / 2;
}
//Задача 2. Круг.
double circumference(double r)
{
    return 2*M_PI*r; // число пи взято из библиотеки <cmath>
}
double circleArea(double r)
{
    return M_PI*r*r;
}
//Задача 3. Площадь треугольника
double triangleArea(double a, double b)
{
    return a*b/2;
}
double triangleHypotenuse(double a, double b)
{
    return sqrt(a*a+b*b);
}
//Задача 4. Сумма цифр числа
int sumNumbers(int number)
{
    int sum = 0;
    while (number !=0) // сумма накапливает цифры числа, пока они не закончатся
    {
        sum = sum + number % 10;
        number = number / 10;
    }
    return sum;
}
//Задача 5. Переход от декартовой системы координат к полярной.
double phiCoordinate(double x,double y)
{
    return atan(y/x);
}
double rhoCoordinate(double x,double y)
{
    return sqrt(x*x+y*y);
}
//Задача 6. Переход от полярной системы координат к декартовой.
double xCoordinate(double rho,double phi)
{
    return rho * cos(phi);
}
double yCoordinate(double rho,double phi)
{
    return rho * sin(phi);
}
//Задача 7. Найти корни квадратного уравнения.
double x1Calculation(double a,double b,double d)
{
    return (((-b) + sqrt(d))/2*a);
}
double x2Calculation(double a,double b,double d)
{
    return (((-b) - sqrt(d))/2*a);
}
//Задача 8. Найти медианы треугольника, сторонами которогоявляютя медианы исходного треугольника.
double medianA(double a,double b,double c)
{  // медиана, опирающаяся на сторону а
    return (sqrt(2*b*b + 2*c*c - a*a))/2;
}
double medianB(double a,double b,double c)
{  // медиана, опирающаяся на сторону b
    return (sqrt(2*a*a + 2*c*c - b*b))/2;
}
double medianC(double a,double b,double c)
{  // медиана, опирающаяся на сторону c
    return (sqrt(2*a*a + 2*b*b - c*c))/2;
}
//Задача 9. Часы и минуты из секунд
void time(int seconds)   // void,тк функция ничего не возвращает, только выводит текст
{
    int hours = seconds / 3600;
    int minutes = seconds/60 - 60*hours;
    std::cout << " It's " << hours << " h. " << minutes << " min.\n";
}
//Задача 10. Равнобедренный треугольник
bool isosceles(double a,double b,double c) // тип bool, тк возвращается логическое значение
{
    if (a==b || a==c || b==c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Задача 11. Стоимость покупки со скидкой.
double discountCost(double cost)
{
    return (cost - cost*0.1);
}
//Задача 12. Рекомендации к весу.
double weightDifference(double height, double weight)
{
    double perfectWeight = height - 100;
    return (weight - perfectWeight);
}
//Задача 13. Произведение случайных чисел.
int randomNumber()
{
    std::srand(std::time(nullptr)); // установка генератора, в качестве базы - текущее время, функция time() взята из <ctime>
    int random_variable;
    random_variable = 1 + std::rand()%(9-1+1);  // генерируется случайное число от 1 до 9 по формуле min+rand()%(max-min+1)
    return random_variable;                     // функция rand() взята из <cstdlib>
}
//Задача 14. Стоимость переговоров
double costOfCall(int duration, int day, double costCall)
{
    if (day == 6 || day == 7)
    {
        return (costCall*duration - costCall*duration*0.2);
    }
    else
    {
        return costCall*duration;
    }
}
//Задача 15. Месяц и время года.
void monthName(int month)
{
    if (month == 1)
    {
        std::cout << " The name of the month is January.";
    }
    else if (month == 2)
    {
        std::cout << " The name of the month is February.";
    }
    else if (month == 3)
    {
        std::cout << " The name of the month is March.";
    }
    else if (month == 4)
    {
        std::cout << " The name of the month is April.";
    }
    else if (month == 5)
    {
        std::cout << " The name of the month is May.";
    }
    else if (month == 6)
    {
        std::cout << " The name of the month is June.";
    }
    else if (month == 7)
    {
        std::cout << " The name of the month is July.";
    }
    else if (month == 8)
    {
        std::cout << " The name of the month is August.";
    }
    else if (month == 9)
    {
        std::cout << " The name of the month is September.";
    }
    else if (month == 10)
    {
        std::cout << " The name of the month is October.";
    }
    else if (month == 11)
    {
        std::cout << " The name of the month is November.";
    }
    else
    {
        std::cout << " The name of the month is December.";
    }
}
void season(int month)
{
    if (month == 12 || month == 1 || month == 2)
    {
        std::cout << " The season is winter.";
    }
    else if (month>=3 && month<=5)
    {
        std::cout << " The season is spring.";
    }
    else if (month>=6 && month<=8)
    {
        std::cout << " The season is summer.";
    }
    else
    {
        std::cout << " The season is autumn.";
    }

}
//Задача 16. Счастливое шестизначное число
void luckyNumber(int number)
{
    int i;
    int sum1=0;
    int sum2=0;
    for (i=1;i<=3;i++) // считается сумма чисел отдельно в первой и во второй тройках
    {
        sum1 = sum1 + (number%10);
        number = number / 10;
    }
    for (i=1;i<=3;i++)
    {
        sum2 = sum2 + (number % 10);
        number = number / 10;
    }
    if (sum1==sum2)
    {
        std::cout << " It's a lucky number. ";
    }
    else
    {
        std::cout << " It's not a lucky number. ";
    }

}
//Задача 17. Копейки
void coinName(int coin) {
    if (coin / 10 == 0)
    {
        if (coin == 1)
        {
            std::cout << " kopeyka "; // используется транслитерация, тк не удалось настроить вывод кириллицы
        }
        else if (coin > 1 && coin % 10 < 5)
        {
            std::cout << " kopeyki ";
        }
        else
        {
            std::cout << " kopeek ";
        }
    }
    else
    {
        if (coin%10 == 1)
        {
            std::cout << " kopeyka ";
        }
        else if (coin%10 > 1 && coin%10 < 5)
        {
            std::cout << " kopeyki ";
        }
        else
        {
            std::cout << " kopeek ";
        }
    }
}
//Задача 18. Палиндром.
void palindrome(int number)
{
    if ((number/1000) == (number%10) && (number/100%10) == (number/10%10)) // сравение чисел под номером 1 и 4, 2 и 3.
    {
        std::cout << " It's a palindrome. ";
    }
    else
    {
        std::cout << " It's not a palindrome. ";
    }
}
//Задача 19. Произведение цифр и кратность 7
void productMoreThanB(int number, double b)
{
    int product = 1;
    while (number !=0)
    {
        product = product * number % 10;
        number = number / 10;
    }
    std::cout << product;
    if (product  > b)
    {
        std::cout << " The product is more than B.";
    }
    else
    {
        std::cout << " The product is no more than B.";
    }
}
void multipleOfSeven(int number)
{
    double sum = 0;
    while (number !=0)
    {
        sum = sum + number % 10;
        number = number / 10;
    }
    if (fmod(sum,7.0)== 0)
    {
        std::cout << " It's a multiple of 7.";
    }
    else
    {
        std::cout << " It's not a multiple of 7.";
    }
}
//Задача 20. Прямоугольники.
void rectangles(int a,int b, int c,int d)
{
    if (a<c && b<d || b<c && a<d) //проверить поместится ли в данном состоянии и в состоянии при повороте на 90 градусов
    {
        std::cout << " You can place one rectangle inside another.";
    }
    else
    {
        std::cout << " You can't place one rectangle inside another.";
    }
}


int main() {
// Задачи выделены в блоки, чтобы переменные уничтожались при выходе из него.
//Задача 1. Площадь трапеции.
    {
        double b1, b2, h; // для переменных выбран тип double, т.к. значения могут быть не целочисленными
        std::cout << "Task 1. Enter the 1st base of the trapesoid: ";
        std::cin >> b1;
        std::cout << " Enter the 2nd base of the trapesoid: ";
        std::cin >> b2;
        std::cout << " Enter the hight of the trapesoid: ";
        std::cin >> h;
        if (b1<=0 || b2<=0 || h<=0)
        {
            std::cout << "Incorrect input \n";
        }
        else
        {
            std::cout << "The area is: " << trapezoidArea(b1,b2,h) << std::endl;
        }
        std::cout << "\n"; // здесь и далее это используется для читаемости при выводе
    }
    //Задача 2. Круг.
    {
        std::cout << "Task 2. Enter the circle radius: ";
        double r = 0; // значения могут быть не целочисленными
        std::cin >> r;
        if (r<=0)
        {
            std::cout << "Incorrect input \n";
        }
        else
        {
            std::cout << " The circumference is: " << circumference(r);
            std::cout << " The circle area is: " << circleArea(r) << std::endl;
        }
        std::cout << "\n";
    }
    //Задача 3. Площадь треугольника
    {
        std::cout << "Task 3. Enter the 1st side of the triangle: ";
        double a, b; // значения могут быть не целочисленными
        std::cin >> a;
        std::cout << " Enter the 2nd side of the triangle: ";
        std::cin >> b;
        if (a<=0 || b<=0)
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            std::cout << " The triangle area is: " << triangleArea(a,b);
            std::cout << " The hypotenuse is: " <<  triangleHypotenuse(a,b) << std::endl;
        }
        std::cout << "\n";
    }
    //Задача 4. Сумма цифр числа
    {
        int number = 0; // значение целочисленное
        std::cout << "Task 4. Enter a four-digit number: ";
        std::cin >> number;
        if (number<1000 & number>9999) //проверка 4-значности числа
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            std::cout << " The sum of the numbers is: " <<  sumNumbers(number) << std::endl;
        }
        std::cout << "\n";
    }
    //Задача 5. Переход от декартовой системы координат к полярной.
    {
        double x, y;
        std::cout << "Task 5. Enter x: ";
        std::cin >> x;
        std::cout << " Enter y: ";
        std::cin >> y;
        std::cout << " rho = " <<  rhoCoordinate(x,y) << ",";
        std::cout << " phi = " << phiCoordinate(x,y) << std::endl;
        std::cout << "\n";
    }
    //Задача 6. Переход от полярной системы координат к декартовой.
    {
        double rho, phi;
        std::cout << "Task 6. Enter rho: ";
        std::cin >> rho;
        std::cout << " Enter phi: ";
        std::cin >> phi;
        std::cout << " x = " <<  xCoordinate(rho,phi) << ",";
        std::cout << " y = " << yCoordinate(rho,phi) << std::endl;
        std::cout << "\n";
    }
    //Задача 7. Найти корни квадратного уравнения.
    {
        double a, b, c, d;
        std::cout << "Task 7. Enter a: ";
        std::cin >> a;
        std::cout << " Enter b: ";
        std::cin >> b;
        std::cout << " Enter c: ";
        std::cin >> c;
        d = b*b - 4*a*c;
        if (d<0)
        {
            std::cout << "This equation doesn't have any roots.\n";
        }
        else
        {
            std::cout << " x1 = " <<  x1Calculation(a,b,d) << ",";
            std::cout << " x2 = " << x2Calculation(a,b,d) << std::endl;
        }
        std::cout << "\n";
    }
    //Задача 8. Найти медианы треугольника, сторонами которогоявляютя медианы исходного треугольника.
    {
        double a, b, c;
        std::cout << "Task 8. Enter 1st side of the triangle: ";
        std::cin >> a;
        std::cout << " Enter 2nd side: ";
        std::cin >> b;
        std::cout << " Enter 3rd side: ";
        std::cin >> c;
        if (a<=0 || b<=0 || c<=0)
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            double medA = medianA(a,b,c);
            double medB = medianB(a,b,c);
            double medC = medianC(a,b,c);
            std::cout << " The 1st median is: " << medianA(medA,medB,medC);
            std::cout << " The 2nd median is: " << medianB(medA,medB,medC);
            std::cout << " The 3rd median is: " << medianC(medA,medB,medC) << std::endl;
        }
        std::cout << "\n";
    }


    //Задача 9. Часы и минуты из секунд
    {
        int k; // в условии требуются целые числа
        std::cout << "Task 9. Enter the seconds: ";
        std::cin >> k;
        if (k<0)
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            time(k);
        }
        std::cout << "\n";
    }
    //Задача 10. Равнобедренный треугольник
    {
        double a, b, c;
        std::cout << "Task 10. Enter 1st side of the triangle: ";
        std::cin >> a;
        std::cout << " Enter 2nd side: ";
        std::cin >> b;
        std::cout << " Enter 3rd side: ";
        std::cin >> c;
        if (a<=0 || b<=0 || c<=0)
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            if (isosceles(a, b, c))
            {
                std::cout << " The triangle is isosceles. " << std::endl;
            }
            else
            {
                std::cout << " The triangle isn't isosceles. " << std::endl;
            }
        }
        std::cout << "\n";
    }


    //Задача 11. Стоимость покупки со скидкой.
    {
        double cost;
        std::cout << "Task 11. Enter the cost: ";
        std::cin >> cost;
        if (cost < 0)
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            if (cost > 1000)
            {
                std::cout << " The final cost is " << discountCost(cost) << std::endl;
            }
            else
            {
                std::cout << " The final cost is " << cost << std::endl;
            }
        }
        std::cout << "\n";
    }
    //Задача 12. Рекомендации к весу.
    {
        double height, weight;
        std::cout << "Task 12. Enter your hight (cm): ";
        std::cin >> height;
        std::cout << " Enter your weight (kg): ";
        std::cin >> weight;
        if (weightDifference(height, weight)==0)
        {
            std::cout << "Your weight is perfect.\n";
        }
        else if (weightDifference(height, weight)>0)
        {
            std::cout << "To reach your perfect weight, you should loose " << weightDifference(height, weight) << " kg.\n ";
            std::cout << "Before applying the recommendation, consult with a specialist.\n";
        }
        else
        {
            std::cout << "To reach your perfect weight, you should gain " << -1*weightDifference(height, weight) << " kg.\n ";
            std::cout << "Before applying the recommendation, consult with a specialist.\n";
        }
        std::cout << "\n";
    }
    //Задача 13. Произведение случайных чисел.
    {
        int a= randomNumber();
        std::cout << "Task 13. A =  " << a << " \n ";
        int b = randomNumber();
        std::cout << "B =  " << b << "  \n ";
        int product;
        std::cout << "What is A * B =   " ;
        std::cin >> product;
        if (product == a*b)
        {
            std::cout << "Your answer is right. \n" ;
        }
        else
        {
            std::cout << "Your answer is wrong. \n" ;
        }
        std::cout << "\n";
    }


    //Задача 14. Стоимость переговоров
    {
        int duration, day;
        double costCall; // Цена может быть не целочисленной
        std::cout << "Task 14. Enter the duration of the call (min) : ";
        std::cin >> duration;
        std::cout << " Enter the day (1-7): ";
        std::cin >> day;
        std::cout << " Enter the cost per minute: ";
        std::cin >> costCall;
        if (day < 1 || day > 7 || costCall < 0 || duration < 0)
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            std::cout << " The cost of the call is  " << costOfCall(duration, day, costCall) << std::endl;
        }
        std::cout << "\n";
    }
    //Задача 15. Месяц и время года.
    {
        int month;
        std::cout << "Task 15. Enter the number of the month: ";
        std::cin >> month;
        if (month<1 || month>12)
        {
            std::cout << "Incorrect input\n";
        }
        else
        {
            monthName(month);
            season(month);
        }
        std::cout << "\n";
    }
    //Задача 16. Счастливое шестизначное число
    {
        int number;
        std::cout << "Task 16. Enter a six-digit number: ";
        std::cin >> number;
        if (number < 100000 || number > 999999) {
            std::cout << "Incorrect input\n";
        } else {
            luckyNumber(number);
        }
        std::cout << "\n";
    }
    //Задача 17. Копейки
    {
        int coin;
        std::cout << "Task 17. Enter the amount of money : ";
        std::cin >> coin;
        if (coin < 1 || coin > 99) {
            std::cout << "Incorrect input\n";
        } else {
            std::cout << "You entered " << coin;
            coinName(coin); // используется транслитерация, тк не удалось настроить вывод кириллицы
        }
        std::cout << "\n";
    }

    //Задача 18. Палиндром.
    {
        int number;
        std::cout << "Task 18. Enter a four-digit number : ";
        std::cin >> number;
        if (number < 1000 || number > 9999) {
            std::cout << "Incorrect input\n";
        } else {
            palindrome(number);
        }
        std::cout << "\n";
    }
    //Задача 19. Произведение цифр и кратность 7
    {
        int number;
        double b = 0; // может быть не целочисленным
        std::cout << "Task 19. Enter a three-digit number : ";
        std::cin >> number;
        std::cout << " Enter B for the comparison : ";
        std::cin >> b;
        if (number < 100 || number > 999) {
            std::cout << "Incorrect input\n";
        } else {
            productMoreThanB(number,b);
            multipleOfSeven(number);
        }
        std::cout << "\n";
    }

    //Задача 20. Прямоугольники.
    {
        int a,b,c,d;
        std::cout << "Task 20. Enter a : ";
        std::cin >> a;
        std::cout << " Enter b: ";
        std::cin >> b;
        std::cout << " Enter c: ";
        std::cin >> c;
        std::cout << " Enter d: ";
        std::cin >> d;
        if (a<0 || b<0 || c<0 || d<0)
        {
            std::cout << " Incorrect input\n";
        }
        else
        {
            rectangles(a,b,c,d);
        }
        std::cout << "\n";
    }

    return 0;
}