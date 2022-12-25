//
// Created by actur on 2022/12/25.
//

#ifndef GOBANG_CHESSMANAGER_H
#define GOBANG_CHESSMANAGER_H


#include <memory>

class ChessManager {
	private:
		ChessManager() = default;
		~ChessManager() = default;
		ChessManager(const ChessManager&);
		ChessManager& operator=(const ChessManager&);
		
	private:
		static ChessManager* m_ChessManager;
	
	public:
		static ChessManager* getInstance();
		static void delInstance();
		void start();
		void stop();
		void reset();
		bool isValid();
		
};


#endif //GOBANG_CHESSMANAGER_H
