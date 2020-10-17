    #include <iostream>
    #include <cstdlib>
    #include <time.h>
    using namespace std;
    int main()
    {
        setlocale(LC_ALL, "Russian");
        int a, b = 0;
        int c = 0;
        int d = 0;
        bool running = true;
        cout << "Случайное число было успешно загадано. У вас есть пять попыток чтобы угадать данное число." << endl;
        srand(time(0));
        b = rand() % 100 + 1;
        while (running == true)
        {            
            cin >> a;
            if (a < b) 
            {
                cout << "Загаданное число больше." << endl;         
                c++;
            }
            else if (a > b) 
            {
                cout << "Загаданное число меньше." << endl;
                c++;
            }
            else if (a == b)
            {
                cout << "Поздравляю, вы угадали!" << endl << "Хотите начать сначала? (1 - ДА)" << endl;
                cin >> d;
                c = 0;
                srand(time(0));
                b = rand() % 100 + 1;
            }
            if (c == 5)
            {
                cout << "Вы проиграли. Было загадано: " << b << endl << "Хотите начать сначала? (1 - ДА)" << endl;
                srand(time(0));
                b = rand() % 100 + 1;
                c = 0;
                cin >> d;
                if (d != 1)
                {
                    running = false;
                }
            }
        }
    }
