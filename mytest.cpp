#include<vector>
#include<iostream>

int main(int argc, char** argv)
{
	std::vector<std::pair<int, std::vector<int> > > myVector;
	
	//assign values to the vector
	for (int i = 0; i < 10; i++)
	{
		std::pair<int, std::vector<int> > curVector;
		curVector.first = i;
		curVector.second.push_back(2 * i);
		curVector.second.push_back(i * i);
		myVector.push_back(curVector);
	}

	//output all the value
	for (int i = 0; i < 10; i++)
	{
		std::cout << "the " << myVector[i].first << "th vector: ";
		std::cout << myVector[i].second[0] << "  " << myVector[i].second[1] << std::endl;
	}

	system("pause");
	return 0;
}