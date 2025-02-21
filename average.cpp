#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    double sum = 0, result , count ;
    if(argc <= 1){
        cout << "Please input numbers to find average.";
    }else{
        for(int i = 0;i < argc;i++){
            sum += atoi(argv[i]);
            count = i;
        }result = sum/count;
        cout << "---------------------------------\n";
        cout << "Average of " << count << " numbers = " << result << "\n";
        cout << "---------------------------------";
    }
    return 0;
}
