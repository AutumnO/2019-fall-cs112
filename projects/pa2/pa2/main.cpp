#include <iostream>
#include <fstream>
#include <string>
using namespace std;





int main(void)
{
	cout << boolalpha;
	
	string file_name;
	string format;
	string width_height;
	int width; // change these three to ints
	int height;
	string max_pixel_line;
	int max_pixel;
	string next_line;

	file_name = "tinypix.ppm";

	ifstream fin;
	fin.open(file_name.c_str());

	if (fin.fail() == true)
	{
		cout << "Could not open " << file_name
			<< " for reading; Ending program" << endl;
		return EXIT_FAILURE;
	}

	getline(fin, format);			//print image format
	cout << "Image Format: " << format << endl;

	getline(fin, width_height);		// print width and height
	width = width_height.at(0);
	cout << "Width: " << width << endl;

	height = width_height.at(2);
	cout << "Height: " << height << endl;

	getline(fin, max_pixel);		//print max pixel value
	cout << "Max Pixel Value: " << max_pixel << endl;
	// int x = stoi(max_pixel); //example of how to use stoi from AC

	cout << "Data: " << endl;		//print rest of tinypix
	while (fin.eof() == false)
	{
		cout << next_line << endl;

		getline(fin, next_line);
	}

	fin.close();

	return EXIT_SUCCESS;
}