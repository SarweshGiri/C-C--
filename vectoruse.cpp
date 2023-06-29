#include<iostream>
#include<vector>
using namespace std;
int main ()
{
        //vector<int> * vp = new vector<int>(); dynamic way to create a vector
        vector<int> v; //static way to create a vector
        
        for(int i = 0; i<=100; i++){
            cout<<" Capacity: "<< v.capacity()<<endl;
            cout<<"Size: " << v.size()<<endl;
            v.push_back(i+1);
            
    
        }

       /*v.push_back(10); //to insert the element 
        v.push_back(20);
        v.push_back(30);
        
        v[1]=100;        //to insert the element at the 1st position

        v.pop_back();   //to remove the element from the back

        for(int i = 0; i <v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
      
        cout<<v[0]<<endl;
        cout<<v[1]<<endl;
        cout<<v[2]<<endl;
        */
}
