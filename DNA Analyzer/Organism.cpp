#include <iostream>
#include "Organism.h"
#include <stdlib.h>

Organism::Organism(std::string oName, double oA, double oG, double oT, double oC)
            {
                SetOrganism(oName, oA, oG, oT, oC);
            }

void Organism::SetOrganism(std::string oName, double oA, double oG, double oT, double oC)
{
    name = oName;
    A = oA;
    G = oG;
    C = oC;
    T = oT;
}

void Organism::Initialization(int selection){
    switch(selection){
        case 1:
            SetOrganism("Chicken", .28, .22, .284, .216);  
            break;  
        case 2:
            SetOrganism("E. Coli", .247, .260, .236, .257);
            break;
        case 3:
            SetOrganism("Grasshopper", .293, .205, .293, .207);
            break;
        case 4:
            SetOrganism("Human", .293, .207,.300,.200);
            break;
        case 5:
            SetOrganism("Maize", .268, .228, .272,.232);
            break;
        case 6:
            SetOrganism("Octopus", .332,.176, .316, .176);
            break;
        case 7:
            SetOrganism("Rat", .286,.214,.284,.205);
            break;
        case 8:
            SetOrganism("Sea Urchin", .328, .177, .321,.173);
            break;
        case 9:
            SetOrganism("Wheat", .273, .227, .271, .228);
            break;
        case 10:
            SetOrganism("Yeast", .313, .187,.329,.171);
            break;
        case 11:
            SetOrganism("φX174", .240, .233, .312,.215);
            break;
        default:
            std::cout <<"invalid selection restart the program\n";
    }

    
}

std::string Organism::Sequence(int selectionB){
    std::string strand;
    int Selection;
    int aVariable = 0;
    int gVariable = 0;
    int cVariable = 0;
    int tVariable = 0;
    for(int i = 0; i < selectionB; i++){
        
        Selection = (rand() %  4) + 1;
        
        switch(Selection){
            case 1:
            if(aVariable < (A * selectionB)){
                strand.append("A");
                aVariable ++;
            }
            else{
                i--;
            }
            break;
            case 2:
             if(gVariable < (G * selectionB)){
                strand.append("G");
                gVariable ++;
            }
            else{
                i--;
            }
            break;
            case 3:
             if(cVariable < (C * selectionB)){
                strand.append("C");
                cVariable ++;
            }
            else{
                i--;
            }
            break;
            case 4: 
             if(tVariable < (T * selectionB)){
                strand.append("T");
                tVariable ++;
            }
            else{
                i--;
            }
            break;
        }
        
    }
    
    std::cout << "Percentage of A: %" << double(aVariable) / selectionB * 100 <<"\n"
    << "Percentage of G: %" << double(gVariable) / selectionB * 100<<"\n"
    << "Percentage of C: %" << double(cVariable) / selectionB * 100<<"\n"
    << "Percentage of T: %" << double(tVariable) / selectionB * 100<<"\n";
    return strand;
}