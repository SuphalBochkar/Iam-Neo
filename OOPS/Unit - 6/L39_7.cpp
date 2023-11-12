#include <bits/stdc++.h>
using namespace std;

struct LaptopModel
{
    string name;
    int assemblySteps;
};

template <typename T>
void addLaptopModel(T &laptopModels, const string &name, int steps)
{
    if (laptopModels.size() < 15)
    {
        laptopModels.push_back({name, steps});
        cout << name << " - Added to the production line" << endl;
    }
    else
    {
        cout << "Production line is full. Cannot add more laptop models!" << endl;
    }
}

template <typename T>
void updateAssemblySteps(T &laptopModels, const string &name, int steps)
{
    for (auto &model : laptopModels)
    {
        if (model.name == name)
        {
            model.assemblySteps = steps;
            cout << name << " - Updated" << endl;
            return;
        }
    }
    cout << name << " - Not found" << endl;
}

template <typename T>
void displayLaptopModels(const T &laptopModels)
{
    for (const auto &model : laptopModels)
    {
        cout << "Model Name: " << model.name << ", Assembly Steps: " << model.assemblySteps << endl;
    }
}

int main()
{
    vector<LaptopModel> laptopModels;
    int choice;

    while (true)
    {
        cin >> choice;

        if (choice == 1)
        {
            string name;
            int steps;
            cin.ignore();
            getline(cin, name);
            cin >> steps;
            addLaptopModel(laptopModels, name, steps);
        }
        else if (choice == 2)
        {
            string name;
            int steps;
            cin.ignore();
            getline(cin, name);
            cin >> steps;
            updateAssemblySteps(laptopModels, name, steps);
        }
        else if (choice == 3)
        {
            displayLaptopModels(laptopModels);
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
