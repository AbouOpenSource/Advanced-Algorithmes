#include <iostream>
#include <array>





//#define RAND_MAX 99
std::array<int, 20> tab;

std::array<int, 20> insertionSort();
void onStart();
void display();
void onDraw();
void onStartOnce();





int main()
{
onStart();
display(tab);
}

void onStart()
  {
      for (size_t i = 0; i < 20; i++) {
          tab[i]=1+std::rand()%99;
        }

    }



void onStartOnce()
  {
    int i=0;
      do{
              int number=1+std::rand()%99;
              int j;
              if(i=!0)
              {
                      j=0;
                      while(j<i && tab[j]!=number){
                            j++;
                          }
              }
              if (i==0 || j==i)
              {
                      tab[i]=number;
                      i++;
              }
      }
      while(i<20);
    }



void display(std::array<int, 20> arg)
  {
for (size_t i = 0; i < 20; i++) {
  std::cout << "The element at position "<< i << "  "<<arg[i] << '\n';
      }
    }

void onDraw(){

}



std::array<int, 20> insertionSort()
{
    std::array<int, 20> tableau;
      for (size_t i = 0; i < 20; i++) {
         tableau[i] = tab[i];
      }
int key,j;
      for (size_t i = 0; i < 20; i++)
      {
            key=tableau[i];
            j=i-1;
            while (j>0 && tableau[j]>key)
              {
                tableau[j+1]=tableau[j];
                j--;
              }
            tableau[j+1]=key;
        }

        return tableau;

  }
