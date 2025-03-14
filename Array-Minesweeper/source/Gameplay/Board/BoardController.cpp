#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Board/BoardView.h"

namespace Gameplay
{
	namespace Board
	{
		using namespace Cell;

		BoardController::BoardController()
		{
			board_view = new BoardView(this);
			createBoard();
		}

		BoardController::~BoardController() { destroy(); }

		void BoardController::createBoard() { cell_controller = new CellController(); }

		void BoardController::initializeCells()
		{
			float cell_width = board_view->getCellWidth();
			float cell_height = board_view->getCellHeight();

			cell_controller->initialize(cell_width, cell_height);
		}

		void BoardController::resetBoard() {}

		void BoardController::initialize()
		{
			board_view->initialize();
			initializeCells();
		}

		void BoardController::update()
		{
			board_view->update();
			cell_controller->update();
		}

		void BoardController::render()
		{
			board_view->render();
			cell_controller->render();
		}

		void BoardController::reset() { cell_controller->reset(); }

		void BoardController::deleteBoard() { delete(cell_controller);  }

		void BoardController::destroy()
		{
			deleteBoard();
			delete(board_view);
		}
	}
}