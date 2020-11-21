#include <iostream>
    #include <string>
    #include <vector>
    using namespace std;

    vector<string> ones {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> teens {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> tens {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    string nameForNumber (long number) {
        //neu number < 10 , doc o hang don vi ones o vi tri thu number
        if (number < 10) {
            return ones[number];
        //neu <20 thi doc o hang chuc teens o vi tri number-10
        } else if (number < 20) {
            return teens [number - 10];
        //neu <100 thi hang chu = number/10 lay o tens, hang don vi % cho 10 thi hang don vi  = 0 ,nguoc lai: hang don vi = number%10
        } else if (number < 100) {
            return tens[number / 10] + ((number % 10 != 0) ? " " + nameForNumber(number % 10) : "");
        //tuong tu
        } else if (number < 1000) {
            return nameForNumber(number / 100) + " hundred" + ((number % 100 != 0) ? " " + nameForNumber(number % 100) : "");
        } else if (number < 1000000) {
            return nameForNumber(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + nameForNumber(number % 1000) : "");
        } else if (number < 1000000000) {
            return nameForNumber(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + nameForNumber(number % 1000000) : "");
        } else if (number < 1000000000000) {
            return nameForNumber(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + nameForNumber(number % 1000000000) : "");
        }
        //vuot qua thi bao loi
        return "error";
    }

    int main()
    {
        long input;
        do
        {
            cout << "Enter n < 1000000000, or negative integer to quit :";    
            cin >> input;
            cout << "\n" << nameForNumber(input) << endl;
            cout << "\n" << endl;
        }while (input > 0);
        return 0;
    }
