#pragma once
#include <sfml/Graphics.hpp>

namespace Gameplay
{
    namespace Cell
    {
        class CellView;
        class CellModel;
        enum class CellState;
        enum class CellValue;

        class CellController
        {
        private:
            CellView* cell_view;
            CellModel* cell_model;

            void destroy();

        public:
            CellController();
            ~CellController();

            void initialize();
            void update();
            void render();

            CellState getCellState() const;
            CellValue getCellValue() const;
            sf::Vector2i getCellPosition();
            void reset();
        };
    }
}