#include <iostream>
using std::cout;
using std::cin;
int main()
{
      /*
        Team Mantis!
        Solving problem 5;
    */
int h, m, H, M;
cin>>h>>m>>H>>M;
int tm = h*60 + m;
int TM = H*60 + M;
int minus = TM - tm;
int Hora = minus/60;
int Minuto = minus%60;
    if (minus == 0)
        {
            cout<<"O JOGO DUROU 0 Hora(s) 0 Minuto(s)";
        }   
    else
        {
            cout<<"O JOGO DUROU "<<Hora<<" Hora(s) "<<Minuto<<" Minuto(s)";
        }
return 0;
}