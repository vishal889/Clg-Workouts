#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <chrono>
#include <typeinfo>
using namespace std;

/*Function Class*/
class Function
{
public:
  void ConsoleDesign(int X, char y, string z)
  {
    string ConsoleDesign = string(X, y);
    cout << ConsoleDesign << "[" << z << "]" << ConsoleDesign + "\n"
         << endl;
  }
};

/*Main Class*/
class MainClass
{
  Function Function;

public:
  int Interchanging(int A, int B)
  {
    Function.ConsoleDesign(33, '*', "Starting Interchanging process");
    int Value_A = A;
    int Value_B = B;
    cout << "Value_A: " << Value_A << endl;
    cout << "Value_B: " << Value_B << endl;
    cout << "\n^^^^^^^^^^^ Before interchnage ^^^^^^^^^^^\n"
         << endl;
    int Temp = Value_A; // Store Value A in Temp ::: A = 1(Temp = 1)
    Value_A = Value_B;  // Try interchnaging A = B (1 = 2) intrun returns :: A = B i.e 1 = 2 (Value A changed)
    //[Value A : 2]
    Value_B = Temp; // Try interchnaging B i.e B = Temp (2 = 1) inturn returns :: B = T i.e 2 = 1 (Value B chnaged)
    //[Value B : 1]
    cout << "Value_A: " << Value_A << endl;
    cout << "Value_B: " << Value_B << endl;
    cout << "\n ^^^^^^^^^^^ After interchnage ^^^^^^^^^^^\n"
         << endl;
    cout << ">>>> Temp Value :" << Temp << endl;
    Function.ConsoleDesign(33, '*', "Exiting Interchanging process");
    return 0;
  };

public:
  int IDK()
  {
    Function.ConsoleDesign(33, '*', "Starting The process");
    int __ = 4618;                                        // Declaring (2x) underscore as a integer
    string ___ = "This is the string for the underscore"; // Declaring (3x) underscore as a string
    cout << "[value of (2x)] :: " << __ << endl;          // Outputing value of (2x) underscore
    cout << "[value of (3x)] :: " << ___ << endl;         // Outputing value of (3x) underscore
    string FinalOutput = ___ + to_string(__);             // Adding (2x) underscore and (3x) underscore statements
    cout << "[Trying operation addition and outputing FinalOutput] :: " << FinalOutput + "\n"
         << endl;                                           // Outputing the final Value
    Function.ConsoleDesign(33, '*', "Exiting the process"); // Simple structure to make the console a bit easy to read
    return 0;
  }
};

/*Class Managers*/
class Manager
{
public:
  int InputManager()
  {
    MainClass m;

    int V_1, V_2;
    cout << "[Input Swap Value(1)] :";
    cin >> V_1;
    cout << "[Input Swap Value(2)] :";
    cin >> V_2;
    if (typeid(V_1) != typeid(int) || typeid(V_2) != typeid(int))
    {
      cout << "[Error]: Invalid args passed :: args were not an number" << endl;
      exit(0);
    }
    m.Interchanging(V_1, V_2);
  };
};



/*Calculator class*/
class Calculator
{
  public :
  //Lets make it conplex lol
  // 1 = Addition, 2 = Sub , 3 = Multiplication , 4 = division
  double Type(auto T, int V_1 , int V_2){
    if(T == 1){
      return V_1 + V_2;
    } else if(T==2){
      return V_1 - V_2;
    } else if(T==3){
      return static_cast<double>(V_1) * V_2;
    } else if(T==4){
      return static_cast<double>(V_1) / V_2;
    } else {
      cout << "[Error]: Invalid args passed :: args were not an number" << endl;
      exit(0);
    }

  }
public:
  int InputManager()
  {
    int X;
    cout << "Available Types\n1. Addition\t2. Subtraction\n3. Multiplication\t4. division\n[Waiting for Input] :";
    cin >> X;
    if (typeid(X) != typeid(int))
    {
      cout << "[Error]: Invalid args passed :: args were not an number" << endl;
      exit(0);
    }
    Function Function;
    Function.ConsoleDesign(33, '*', "Starting Calculator process");
    int V_1, V_2;
    cout << "[Input (1) Value] :";
    cin >> V_1;
    cout << "[Input (2) Value] :";
    cin >> V_2;
    if (typeid(V_1) != typeid(int) || typeid(V_2) != typeid(int))
    {
      cout << "[Error]: Invalid args passed :: args were not an number" << endl;
      exit(0);
    } else {
      Calculator Calculator;
      auto x = Calculator.Type(X,V_1,V_2);
      cout << "[Output] : " << x << "\n" << endl; 
      Function.ConsoleDesign(33, '*', "Exiting Calculator process");
    }
   
    return 0;
  };
public : 
int MainFrame() {
  Calculator Calculator;
  Calculator.InputManager();
};

};





/*Display Class*/

class Display
{
public:
  int Display_()
  {
    string ascii = R"(                                                                                                                                    
                                  ,---,                 ,--,    
       ,---.  ,--,              ,--.' |               ,--.'|    
      /__./|,--.'|              |  |  :               |  | :    
 ,---.;  ; ||  |,      .--.--.  :  :  :               :  : '    
/___/ \  | |`--'_     /  /    ' :  |  |,--.  ,--.--.  |  ' |    
\   ;  \ ' |,' ,'|   |  :  /`./ |  :  '   | /       \ '  | |    
 \   \  \: |'  | |   |  :  ;_   |  |   /' :.--.  .-. ||  | :    
  ;   \  ' .|  | :    \  \    `.'  :  | | | \__\/: . .'  : |__  
   \   \   ''  : |__   `----.   \  |  ' | : ," .--.; ||  | '.'| 
    \   `  ;|  | '.'| /  /`--'  /  :  :_:,'/  /  ,.  |;  :    ; 
     :   \ |;  :    ;'--'.     /|  | ,'   ;  :   .'   \  ,   /  
      '---" |  ,   /   `--'---' `--''     |  ,     .-./---`-'   
             ---`-'                        `--`---'             
                                                                
  )";
    cout << ascii << endl;
  };

public:
  void Option_Display()
  {
    MainClass MainClass;
    Display Display;
    Calculator Calculator;
    int x;
   
    cout << "\n1. Interchanging\t3. Calculator \n2. Check UnderScore" << endl;
    cout << "[Input] : ";
    cin >> x;
    if (x == 1)
    {
      Manager Manager;
      Manager.InputManager();
    }
    else if (x == 2)
    {
      MainClass.IDK();
    }
    else if(x==3)
    {
      Calculator.MainFrame();
    }
    else
    {
      cout << "[Error] : Invalid args passed" << endl;
      exit(0);
    }
  };

public:
  int Main()
  {
    Display Display;
    Display.Display_();
    Display.Option_Display();
  }
};

// Main Function

int main()
{
  MainClass MainClass;
  Function Function;
  Display Display;
  Display.Main();
  return 0;
}