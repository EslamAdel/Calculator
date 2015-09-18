#include <iostream>
enum OPERATION { Add = 1 , Subtract , Multiply , Divide , Modulus } ;



 class Calculator {
    public:
     double x,y,result;
     int operation;
     int choice;
    

    /**
     * @brief sum
     * sums two doubles: a,b .
     * @return
     * a+b
     */
     void add( const double a,  const double b) ;

    /**
     * @brief diff
     * subtracts b from a .
     * @return
     * a-b
     */
     void subtract(const double a, const double b);

    /**
     * @brief mult
     * Multiplys two doubles
     * @return
     * product of a & b
     */
     void mult ( const double a , const double b );

    /**
     * @brief div
     * divids a by b
     * @return
     * a/b
     */
     void divide ( const double a , const double b ) ;

    /**
     * @brief mod
     * Gets the remainder of a/b
     * @return
     * a modulus b
     */
     void modulus ( const int a , const int b ) ;


    /**
     * @brief run
     * Starts the calculator interface
     */

     void menu(void) ;

    /**
     * @brief driver
     * Contain the switch cases of operations
     */
     void driver(void);
    /**
     * @brief driver2
     * Ask you if you want to continue or not
     */
     void driver2(void);
};
