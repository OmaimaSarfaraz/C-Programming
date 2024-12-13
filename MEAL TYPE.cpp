#include <iostream> 
using namespace std; 
int main() { 
int mealType = 1;  
int dayOfWeek = 3; 
switch (mealType) 
{ 
case 1: 
  switch (dayOfWeek) 
   { 
      case 1: 
        cout << "Monday Breakfast: Pancakes" << endl; 
        break; 
      case 2: 
        cout << "Tuesday Breakfast: Omelette" << endl; 
        break; 
      case 3: 
        cout << "Wednesday Breakfast: French Toast" << endl; 
        break; 
      default: 
        cout << "Other Breakfast Menu" << endl; 
       } 
    break; 
case 2: 
  switch (dayOfWeek) 
    { 
      case 1: 
        cout << "Monday Lunch: Sandwich" << endl; 
        break; 
      case 3:
        cout << "Wednesday Lunch: Salad" << endl; 
        break; 
      default: 
        cout << "Other Lunch Menu" << endl; 
       } 
    break; 
case 3: 
  switch (dayOfWeek) 
   {     
	 case 5: 
       cout << "Friday Dinner: Pasta" << endl; 
       break; 
     case 6: 
       cout << "Saturday Dinner: Pizza" << endl; 
     break; 
     default: 
       cout << "Other Dinner Menu" << endl; 
       } 
  break; 
default: 
    cout << "Invalid meal type." << endl; 
} 
return 0; 
}

