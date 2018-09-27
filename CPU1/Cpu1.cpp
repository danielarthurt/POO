#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <vector>

using namespace std;

//#ifndef Project_FIFO_register_cpp
//#define Project_FIFO_register_cpp



//-------------------------//
// Creating the class CPU  //
//-------------------------//
class CPU
{
	private:
	float operator1, operator2;       			//store the two numbers that will be treated during the execution.	
	string instruction;					//store the instruction	
	int frequency;
	int cores;
	string label;
	int active_core;
	string type;
	public:
	//CPU register;
        //register.FIFO::  //make later
	void program_execute();
	float do_instruction(string s, float a, float b);
	//void simulate();
};


//-------------------------//
// Reading the program.txt //
//-------------------------//
void CPU::program_execute()
{	
	std::string line_;
	float op1, op2, result;
	int i;
	vector<string> instructions;
	char first = instructions.begin();					//its gonna point to the first element of instructions
	ifstream file_("Program.txt");
	if(file_.is_open())
	{
		i = 0;   						//to know the number of instructions
		while(getline(file_,line_))
		{
			string linha  = line_;
		
			istringstream iss(instructions);

			instructions.push_back(iss);
			while (iss.good()) 
        		{

				iss >> op1;
				iss >> op2;
				i++;
            			//istringstream iss(linha);		 prestar atencao, n tenho certeza doq fiz em cima
				//instructions.push_back(iss)
			}
			
			cout<< "para ver se pegou toda a linha certo";			
			cout << " instrucao: " << *first << " operando 1: " << op1 << " operando 2 : " << endl;
			result = do_instruction(*first, op1, op2);  	//if the vector works, use vector in everything
		}
			file_.close();
	}
	else
	{
		cout<<"Program could not be opened" <<endl;
		std::cin.get();
	}
};


//-------------------------//
// Doing the instruction   //
//-------------------------//
float CPU::do_instruction(string s, float a, float b)
{
	cout << "chegou em do instruction << endl";
	return 0;
}


//PARA DECIFRAR UMA FUNCAO, USAR UM MAP COM AS 5 INSTRUCOES POSSIVEIS, E DEPOIS UTILISAR O PRIMEIRO ELEMENTO DA LINHA PARA FAZER UMA TRIAGEM E COLOCAR O DEVIDO TYPEDEF (ADD =1, SUB = 2, ETC) DPS USA ESSE ENUM PARA ESTOCAR TUDO E TREATAR DPS PARA ENVIAR PARA CADA OBJETO


int main()
{
	cout << "testing if we can read a file "<< endl;
	CPU c;
	c.program_execute();
	return 0;
}
