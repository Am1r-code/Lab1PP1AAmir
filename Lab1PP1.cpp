// Task 1
#include <iostream>
using namespace std;
int main() {
    int John;
    cout << "Hello, John!";
    return 0;
}

Task 2 
#include <iostream>
using namespace std;
int main() {
    int x = 12;
    int y = 30;
    int sum = x + y;
    cout << "The sum is " << sum << endl;
    return 0;
}




// Task 3
#include <iostream>
#include <cmath>
 using namespace std;
 int main() {
    double x = 2.5;
    double pi = 3.14;
    double area = pi * x * x;
    cout << "The area is " << area << endl; 
    return 0; 
}







// Task 4
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int years = 20;
    int months = 12;
    int age = years * months;
    cout << "You are " << age << " months old" << endl;
    return 0;
}

// Task 5
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int C = 25;
    double F = (C * 9/5) + 32;
    cout << fixed << setprecision(1) << "Temperature in Farenheit: " << F << endl;
    return 0;
}

// Task 6
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int x = 7;
    int square = x * x;
    cout << "The square is " << square << endl;
    return 0;
}












// Task 7
#include <iostream>
#include <cmath>
 using namespace std;
 int main() {
    int P = 1000;
    int R = 5;
    int T = 2;
    int SI = (P * R * T) / 100;
    cout << "Simple Interest is " << SI << endl;
    return 0;
 }





// Task 8
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int weight = 70;
    double height = 1.75;
    double BMI = weight / (height * height);
    cout << fixed << setprecision(2) << "Your BMI is " << BMI << endl;
    return 0;
}










// Task 9 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int x = 10;
    int y = 20;
    int z = 30;
    int average = (x + y + z) / 3;
    cout << "The average is " << average << endl;
    return 0;
}










// Task 10
#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    return 0;
}
