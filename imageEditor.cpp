#include <iostream>
#include <sstream>
#include <fstream>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
using std::string;
using namespace std;

void justBlues(string image_name, string new_image){
    ifstream unfiltered;
    ofstream filtered;

    unfiltered.open(image_name);
    filtered.open(new_image);
    string type = "", width = "", height = "", RGB = "";

    if (unfiltered.is_open())
    {

        unfiltered >> type;
        unfiltered >> width;
        unfiltered >> height;
        unfiltered >> RGB;
    }

    if (filtered.is_open())
    {
        filtered << type << endl;
        filtered << width << " " << height << endl;
        filtered << RGB << endl;
    }

    string red = "", green = "", blue = "";

    int r = 0, g = 0, b = 0;

    while (!unfiltered.eof())
    {

        unfiltered >> red;
        unfiltered >> green;
        unfiltered >> blue;

        stringstream redstream(red);
        stringstream greenstream(green);
        stringstream bluestream(blue);

        redstream >> r;
        greenstream >> g;
        bluestream >> b;

        r = 255;
        g = 255;
        

        filtered << r << " " << g << " " << b << endl;
    }

    unfiltered.close();
    filtered.close();
}

void justReds(string image_name, string new_image){
    ifstream unfiltered;
    ofstream filtered;

    unfiltered.open(image_name);
    filtered.open(new_image);
    string type = "", width = "", height = "", RGB = "";

    if (unfiltered.is_open())
    {

        unfiltered >> type;
        unfiltered >> width;
        unfiltered >> height;
        unfiltered >> RGB;
    }

    if (filtered.is_open())
    {
        filtered << type << endl;
        filtered << width << " " << height << endl;
        filtered << RGB << endl;
    }

    string red = "", green = "", blue = "";

    int r = 0, g = 0, b = 0;

    while (!unfiltered.eof())
    {

        unfiltered >> red;
        unfiltered >> green;
        unfiltered >> blue;

        stringstream redstream(red);
        stringstream greenstream(green);
        stringstream bluestream(blue);

        redstream >> r;
        greenstream >> g;
        bluestream >> b;

        g = 255;
        b = 255;

        filtered << r << " " << g << " " << b << endl;
    }

    unfiltered.close();
    filtered.close();
}

void colorInvert(string image_name, string new_image)
{
    ifstream unfiltered;
    ofstream filtered;

    unfiltered.open(image_name);
    filtered.open(new_image);
    string type = "", width = "", height = "", RGB = "";

    if (unfiltered.is_open())
    {

        unfiltered >> type;
        unfiltered >> width;
        unfiltered >> height;
        unfiltered >> RGB;
    }

    if (filtered.is_open())
    {
        filtered << type << endl;
        filtered << width << " " << height << endl;
        filtered << RGB << endl;
    }

    string red = "", green = "", blue = "";

    int r = 0, g = 0, b = 0;

    while (!unfiltered.eof())
    {

        unfiltered >> red;
        unfiltered >> green;
        unfiltered >> blue;

        stringstream redstream(red);
        stringstream greenstream(green);
        stringstream bluestream(blue);

        redstream >> r;
        greenstream >> g;
        bluestream >> b;

        r = 255 - r;
        g = 255 - g;
        b = 255 - b;

        filtered << r << " " << g << " " << b << endl;
    }

    unfiltered.close();
    filtered.close();
}
void greyScale(string image_name, string new_image)
{
    ifstream unfiltered;
    ofstream filtered;

    unfiltered.open(image_name);
    filtered.open(new_image);
    string type = "", width = "", height = "", RGB = "";

    if (unfiltered.is_open())
    {

        unfiltered >> type;
        unfiltered >> width;
        unfiltered >> height;
        unfiltered >> RGB;
    }

    if (filtered.is_open())
    {
        filtered << type << endl;
        filtered << width << " " << height << endl;
        filtered << RGB << endl;
    }

    string red = "", green = "", blue = "";

    int r = 0, g = 0, b = 0;

    while (!unfiltered.eof())
    {

        unfiltered >> red;
        unfiltered >> green;
        unfiltered >> blue;

        stringstream redstream(red);
        stringstream greenstream(green);
        stringstream bluestream(blue);

        redstream >> r;
        greenstream >> g;
        bluestream >> b;

        r = g = b = 0.3 * r + 0.59 * g + 0.11 * b;

        filtered << r << " " << g << " " << b << endl;
    }

    unfiltered.close();
    filtered.close();
}

