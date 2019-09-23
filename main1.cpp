#include <iostream>
#include <array>
#define nx 16
#define ny 14

const std::array <uint8_t ,224 > tabLin= {
        255 ,255 ,255 ,244 ,184 ,156 ,107 ,107 ,107 ,107 ,107 ,170 ,197 ,255 ,255 ,255 ,
        255 ,255 ,221 , 38 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 88 ,244 ,255 ,
        255 ,233 , 38 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,125 ,255 ,
        255 ,170 , 0 , 0 , 0 , 0 , 0 , 0 ,107 , 0 , 0 , 0 , 0 , 0 , 0 ,244 ,
        255 ,156 , 66 , 0 , 0 , 0 , 0 ,221 ,255 ,184 , 0 , 0 , 0 , 0 , 0 ,209 ,
        255 ,255 ,255 ,255 ,244 ,209 ,197 ,197 ,156 , 66 , 0 , 0 , 0 , 0 , 0 ,209 ,
        255 ,255 ,233 ,170 ,125 , 66 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,209 ,
        255 ,184 , 38 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,209 ,
        244 , 38 , 0 , 0 , 0 , 0 , 38 ,156 ,209 ,197 , 0 , 0 , 0 , 0 , 0 ,209 ,
        209 , 0 , 0 , 0 , 0 , 0 ,197 ,255 ,255 ,125 , 0 , 0 , 0 , 0 , 0 ,209 ,
        209 , 0 , 0 , 0 , 0 , 0 , 66 ,170 , 66 , 0 , 0 , 0 , 0 , 0 , 0 ,209 ,
        255 , 66 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,197 ,
        255 ,221 , 66 , 0 , 0 , 0 , 0 , 0 , 0 ,141 , 88 , 0 , 0 , 0 , 0 ,141 ,
        255 ,255 ,255 ,197 ,170 ,170 ,170 ,184 ,233 ,255 ,233 ,209 ,209 ,209 ,209 ,221
      } ;

uint8_t getValue(int l, int c);
int getLine(int index);
int getColums(int index);
std::array<std::array <uint8_t,16 >, 14> fillTab2D2Loop(std::array <uint8_t ,224 > tabLin);
std::array<std::array <uint8_t,16 >, 14> fillTab2D1Loop(std::array <uint8_t ,224 > tabLin);

int main()
{
  std::cout << "SALUT" << '\n';
  return 0;
}
















uint8_t getValue(int l, int c)
{
  return tabLin[l*nx+c];
}

int getLine(int index)
{
  return index/nx;
}

int getColums(int index)
{
  return index%nx;
}
std::array<std::array <uint8_t,nx >, ny> fillTab2D2Loop(std::array <uint8_t ,nx*ny > tabLin){

      std::array<std::array <uint8_t,nx >, ny> tmp;
      for(int i =0; i<nx; ++i){
        for (int j = 0; j < ny; j++) {
          // est la peine de prendre en argument le tabLin
          tmp[i][j]=getValue(i,j);
        }
      }
      return tmp;
}

std::array<std::array <uint8_t,16 >, 14> fillTab2D1Loop(std::array <uint8_t ,224 > tabLin){

      std::array<std::array <uint8_t,16 >, 14> tmp;

      for(int i =0; i<224; ++i)
      {
          tmp[getLine(i)][getColums(i)]=tabLin[i];

      }
      return tmp;
}
