﻿#include <iostream>
#include <vector>
#include <windows.h>

/*
треугольник перевернутый
  12345
1 *****
2 ****
3 ***
4 **
5 *

треугольник перевернутый прижатый вправо
  12345
1 *****
2  ****
3   ***
4    **
5	  *

шахматная доска - совмещение пустого квадрата 
внутри которого вывести нужно в шахматном порядке звездочки

  123456789
1 *********
2 * * * * *
3 ** * * **
4 * * * * *
5 ** * * **
6 * * * * *
7 ** * * **
8 *********


симметричный треугольник - елочка 
  1234567 
1    *
2   ***
3  *****
4 *******
*/

int main()
{
    int stroka = 4;
    int stolbik = 7;

    /*
     *****
     ****
     ***
     **
     *
    */

    /*for (int i = 0; i <= stroka; i++)
    {
        
        for (int j = stolbik; j > i; j--)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }*/

    /*
    *****
     ****
      ***
       **
    	*
    */

    //for (int i = 0; i <= stroka; i++)
    //{
    //    for (int j = 1; j <= stolbik; j++)
    //    {
    //        if (j > i)
    //        {
    //            std::cout << "*";
    //        }
    //        else
    //        {
    //            std::cout << " ";
    //        }
    //    }
    //    std::cout << "\n";
    //}

    /*
      1234567 
    1    *
    2   ***
    3  *****
    4 *******
    */

    for (int i = 1; i <= stroka; i++)
    {
        for (int j = 1; j <= stolbik; j++)
        {
            if (i == 3 && j == 1 || i == 2 && j <= 2 || i == 1 && j <= 3
             || i == 3 && j == 7 || i == 2 && j >= 6 || i == 1 && j >= 5)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }            
        }
        std::cout << "\n";
    }
	return 0;
}