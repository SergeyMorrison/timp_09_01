#include <iostream>
#include <string>

int main ()
{
std::string @name;
std::cout << "Name: ";//комментарий для пользователя
std::cin >> @name;//ввод
std::cout << endl;
std::cout << "Hello world from " << @name << std::endl;//вывод
return 0;
}
