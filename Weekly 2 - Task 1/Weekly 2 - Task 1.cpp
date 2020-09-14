/*
*Weekly 2 - Task 1.cpp
    
    Task 1
    Write a program that writes numbers from 1 to 100
    1. Use a while-loop
    2. Use a for-loop

    Task 2
    Write a program that writes numbers from 100 down to 1 to screen.
    Use a for-loop

    Task 3
    Make a program that writes 5 to 50 in steps of 5. 
    Use a while loop. (should print 5 10 15 20 25, etc.)

    Task 4
    Make a program that writes 5 to 50 in steps of 5. 
    Use a for loop. (should print 5 10 15 20 25, etc.)

    Task 5
    Make a program that writes 5 to 50 in steps of 5. 
    Use Do ..while.(should print 5 10 15 20 25, etc.)

*/

#include <iostream>

int i = 1;
int l = l+5;

int option = 0;

int main()
{
    std::cout << "\t\t\t\t\t Weekly 2 - Tasks 1-5\n\n";

    std::cout << "Please pick a program you want to execute using numbers 1-7" << std::endl;

    do{
            std::cout <<
                "Choices:\n"
                "\t1. Print 1-100 using a while loop\n"
                "\t2. Print 1-100 using a for loop\n"
                "\t3. Print 100-1 using a for loop\n"
                "\t4. Print 5 to 50 in steps of 5 using a while loop\n"
                "\t5. Print 5 to 50 in steps of 5 using a for loop\n"
                "\t6. Print 5 to 50 in steps of 5 using a do while loop\n"
                "\t7. Exit the program\n"
                "Choose an option using numbers 1-7:  ";
            std::cin >> option;

            switch (option) {
            
            case 1:
                while (i < 101) {
                    std::cout << i << std::endl; i++;
                }
                break;
           
            case 2:
                for (int j = 1; j < 101; j++) {
                    std::cout << j << std::endl;
                }
                break;
            
            case 3:
                for (int k = 100; k >= 1; k--) {
                    std::cout << k << std::endl;
                    }
                break;
                
            case 4:
                while (l < 51) {
                    std::cout << l << std::endl; l += 5;
                }
                break;
            
            case 5:
                for (int m = 5; m < 51; m += 5) {
                    std::cout << m << std::endl;
                }
                break;
           
            case 6:
                int ix = 5;
                do {
                    std::cout << ix << std::endl;
                    ix += 5;
                } while (ix < 51);
                break;
            }
    } while (option < 7 && option > 0);
    
}
    

//Task 1 - 1//
    /* 
    int i = 1;
    while (i < 101) {
        std::cout << i << std::endl; i++;
    }
    */

//Task 1-2//
  /*  for (int j = 1; j < 101; j++) {
        std::cout << j << std::endl;
    }*/
    

//Task 2//
     /*while (k >= 1) {
         std::cout << k << std::endl; k--;
    }
    */

//Task 3//
   /* while (l < 51) {
        std::cout << l << std::endl; l+=5;
    }
   */

//Task 4//
    /*for (int m = 5; m < 51; m+=5){
        std::cout << m << std::endl;
    }*/

//Task 5//
    /*int ix = 5;
    do {
        std::cout << ix << std::endl;
        ix += 5;
    } while (ix < 51);*/


