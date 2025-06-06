#include <iostream>
#include <vector>
#include <windows.h>

/*

i
1    *
2   **
3  ***
4 ****

  123456
1 ******
2 *    *
3 *    *
4 ******

  1234567
1 * * * *
2  * * *
3 * * * *

*/

/*Продумать, и упростить*/
int main() 
{
    int stroki = 5;
    int stolbic = 5;

	//for (int i = 1; i <= stroki; i++)
	//{
 //       if (i % 2 == 1)
 //       {
 //           for (int j = 1; j <= stolbic; ++j)
 //           {

 //               if (j % 2 == 0)
 //               {
 //                   std::cout << " ";
 //               }
 //               else
 //               {
 //                   std::cout << "*";
 //               }
 //           }
 //       }
 //       else
 //       {
 //           for (int j = 1; j <= stolbic; ++j)
 //           {
 //               if (j % 2 == 1)
 //               {
 //                   std::cout << " ";
 //               }
 //               else
 //               {
 //                   std::cout << "*";
 //               }

 //           }
 //       }
	//	std::cout << "\n";
	//}



    
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= stolbic; j++)
		{
            if (j == 1 || j == stolbic || i == 1 || i == stroki)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
		}
		std::cout << "\n";
	}
    

    //for (int i = 1; i <= stroki; ++i) {
    //    for (int n = 0; n < stolbic; ++n) {
    //        std::cout << "*";
    //    }
    //    std::cout << "\n";
    //}
    

    return 0;
}