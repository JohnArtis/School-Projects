#include <string>
    class Organism
    {
        private:
            std::string name;
            double A;
            double G;
            double C;
            double T;

        public:
            Organism(std::string oName, double oA, double, double, double oT);

            void SetOrganism(std::string oName, double oA, double oG, double oC, double oT);
            
            std::string getname() const {return name;}
            double getA() const {return A;}
            double getG() const {return G;}
            double getC() const {return C;}
            double getT() const {return T;}

            void Initialization(int selection);
            std::string Sequence(int selectionB);
            
    };
