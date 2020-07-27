#include <windows.h>                                                     
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
void mgotoxy(int x, int y)
{
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
int main()
{
    system("mode 29,20");
    system("title Snake");
    system("color 20");
    setlocale(LC_ALL, "Portuguese");
    cout << " 000_______________________ " << endl;
    cout << " ###########################" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " #   <<<-----|-|----->>>   #" << endl;
    cout << " #    <<<----|-|---->>>    #" << endl;
    cout << " #     <<<---|-|--->>>     #" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " # <<<<<<<[INFINITY]>>>>>> #" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " #       apresenta:        #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " ###########################" << endl;
    Sleep(1000);
    system("cls");
    cout << " 000_______________________ " << endl;
    cout << " ###########################" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " #   <<<-----|-|----->>>   #" << endl;
    cout << " #    <<<----|-|---->>>    #" << endl;
    cout << " #     <<<---|-|--->>>     #" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " # <<<<<<<[INFINITY]>>>>>> #" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " #       apresenta:        #" << endl;
    cout << " #  um jogo clássico, que  #" << endl;
    cout << " # agora possui um REMAKE! #" << endl;
    cout << " #         É ELE:          #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " ###########################" << endl;
    Sleep(5000);
title:
    system("cls");
    Sleep(5);
    cout << " 000_______________________ " << endl;
    Sleep(5);
    cout << " ###########################" << endl;
    Sleep(5);
    cout << " # ----------------------- #" << endl;
    Sleep(5);
    cout << " #                         #" << endl;
    Sleep(5);
    cout << " #      +----------+       #" << endl;
    Sleep(5);
    cout << " #      | SNAKE II:|       #" << endl;
    Sleep(5);
    cout << " #      |THE REMAKE|       #" << endl;
    Sleep(5);
    cout << " #      +----------+       #" << endl;
    Sleep(5);
    cout << " # A.K.A: Jogo da Cobrinha #" << endl;
    Sleep(5);
    cout << " # ----------------------- #" << endl;
    Sleep(5);
    cout << " #                         #" << endl;
    Sleep(5);
    cout << " #                         #" << endl;
    Sleep(5);
    cout << " #             ####<-snake #" << endl;
    Sleep(5);
    cout << " #             #           #" << endl;
    Sleep(5);
    cout << " #  ############           #" << endl;
    Sleep(5);
    cout << " # ----------------------- #" << endl;
    Sleep(5);
    cout << " #   > Pressione Enter <   #" << endl;
    Sleep(5);
    cout << " #    Versão: 1.1 BETA     #" << endl;
    Sleep(5);
    cout << " ###########################" << endl;
#pragma warning (disable : 4996)
    getch();
    goto option;
option:
    int op;
    int password = 1;
    int speed;
    int c = 0;
    system("cls");
    cout << " 000_______________________ " << endl;
    cout << " ###########################" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " #      o p t i o n s      #" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " #  Escolha uma opção:     #" << endl;
    cout << " # 0: Sair                 #" << endl;
    cout << " # 1: Continuar            #" << endl;
    cout << " # 2: Novo Jogo            #" << endl;
    cout << " # 3: Ajuda                #" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " #                         #" << endl;
    cout << " #  __0__    __1__   __2__ #" << endl;
    cout << " # |_____|  |_____| |_____|#" << endl;
    cout << " #             #           #" << endl;
    cout << " #  __3__      #           #" << endl;
    cout << " # |_____|     #           #" << endl;
    cout << " # ----------------------- #" << endl;
    cout << " ###########################" << endl;
    cout << " ";
    cin >> op;
    if (op == 0) 
        return 0;
    if (op == 1)
        c = 1;
        system("cls");
        cout << " 000_______________________ " << endl;
        cout << " ###########################" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #     p a s s w o r d     #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #   Digite a sua senha    #" << endl;
        cout << " #         abaixo:         #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #                         #" << endl;
        cout << " #                         #" << endl;
        cout << " #                         #" << endl;
        cout << " #                         #" << endl;
        cout << " #               ####      #" << endl;
        cout << " #               #         #" << endl;
        cout << " #    ############         #" << endl;
        cout << " #                         #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " ###########################" << endl;
        cout << " ";
        cin >> password;
        cout << " ";
        cin >> speed;
        int size[2] = { 1,password };
        goto game;
    if (op == 2)
    set:
        system("cls");
        cout << " 000_______________________ " << endl;
        cout << " ###########################" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #       s p e e d         #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " # Digite a velocidade de  #" << endl;
        cout << " # seu personagem, que é   #" << endl;
        cout << " # medida por milisegundos #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #                         #" << endl;
        cout << " #                         #" << endl;
        cout << " #                         #" << endl;
        cout << " #                         #" << endl;
        cout << " #                         #" << endl;
        cout << " #              ------#### #" << endl;
        cout << " #             ------#     #" << endl;
        cout << " # ------############      #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " ###########################" << endl;
        cout << " ";
        cin >> speed;
        goto game;
    if (op == 3) {
    help:
        system("cls");
        cout << " 000_______________________ " << endl;
        cout << " ###########################" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #       p a g e  1        #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " # Primeiro, você precisa  #" << endl;
        cout << " # ajustar a sua velocida- #" << endl;
        cout << " # de. É usado um sistema  #" << endl;
        cout << " # de milisegundos para    #" << endl;
        cout << " # isso. Ao colocar certa  #" << endl;
        cout << " # quantidade de milise-   #" << endl;
        cout << " # gundos, a cobra se move #" << endl;
        cout << " # um quadrado a cada mi-  #" << endl;
        cout << " # lisegundo que foi ajus- #" << endl;
        cout << " # tado pelo jogador.      #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #                         #" << endl;
        cout << " # próxima página: enter > #" << endl;
        cout << " ###########################" << endl;
        getch();
        system("cls");
        int o = 0;
        cout << " 000_______________________ " << endl;
        cout << " ###########################" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #       p a g e  2        #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " # Os controles são os di- #" << endl;
        cout << " # recionais de seu tecla- #" << endl;
        cout << " # do. Para colher uma ma- #" << endl;
        cout << " # çã, faça a cobra se en- #" << endl;
        cout << " # contrar com ela, assim, #" << endl;
        cout << " # cada maçã irá aumentar  #" << endl;
        cout << " # uma unidade de seu ta-  #" << endl;
        cout << " # manho.                  #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " #         Opções:         #" << endl;
        cout << " # 0: Sair                 #" << endl;
        cout << " # 1: Jogar                #" << endl;
        cout << " # ----------------------- #" << endl;
        cout << " ###########################" << endl;
        cout << " ";
        cin >> o;
        if (o == 0) {
            return 0;
        }
        if (o == 1) {
            goto set;
        }
        else {
            cout << "Comando inválido" << endl;
            getch();
            goto help;
        }
    }
    else {
        cout << "Comando inválido" << endl;
        getch();
        goto option;
    }
game:
    int x, d = 2, cx[300] = { 12,1 }, cy[300] = { 9,7 }, mx, my;
    char tecla = 'a';
    system("cls");
    //Modifiquei as paredes, a cobra e também o sprite da maçã,
    //que é um "ó", pois é parecido com uma maçã e seu cabo
    //Houve um problema com os caracteres ASCII, ao definir a língua
    //como Portuguesa, os quadrados (que eram as paredes e a cobra),
    //foram modificados pelo caractere Û.
    //Então eu usei "#" como substituto.
    cout << " 0" << size[c] << "_______________________" << endl;
    cout << " ###########################" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " #                         #" << endl;
    cout << " ###########################" << endl;
    srand(time(0));
    mx = rand() % 3 + 3;
    my = rand() % 15 + 3;
    while (tecla != 's')
    {
#pragma warning (disable : 4996)
        while (tecla != 's' && !(tecla = kbhit()))
        {
            for (x = size[c]; x > 0; x--)
            {
                cx[x] = cx[x - 1];
                cy[x] = cy[x - 1];
            }
            if (d == 0)cx[0]--;
            if (d == 1)cy[0]--;
            if (d == 2)cx[0]++;
            if (d == 3)cy[0]++;
            mgotoxy(cx[size[c]], cy[size[c]]);
            printf(" ");
            if (mx == cx[0] && my == cy[0]){
                size[c]++;
                mx = rand() % 3 + 3;
                my = rand() % 15 + 3;
            }
            mgotoxy(cx[0], cy[0]);
            printf("%c", 35);
            mgotoxy(mx, my);
            printf("%c", 499);
            Sleep(speed);
            for (x = 1; x < size[c]; x++)
            {
                if (cx[0] == cx[x] && cy[0] == cy[x])tecla = 's';
            }
            if (cy[0] == 0 || cy[0] == 18 || cx[0] == 0 || cx[0] == 29)tecla = 's';
        }
#pragma warning (disable : 4996)
        if (tecla != 's')tecla = getch();
        if (tecla == 'K')d = 0;
        if (tecla == 'H')d = 1;
        if (tecla == 'M')d = 2;
        if (tecla == 'P')d = 3;
        if (tecla == 'p') {
            system("cls");
            cout << " ###########################" << endl;
            cout << " # ----------------------- #" << endl;
            cout << " #        p a u s e        #" << endl;
            cout << " # ----------------------- #" << endl;
            cout << " #                         #" << endl;
            cout << " #                         #" << endl;
            cout << " #                         #" << endl;
            cout << " #                         #" << endl;
            cout << " #          ______         #" << endl;
            cout << " #  Senha: |" << size[c] << "    |   #" << endl;
            cout << " #         |" << speed << "   |    #" << endl;
            cout << " #         --------        #" << endl;
            cout << " # ----------------------- #" << endl;
            cout << " #                      z  #" << endl;
            cout << " #                     z   #" << endl;
            cout << " #                    z    #" << endl;
            cout << " #   #################     #" << endl;
            cout << " # ----------------------- #" << endl;
            cout << " ###########################" << endl;
            getch();
            goto game;
        }
        if (cy[0] == 0 || cy[0] == 18 || cx[0] == 0 || cx[0] == 26)tecla = 's';
    }
gameover:
    int option;
    system("cls");
    cout << " #=======[Game Over!]======#" << endl;
    cout << " #         __________      #" << endl;
    cout << " # Senha: |" << size[c] << "        |     #" << endl;
    cout << " #        |" << speed  << "       |     #" << endl;
    cout << " #        ------------     #" << endl;
    cout << " # Escolha uma opção:      #" << endl;
    cout << " # 0: Sair                 #" << endl;
    cout << " # 1: Continuar            #" << endl;
    cout << " # 2: Novo Jogo            #" << endl;
    cout << " ###########################" << endl;
    cin >> option;
    if (option == 0) {
        return 0;
    }
    if (option == 1) {
        goto game;
    }
    if (option == 2) {
        goto set;
    }
    else {
        cout << "Comando inválido" << endl;
        getch();
        goto gameover;
    }
}
