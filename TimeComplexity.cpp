#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int * bubbleSort(int *p, int n){


}

void printList(int *p, int n){

}



int main(){

    int n=100000;


 int *A = new int[n];
// generate random int

printList(A,n);

auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    int *m = bubbleSort(A,n);
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;


return 0;
}
