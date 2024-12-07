#include <iostream>
#include <fstream>
#include <string>

#define cinn std::cin
#define coutt std::cout
#define endll std::endl

typedef std::string str;

#define dirrect ""
//using namespace std;

void adding(){
    str name;
    coutt<<"please input name: ";
    cinn>>name;
    std::ofstream fil((dirrect+name +".txt"));
    if(!(fil.is_open())){
        coutt<<"ERROR: unknowed error "<<endll;
        return ;
    }
    str pass ;
    // fil >> pass;
    coutt<<"pass :\n";
    cinn>>pass;
    unsigned int a = pass.size();
    fil<<pass;
    coutt<<"pass safed"<<endll;
    return;
    
}
void checking(){
    str name;
    coutt<<"please input name: ";
    cinn>>name;
    std::ifstream fil((dirrect +  name +".txt"));
    if(!(fil.is_open())){
        coutt<<"ERROR: this pass is havent "<<endll;
        return ;
    }
    str pass ;
    std::getline (fil , pass );
    // fil >> pass;
    coutt<<"pass : \n"<<pass<<endll;
}
void deleting(){
    str name;
    coutt<<"please input name: ";
    cinn>>name;
    std::ifstream fil((dirrect +  name +".txt"));
    if(!(fil.is_open())){
        coutt<<"ERROR: this pass is havent "<<endll;
        return ;
    }
    str pass ;
    std::getline (fil , pass );
    // fil >> pass;
    coutt<<"pass : \n"<<pass<<endll;
    str comm = "rm "+ ( dirrect +  name +".txt");
    const char * commc =  comm.c_str();
    system(commc);

}

int main(){
    coutt << "what you need:\n\t1.check the pass\n\t2.add the pass\n\t3.delete the pass\n: ";
    unsigned short int v;
    cinn>>v;
    switch(v){
        case 1://checking
            checking();
            break;
        case 2://adding
            adding();
            break;
        case 3://deleting
            deleting();
            break;
        default:
            coutt<<"ERROR"<<endll;
            return 1;
    }

}