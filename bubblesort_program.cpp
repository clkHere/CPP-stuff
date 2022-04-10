#include <iostream>

using namespace std;

//Function Prototypes
void displayArray (int scores[], int noe);
void swap (int *cv, int *lv); //*cv : {current value] | *lv : {lesser value}
void sortArray (int scores[], int noe, int comp);
void fillArray (int x, int scores[], int noe, int comp, const int SIZE = 5);

int main ()
{
  //Variable Declaration
  const int SIZE = 5;
  int scores[SIZE];
  int x = 0;
  int temp;
  int numberOfEls = 0;
  int comparisons;
  const int QUIT = 999;


  cout << "Please enter a score or " << QUIT << " to quit." << endl;
  fillArray (x, scores, numberOfEls, comparisons, SIZE);
  return 0;
};

void displayArray (int scores[], int noe)
{
  int x = 0;
  const int SIZE = 5;
  cout << "\n\nAfter Sorting: \nscores[" << 5 << "] = {";
  while (x < noe)
    {
      cout << scores[x] << ", ";
      x++;
    }
  cout << "\b\b";
  cout << "}" << endl;
}

//SWAP Array Values if condition met.
void swap (int *cv, int *lv)
{
  int temp;
  temp = *lv;
  *lv = *cv;
  *cv = temp;
  int didSwap = true;
}

//SORT the populated array.
void sortArray (int scores[], int noe, int comp)
{
  int didSwap = true;
  while (didSwap == true || comp > 0)    //Sets 'x' back to zero
    {
      int x = 0;
      didSwap = false;
      while (x < comp)
    {
      if (scores[x] > scores[x + 1])
        {
          swap (&scores[x], &scores[x + 1]); //Make the swap.
        }//END IF 
      x++;
    }//END INNER WHILE-LOOP
      comp--;
      cout << "Comparisons Left: " << comp << endl;
    }//END OUTER WHILE-LOOP
  displayArray (scores, noe); //Move to the printout method.
}

//FILL Array with USER input.
void fillArray (int x, int scores[], int noe, int comp, int SIZE)
{
  int QUIT = 999;
  bool didSwap;
  while (x < SIZE && scores[x - 1] != QUIT)
    {
      cout << "Input[" << x << "]: ";
      cin >> scores[x];
      x++;
    }//END INPUT Loop
  noe = x;
  comp = noe - 1;
  cout << "\n\nBefore sorting: \nscores[" << 5 << "] = {";
  for (int i = 0; i < SIZE; i++)
    {
      cout << scores[i] << ", ";
    }
  cout << "\b\b";
  cout << "}\n\n";
  sortArray (scores, noe, comp); //Move to the sorting method.
}
