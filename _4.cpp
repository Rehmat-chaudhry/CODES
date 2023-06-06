#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName="File.txt",buffer,search;
	int count = 0;
	
	fstream file("File.txt", ios::in);
	if (!file)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	cout << "Enter a string to search for in the file \""<< fileName << "\".\n";
	cin  >> search;

	cout << "\nString: " << search << endl;
	cout << "All lines in file that contain the string:\n\n";
	file.seekg(0, ios::beg);
	while (!file.fail())
	{
		getline(file, buffer);
		if (buffer.find(search,0) < buffer.length())
		{
			cout << buffer << endl;
			count++;
		}
		
	}
	cout << "Numer of times the string appeared in file: " << count << endl;

	file.close();
	return 0;
}
