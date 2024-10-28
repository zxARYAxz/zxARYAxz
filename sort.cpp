
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string firstname;
    string lastname;
    int sid;
};

bool sortByFirstName(const Student &a, const Student &b) {
    return a.firstname < b.firstname;
}

bool sortByLastName(const Student &a, const Student &b) {
    return a.lastname < b.lastname;
}

bool sortBySID(const Student &a, const Student &b) {
    return a.sid < b.sid;
}

void sortStudents(vector<Student> &students, const string &sortBy) {
    if (sortBy == "firstname") {
        sort(students.begin(), students.end(), sortByFirstName);
    } else if (sortBy == "lastname") {
        sort(students.begin(), students.end(), sortByLastName);
    } else if (sortBy == "sid") {
        sort(students.begin(), students.end(), sortBySID);
    }
}

int main() {
    vector<Student> students = {
        {"Arya", "Aghayipoor", 101},
        {"mehdi", "afshari", 103}
    };

    string sortBy;
    cout << "Enter sorting criteria (firstname, lastname, sid): ";
    cin >> sortBy;

    sortStudents(students, sortBy);

    for (const auto &s : students) {
        cout << s.firstname << " " << s.lastname << " " << s.sid << endl;
    }
	int afshar;
	cin>>afshar; 
    return 0;
}

