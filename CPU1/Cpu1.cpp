#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <fstream>


using namespace std;

//#ifndef Project_FIFO_register_cpp
//#define Project_FIFO_register_cpp


//-------------------------//
// Creating the class CPU  //
//-------------------------//
class CPU
{
	private:	
	int frequency;
	int cores;
	int active_core;
	public:
	string label;
	//CPU register;
        //register.FIFO::  //make later
	void program_execute();
	//void simulate();
};

//-------------------------//
// Reading the program.txt //
//-------------------------//
void CPU::program_execute()
{
	std::string line_;
	vector<string> instructions;
	ifstream file_("Program.txt");
	if(file_.is_open())
	{
		while(getline(file_,line_))
		{
			string linha  = line_;
			istringstream iss(linha);

		
			instructions.push_back(iss)
			while (iss.good()) 
        		{
            			istringstream iss(linha); 
				instructions.push_back(iss)
			}
			cout<< "para ver se pegou toda a linha certo"			
			for(int i = 0; i < days.length(); i++) {
    cout << days[i] << endl;
}
			file_.close();
	}
	else
	{
		cout<<"Program could not be opened" <<endl;
		std::cin.get();
	}
};

//PARA DECIFRAR UMA FUNCAO, USAR UM MAP COM AS 5 INSTRUCOES POSSIVEIS, E DEPOIS UTILISAR O PRIMEIRO ELEMENTO DA LINHA PARA FAZER UMA TRIAGEM E COLOCAR O DEVIDO TYPEDEF (ADD =1, SUB = 2, ETC) DPS USA ESSE ENUM PARA ESTOCAR TUDO E TREATAR DPS PARA ENVIAR PARA CADA OBJETO


int main()
{
	cout << "testing if we can read a file "<< endl;
	CPU c;
	c.program_execute();
	return 0;
}
