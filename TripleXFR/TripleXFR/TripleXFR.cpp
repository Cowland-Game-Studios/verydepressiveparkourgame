#include <iostream>
#include <string>
#include <ctime>
srand(time(NULL));

void PrintIntroduction(int Difficulty) {
	std::cout << "\n\nYou are a  Ruoyu Xu trying to hack a " << Difficulty << "x encrypted Screen TimeTM... \n You need to compelte a set of arithmetic shitqing albreto and enter the right code to continue...";
}d 

bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);

	int CodeA = rand() % Difficulty + Difficulty;
	int CodeB = rand() % Difficulty + Difficulty;
	int CodeC = rand() % Difficulty + Difficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;
	int PlayerGuesson;
	int PlayerGuesstw;
	int PlayerGuessth;

	std::cout << "\nThere are 3 numbers in the code\nThey add up to: " << CodeSum << "\n They multiply to: " << CodeProduct << "\n\n>>>";

	std::cin >> PlayerGuesson >> PlayerGuesstw >> PlayerGuessth;

	int PlayerGuessSum = PlayerGuesson + PlayerGuesstw + PlayerGuessth;
	int PlayerGuessProduct = PlayerGuesson * PlayerGuesstw * PlayerGuessth;

	std::cout << "Sum of your ans: " << PlayerGuessSum;
	std::cout << "Product of your ans: " << PlayerGuessProduct;

	if (CodeSum == PlayerGuessSum && PlayerGuessProduct == CodeProduct)
	{
		std::cout << "You got it!";
		return true;
	}
	else
	{
		std::cout << "Unable to breach screen time password!\n\n";
		return false;
	}
}

int main() //main function
{
	int Difficulty = 0;
	int maxDifficulty = 10;
	bool Fail;
	do {
		Difficulty++;
		Fail = PlayGame(Difficulty);
		std::cin.clear();
		std::cin.ignore();
	} while (Fail && Difficulty < maxDifficulty);

	std::cout << "Well done! Would you like to join our clan?";

	return 0;
}