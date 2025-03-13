#pragma once
#include "../../header/UI/UIElement/ButtonView.h"

namespace Gameplay
{
    namespace Cell
    {
        class CellController;
        enum class CellState;
        enum class CellValue;

        class CellView
        {
        private:
            const int tile_size = 32;
            int slice_count = 12;

            UI::UIElement::ButtonView* cell_button;
            CellController* cell_controller;

            void initializeButtonImage(float width, float height);

        public:
            CellView(CellController* controller);
            ~CellView();

            void setCellTexture();

            void initialize();
            void update();
            void render();
        };
    }
}