#include <iostream>
#include <string>
using namespace std;

// function to calculate and disply result (Requirement 2, 3, & 5)
void checkResult(string name, double s1, double s2,  double s3) {
	double total = s1 +s2 + s3;
	double avg = total / 3.0;
	cout <<"/nName: " <<name<< "/nTotal: " <<total<< "/nAverage: " <<avg<< "%\n";
	cout <<"status: " <<(avg >= 50 ? "passed" : "Failed") << "\n\n";
	
}    
   int main() {
   string name;
   // loop for multiple students (Requirement 4)
   while (cout<< "Enter name (or 'exit'): " && cin >> name != "exit") double s1, s2, s3,
    cout << "Enter 3 marks (or 'exit' to quit): ";
    cin >> s1, >> s2, >> s3 // Accepts marks for 3 subjects (Requirement 1)
    chcekResult (name, s1, s2, s3);
   	
   }
   return 0;
   
}
   