void redFilter(string image_name, string new_image)
{
    ifstream unfiltered;
    ofstream filtered;

    unfiltered.open(image_name);
    filtered.open(new_image);
    string type = "", width = "", height = "", RGB = "";

    if (unfiltered.is_open())
    {

        unfiltered >> type;
        unfiltered >> width;
        unfiltered >> height;
        unfiltered >> RGB;
    }

    if (filtered.is_open())
    {
        filtered << type << endl;
        filtered << width << " " << height << endl;
        filtered << RGB << endl;
    }

    string red = "", green = "", blue = "";

    int r = 0, g = 0, b = 0;

    while (!unfiltered.eof())
    {

        unfiltered >> red;
        unfiltered >> green;
        unfiltered >> blue;

        stringstream redstream(red);
        stringstream greenstream(green);
        stringstream bluestream(blue);

        redstream >> r;
        greenstream >> g;
        bluestream >> b;

        if (r + 50 > 255)
        {
            r = 255;
        }
        else
        {
            r += 50;
        }

        filtered << r << " " << g << " " << b << endl;
    }

    unfiltered.close();
    filtered.close();
}

void copyImage(string image_name, string new_image)
{
    ifstream unfiltered;
    ofstream filtered;

    unfiltered.open(image_name);
    filtered.open(new_image);

    string type = "", width = "", height = "", RGB = "";

    if (unfiltered.is_open())
    {

        unfiltered >> type;
        unfiltered >> width;
        unfiltered >> height;
        unfiltered >> RGB;
    }

    if (filtered.is_open())
    {
        filtered << type << endl;
        filtered << width << " " << height << endl;
        filtered << RGB << endl;
    }

    string red = "", green = "", blue = "";

    int r = 0, g = 0, b = 0;

    while (!unfiltered.eof())
    {

        unfiltered >> red;
        unfiltered >> green;
        unfiltered >> blue;

        stringstream redstream(red);
        stringstream greenstream(green);
        stringstream bluestream(blue);

        redstream >> r;
        greenstream >> g;
        bluestream >> b;

        // if (b+50 > 255){
        //     b = 100;
        // }
        // else {
        //     b += 50;
        // }

        filtered << r << " " << g << " " << b << endl;
    }

    unfiltered.close();
    filtered.close();
}

int main()
{
    struct dirent *d;
    struct stat dst;
    int i=1;
    DIR *dr;

    string path = ".\\sampleinputs\\";

    dr = opendir(path.c_str());

    if (dr != NULL)
    {
        for (d = readdir(dr); d != NULL; d = readdir(dr))
        {
            string file_name = d->d_name;
            file_name = path + file_name;
            if (stat(file_name.c_str(), &dst) == 0)
            {
                if (dst.st_mode & S_IFDIR)
                {
                    file_name = " is a folder.";
                }
                else if (dst.st_mode & S_IFREG)
                {
                    file_name = " is a ppm image file.";
                }
            }
            cout << i << ")" << d->d_name << file_name << endl;
            i++;
              
        }
        closedir(dr);
    }
    else
    {
        cout << "ERROR" << endl;
    }

    string image_name, new_image;
    cout << "Enter name of file(with extension ppm) :" << endl;
    cin >> image_name;

    cout << endl;
    int choice;
    cout << "Select the operation to perform on the image" << endl;
    cout << "1. Copy the image" << endl;
    cout << "2. Apply grey scale" << endl;
    cout << "3. Apply Red-filter" << endl;
    cout << "4. Apply color inversion" << endl;
    cout << "5. Display only reds" << endl;
    cout << "6. Display only blues" << endl;
    cin >> choice;
    cout << endl;
    cout << "Enter new file name(with extension ppm) :" << endl;
    cin >> new_image;

    switch (choice)
    {
    case 1:
        copyImage(image_name, new_image);
        break;

    case 2:
        greyScale(image_name, new_image);
        break;

    case 3:
        redFilter(image_name, new_image);
        break;

    case 4:
        colorInvert(image_name, new_image);
        break;

    case 5:
        justReds(image_name,new_image);
        break;

    case 6:
        justBlues(image_name,new_image);
        break;

    default:
        break;
    }
    cout << "Image saved!" << endl;
}
