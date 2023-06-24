// Исключения и обработка ошибок 8.1

#include <iostream>
#include <windows.h>
#include <string>

 int function(int length_forbidden, std::string user_length) {

    int user_lengthi;
    int bad_length = 1;

    user_lengthi=user_length.length();

    if (length_forbidden != user_lengthi)
                return user_lengthi;          
            
    throw  bad_length;  
  
  
}

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int length_forbidden;
    std::string user_length;
    int program_cycle = 0;

    
        std::cout << "Введите запретную длину: ";
        std::cin >> length_forbidden;

        do {
        std::cout << "Введите слово: ";
        std::cin >> user_length;

        try
        {
            function(length_forbidden, user_length);
        }

        catch (const int ex)
        {
            std::cout << "Вы ввели слово запретной длины! До свидания " << std::endl;

            return 0;
        }

        std::cout << "Длина слова " << "\"" << user_length << "\"" << " равна "
            << function(length_forbidden, user_length) << std::endl;
    }
    while (program_cycle != 1);    
}
