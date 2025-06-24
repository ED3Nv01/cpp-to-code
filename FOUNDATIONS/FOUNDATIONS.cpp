#include <iostream>
#include <sstream>

int addition(int n1, int n2) {
    return n1 + n2;
};
int substraction(int n1, int n2) {
    return n1 - n2;
};
int division(int n1, int n2) {
    return n1 / n2;
};
int multiplication(int n1, int n2) {
    return n1 * n2;
};

int main() {

    int mode = 0;
    int last_operation_result = 0;

    // welcome message
    std::ostringstream mss;
    mss << "Welcome to BTC (Basic Terminal Calculator) Chose an mode user.\n"
    << "1. Addition \n"
    << "2. Substraction \n"
    << "3. Division\n"
    << "4. Multiplication\n"
    << "5. Clear history\n";

    while (true) {
        
        if (mode == 0) {

            system("clear");

            std::cout << mss.str() << std::endl;
            std::cout << "Last operation result: " << last_operation_result << std::endl;

            // mode selection
            std::cin >> mode;

        } else if (mode == 1) {
            
            int n1, n2, result;
            
            // number selection
            
            system("clear");

            if (last_operation_result == 0) {
                std::cout << "Selected mode: Addition. Chose two numbers user. \n> ";
                std::cin >> n1 >> n2;
                // operation
                last_operation_result = addition(n1, n2);
            } else if (last_operation_result != 0) {
                std::cout << "Selected mode: Addition. Chose one number. \n> ";
                std::cin >> n1;
                // operation
                last_operation_result = addition(last_operation_result, n1);
            };

            mode = 0;

        } else if (mode == 2) {

            int n1, n2, result;
            
            system("clear");

            // number selection
            if (last_operation_result == 0) {
                std::cout << "Selected mode: Substraction. Chose two numbers user. \n> ";
                std::cin >> n1 >> n2;
                // operation
                last_operation_result = substraction(n1, n2);
            } else if (last_operation_result != 0) {
                std::cout << "Selected mode: Substraction. Chose one number. \n> ";
                std::cin >> n1;
                // operation
                last_operation_result = substraction(last_operation_result, n1);
            };

            mode = 0;

        } else if (mode == 3) {

            system("clear");

            int n1, n2, result;
            
            if (last_operation_result == 0) {
                std::cout << "Selected mode: Division. Chose two numbers user. \n> ";
                std::cin >> n1 >> n2;
                // operation
                last_operation_result = division(n1, n2);
            } else if (last_operation_result != 0) {
                std::cout << "Selected mode: Division. Chose one number. \n> ";
                std::cin >> n1;
                // operation
                last_operation_result = division(last_operation_result, n1);
            };

            mode = 0;

        } else if (mode == 4) {

            int n1, n2, result;

            system("clear");
            
            if (last_operation_result == 0) {
                std::cout << "Selected mode: Multiplication. Chose two numbers user. \n> ";
                std::cin >> n1 >> n2;
                // operation
                last_operation_result = multiplication(n1, n2);
            } else if (last_operation_result != 0) {
                std::cout << "Selected mode: Multiplication. Chose one number. \n> ";
                std::cin >> n1;
                // operation
                last_operation_result = multiplication(last_operation_result, n1);
            };

            mode = 0;

        } else if (mode == 5) {
            system("clear");
            last_operation_result = 0;
            mode = 0;
        } else {
            system("clear");
            mode = 0;
        };
    };

    return 0;
}