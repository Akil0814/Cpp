int main(){
	Person people[NUM_ROWS];
	int count = 0;
	string inputFileName, outputFileName, searchName;
	int highestIndex;
	float totalBalance;
	float searchTotalBalance;
	int searchIndex;



	PrintHeading();
	cout << "What input file would you like to use? ";
	cin >> inputFileName;
	cout << "What output file would you like to use?";
	cin >> outputFileName;

	ofstream outFile(outputFileName, ios::app);

	InputData(people,count,inputFileName);

	PrintPersons(people,10);
	highestIndex = SearchHighestBalance(people, count);
	outFile << "\tHigher Balance:\n";
	outFile << "\tID #"<<fixed<<setprecision(5)<<"\tNAME"<<setprecision(5)
			<<"\tBALANCE DUE\n";
	outFile << "\t----"<<"\t--------------------"<<"\t-----------\n";
	outFile << "\t"<<people[highestIndex].id << setw(20) << "\t"
			<< left << people[highestIndex].name << "$ \t"
			<< fixed << setprecision(2) <<people[highestIndex].balance << endl;
	totalBalance = CalculateTotalBalance(people, count);
	outFile << "\nTotal Balance for all persons:\n";
	outFile << "$ " << fixed << setprecision(2) << totalBalance << endl;
	outFile << "\nSearch Names:"<<endl;
	outFile << "ID # NAME                BALANCE DUE"<<endl;
	outFile << "---- -------------------- -----------"<<endl;
	searchTotalBalance = 0;
	cin.ignore();
	while (true) {
	    cout << "Who do you want to search for (enter done to exit): ";
	    getline(cin, searchName);
	    cout << "Searching for: [" << searchName << "]\n";
	    if (searchName == "done") {
	        cout << "Thank you for using my program.\n";
	        break;
	    }
	    else {
	        searchIndex = SearchByName(people, count, searchName);
	        if (searchIndex != -1) {
	            searchTotalBalance += people[searchIndex].balance;
	            OutputToFile(people, count, outputFileName, searchName, searchIndex);
	        } else {
	            cout << searchName << " was not found.\n";

	        }
	    }
	}
    outFile<<setw(10)<< right <<"Total Balance Due: $ " << fixed
    		<< setp

void PrintHeading() {
	cout << "************************************************\n";
	cout << " Programmed by: Jianhao Wu\n";
	cout << " Student ID : 1333663\n";
	cout << " CS1B : MW - 7:30p-9:50\n";
	cout << " Lab #6 – Structs\n";
	cout << "***************************************************\n\n";
}
void InputData(Person people[], //array for storing person-formatted data
			   int& count,//a variable to calculate times
			   string filename) {//input the content into array
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Input file not found.\n";
        return;
    }

    string name;
    int id;
    float balance;

    while (count < 10 && getline(inFile, name)) {
        if (inFile >> id >> balance) {
            inFile.ignore();
            people[count].name = name;
            people[count].id = id;
            people[count].balance = balance;

            count++;
        } else {
            cout << "Error reading data for person " << count + 1 << "\n";
            break;
        }
    }
    inFile.close();
    }

int SearchHighestBalance(Person people[], int count) {
    int highestIndex = 0;
    for (int i = 1; i < count; i++) {
        if (people[i].balance > people[highestIndex].balance) {
            highestIndex = i;
        }
    }
    return highestIndex;}

float CalculateTotalBalance(Person people[], int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += people[i].balance;
    }
    return total;
}

int SearchByName(Person people[], int count, string name) {
    for (int i = 0; i < count; i++) {
        if (people[i].name == name) {
            return i;
        }
    }
    return -1;
}
void OutputToFile(Person people[], int count, const string& outputFileName, const string& searchName,int& searchIndex) {
	ofstream outFile(outputFileName, ios::app);
    if (searchIndex != -1) {
    	cout<<"Found."<<endl;
        outFile<< people[searchIndex].id << " "
        		<< people[search