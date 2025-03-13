#include "../../header/Gameplay/Cell/CellModel.h"

namespace Gameplay
{
	namespace Cell
	{
		CellModel::CellModel() {}

		CellModel::~CellModel() = default;

		CellState CellModel::getCellState() const { return cell_state; }

		void CellModel::setCellState(CellState state) { cell_state = state; }

		CellValue CellModel::getCellValue() const { return cell_value; }

		void CellModel::setCellValue(CellValue value) { cell_value = value; }

		sf::Vector2i CellModel::getCellPosition() const { return position; }

		void CellModel::setCellPosition(sf::Vector2i grid_position) { position = grid_position; }

		void CellModel::reset()
		{
			cell_state = CellState::HIDDEN;
			cell_value = CellValue::EMPTY;
		}
	}
}