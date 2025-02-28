#include "../../header/Gameplay/GameplayService.h"

namespace Gameplay
{
	Gameplay::GameplayService::GameplayService() { gameplay_controller = nullptr; }

	Gameplay::GameplayService::~GameplayService() { destroy(); }

	void Gameplay::GameplayService::initialize()
	{
		gameplay_controller = new GameplayController();
		gameplay_controller->initialize();
	}

	void Gameplay::GameplayService::startGame() { gameplay_controller->reset(); }

	void Gameplay::GameplayService::update() { gameplay_controller->update(); }

	void Gameplay::GameplayService::render() { gameplay_controller->render();  }

	void Gameplay::GameplayService::destroy() { delete(gameplay_controller); }
}