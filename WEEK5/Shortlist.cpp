#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

class Candidate {
private:
    string name;
    double cgpa;
    int codingScore;

public:

     
    Candidate(string name, double cgpa, int codingScore) {
        this->name = name;
        this->cgpa = cgpa;
        this->codingScore = codingScore;
    }

    
    static bool isEligible(double cgpa) {
        return cgpa >= 7.0;
    }

    
    static bool isEligible(double cgpa, int codingScore) {
        return (cgpa >= 7.0) ||
               (cgpa >= 6.5 && codingScore >= 60);
    }

    
    double compositeScore() const {
        return (cgpa * 10) + (codingScore * 0.5);
    }

    
    double getCGPA() const {
        return cgpa;
    }

   
    int getCodingScore() const {
        return codingScore;
    }

    
    string getName() const {
        return name;
    }

   
    bool operator<(const Candidate& other) const {
        return compositeScore() > other.compositeScore();
    }
};

string shortlistAndRank(vector<Candidate> candidates) {

    vector<Candidate> shortlisted;

    // Shortlist candidates
    for (Candidate candidate : candidates) {

        if (Candidate::isEligible(candidate.getCGPA()) ||
            Candidate::isEligible(candidate.getCGPA(),
                                  candidate.getCodingScore())) {

            shortlisted.push_back(candidate);
        }
    }

    
    sort(shortlisted.begin(), shortlisted.end());


    string result = "";

    for (int i = 0; i < shortlisted.size(); i++) {

        result += shortlisted[i].getName();
        result += " (";

       
        result += to_string(shortlisted[i].compositeScore());

       
        result += ")";

        if (i < shortlisted.size() - 1) {
            result += " | ";
        }
    }

    return result;
}

int main() {

    vector<Candidate> candidates = {
        Candidate("Aisha", 8.2, 40),
        Candidate("Rohit", 6.8, 65),
        Candidate("Meena", 6.0, 90),
        Candidate("Karan", 7.5, 20)
    };

    cout << shortlistAndRank(candidates);

    return 0;
}