#include<iostream>

using namespace std;

int cycle[20];
int currCount=0;
bool AddToCycle(int cycle[], int num);
bool CycleContains(int cycle[], int numElems, int value);
void Selectionsort(int cycle[],int size);

bool AddToCycle(int cycle[], int num)
{
    if (CycleContains(cycle,20,num))
    {
        cycle[currCount]=num;
        currCount++;
    }




}






bool CycleContains(int cycle[], int numElems, int value)
{
int index = 0;

bool found = false;
while (index < numElems && !found)
{
if (cycle[index] == value)
{
found = true;
}
index++;
}
return found;
}



void Selectionsort(int cycle[],int size)
{
    for(int i=0; i< size -1; i++ )
    {
        int min= i;
        for(int j=i+1;j<size;j++)
            {
            if (cycle[j]<cycle[min])
                min =j;
            }
            if (min!=i)
                {
                int temp =cycle[min];
                cycle[min]=cycle[i];
                cycle[i]=temp;
                }
    }

}

bool IsPrime(int num)
{
    for(int x=2; x< num/2;num++)
    (
     if(num%2==0)
    {
        return false;
    }

        return true;
    }

}


int main()
{





}
