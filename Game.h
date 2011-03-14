
#ifndef GAME_H_
#define GAME_H_

#include "Board.h"
#include "GraphicsEngine.h"
#include <string>

class Game {

	private:
		Board* board;
		GraphicsEngine* engine;

		void getUserInput(std::string& input);
		void parseUserInput(const std::string& input);
		void drawPieces();
		void drawBoard();

	public:
		Game();
		~Game();

		void drawEverything();
		void run();


};

#endif /* GAME_H_ */
