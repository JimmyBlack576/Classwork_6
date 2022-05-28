#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Конвертер валют\n\n";
    cout<<"Выберите операцию: \n";
    cout<<"1.RUB -> USD \n"
        <<"2.RUB -> EUR \n"
        <<"3.USD -> EUR \n"
        <<"4.USD -> RUB \n"
        <<"5.EUR -> USD \n"
        <<"6.EUR -> RUB \n\n"
        <<"Для выхода из программы введите 0. "<<endl;

    double usd=62, eur=65,sum;
    int temp;
    cin >> temp;
    while (temp<0&&temp>6) {
        
        if (temp == 0) cout << "до свидания!"; 
        break;
    }
   
       

     /*while(temp < 0 || temp > 6);{
        cin >> temp;
        if (temp == 0)
            cout << "До свидания!";
            
    } */
    
        cout << "Введите сумму для обмена: \n";
        cin >> sum;
        
        switch (temp) {
        case 1:cout << sum / usd << " USD ";
            break;
        case 2:cout << sum / eur << " EUR ";
            break;
        case 3:cout << sum * usd / eur << " EUR ";
            break;
        case 4:cout << sum * usd << " RUB ";
            break;
        case 5:cout << sum * eur / usd << " USD ";
            break;
        case 6:cout << sum * eur << " RUB ";
            break;
        default:(temp >6); 
            cout << "До свидания!";
            break;

                



        }
    
}

