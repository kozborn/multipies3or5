#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
//    vector<int> numbers;
    int count = 10;
    int sum = 0;
    if(argc > 1){
        count = atoi(argv[1]);
    }
    cout << "Print sum of numbers that can be divided by 3 or 5 range to: " << count << "!" << endl;
    for(int i = 1; i < count; ++i){
        if((i%3) == 0 || (i%5)==0){
            sum += i;
//            numbers.push_back(i);
        }
    }

    cout << "Sum of numbers from 1 to " << count << " that can be divided by 3 or 5 equals: " << sum << endl;
//    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
//        cout << *it << endl;
//    }
    return 0;
}

