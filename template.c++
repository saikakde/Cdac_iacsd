// // #include <iostream>
// // using namespace std;
 
// // // One function works for all data types.  This would work
// // // even for user defined types if operator '>' is overloaded
// // template <typename T> T myMax(T x, T y)
// // {
// //     return (x > y) ? x : y;
// // }
 
// // int main()
// // {
// //     // Call myMax for int
// //     cout << myMax<int>(3, 7) << endl;
// //     // call myMax for double
// //     cout << myMax<double>(3.0, 7.0) << endl;
// //     // call myMax for char
// //     cout << myMax<char>('g', 'e') << endl;
 
// //     return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std;

// // template <typename C> 
// // void printInfo(const C& value)
// // {
// //     if constexpr(is_integral_v<C>)
// //     {
// //         cout<<"is Integer"<<endl;
// //     }
// //     else
// //     {
// //         cout<<"is not integer"<<endl;
// //     }
// // }
// // int main()
// // {
// //     printInfo(10);
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// template <typename... Args>auto sum(Args... args) {
//     return (... + args); // Left fold: Adds all arguments together.
// }
// int main(){

// int result = sum(1, 2, 3, 4, 5); // Result is 15
// cout<<result;
// float result = sum<float>(1, 2, 3, 4, 5); // Result is 15
// cout<<fixed<<result;

// }

#include<bits/stdc++.h>
using namespace std;
// template <typename T> void swapNum(T &x,T &y){
//     T temp = x;
//     x= y;
//     y = temp;
// }
// int main(){
//     int x,y;
//     x= 7;
//     y=10;
//     swapNum(x,y);
//     x=5.5;
//     y=6.43;
//     cout<<x<<" and "<<y;
// }

// template <typename T> T sum(T x,T y){
//     return x+y;
// }

// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<sum(x,y);

//     float x1,y1;
//     cin>>x1>>y1; 
//     cout<<sum<float>(x1,y1);

// }

template<typename T> class Array{
    private:
    T *ptr;
    int size;

    public:
    Array(T arr[],int s){
       size = s;
        ptr = new T[size];
        for(int i=0;i<size;i++){
            ptr[i]= i*size;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<ptr[i]<<" ";
        }
    }
};
int main(){
    int size;
    cin>>size;
    int arr[size];

    Array<int> a(arr,size);
    a.print();
}