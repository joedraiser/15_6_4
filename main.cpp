#include <iostream>
#include <vector>
#include <math.h>

int main()
{
    std::vector<int> array = {-100,-50, -5, 1, 10, 15};
    int temp;

    for(int i=0;i<array.size();i++)
        for(int j=0;j<array.size()-i-1;j++)
        {
            if(abs(array[j])>abs(array[j+1]))
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    for(int i=0;i<array.size();i++)
        std::cout << array[i] << ' ';
}
