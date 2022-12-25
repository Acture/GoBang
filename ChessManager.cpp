//
// Created by actur on 2022/12/25.
//

#include "ChessManager.h"
#include "graph.h"


ChessManager* ChessManager::getInstance() {
	if (m_ChessManager == nullptr) {
		auto manager = new ChessManager();
		m_ChessManager = manager;
	}
	return m_ChessManager;
}

void ChessManager::delInstance() {
	if (m_ChessManager != nullptr) {
		delete m_ChessManager;
		m_ChessManager = nullptr;
	}
}

void ChessManager::start() {

}
