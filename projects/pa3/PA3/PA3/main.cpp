#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <exception>
#include <vector>
using namespace std;



int main(void)
{
	cout << boolalpha;

	string input_file;
	string output_file;
	string format;
	string width_line;
	string height_line;
	int width; // change these three to ints
	int height;
	string max_pixel_line;
	int max_pixel;
	string next_line;

	cout << "Enter source file: ";
	cin >> input_file;

	cout << endl << "Enter destination file: ";
	cin >> output_file;

	ifstream fin;
	fin.open(input_file);

	if (fin.fail() == true)
	{
		cout << "Could not open " << input_file
			<< " for reading; Ending program" << endl;
		return EXIT_FAILURE;
	}

	ofstream fout;
	fout.open(output_file);
	
	if (fout.fail() == true)
	{
		cout << "Could not open " << output_file
			<< " for writing; Ending program" << endl;
		return EXIT_FAILURE;
	}

	getline(fin, format);			//print image format
	fout << "Image Format: " << format << endl;

	getline(fin, width_line, ' ');		// print width
	width = stoi(width_line);
	fout << "Width: " << width << endl;

	getline(fin, height_line);		// print height
	height = stoi(height_line);
	fout << "Height: " << height << endl;

	getline(fin, max_pixel_line);		//print max pixel value
	max_pixel = stoi(max_pixel_line);
	fout << "Max Pixel Value: " << max_pixel << endl;

	// int x = stoi(max_pixel); -- example of how to use stoi from AC



	fout << "Data: " << endl;		//print rest of data

	vector<string> data_line{};
	vector<string> string_data{};
	vector<int> int_data{};
	string line;
	string current_line;
	string temp;
	int num_data;

	while (fin.good() == true) //not EOF, not error, etc.
	{
		getline(fin, line);
		data_line.push_back(line); // breaks data into individual lines
		// TODO: breaking data into lines may not be necessary
	}

	for (int i = 0; i < data_line.size(); i++) //breaks apart lines of data into vector of individual strings
	{
		current_line = data_line[i];

		//cout << "Current Line: " << current_line << endl;

		for (int s = 0; s <= current_line.length(); s++)
		{
			if (s == current_line.length())
			{
				string_data.push_back(temp);
				//cout << "Temp: " << temp << endl;
				temp = "";
			}
			else if (current_line.at(s) != ' ')
			{
				temp.push_back(current_line.at(s));
			}
			else if (current_line.at(s) == ' ' && temp.length() > 0)
			{
				string_data.push_back(temp);
				//cout << "Temp: " << temp << endl;
				temp = "";
			}
		}
	}

	for (int i = 0; i < string_data.size(); i++) //converts data vector of strings to data vector of ints
	{
		// TODO: check to make sure string_data[i] is an int
		num_data = stoi(string_data[i]);
		int_data.push_back(num_data);

		//cout << "S: " << string_data[i] << endl;
	}

	for (int i = 0; i < int_data.size(); i++) //turns every 3rd element in the data set to a zero
	{
		if (i % 3 == 0)
		{
			int_data[i] -= int_data[i];
		}
	}

	for (int i = 0; i < int_data.size(); i++) //prints the data
	{
		fout << " "<< int_data[i];
		if (i == 11 || i == 23 || i == 35)
		{
			fout << endl;
		}
	}



	fin.close();
	fout.close();

	return EXIT_SUCCESS;
}