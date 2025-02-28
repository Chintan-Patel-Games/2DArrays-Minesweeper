#pragma once
#include "../../header/UI/UIElement/ImageView.h"

namespace Gameplay
{
    namespace Board
    {
        class BoardController;

        class BoardView
        {
        private:
            UI::UIElement::ImageView * board_image;
            UI::UIElement::ImageView* background_image;

            const float board_width = 866.f;
            const float board_height = 1080.f;

            const float background_alpha = 85.f;

            BoardController* board_controller;

            void initializeBackgroudImage();
            void initializeBoardImage();
			void destroy();

        public:
            BoardView(BoardController* controller);
            ~BoardView();

            void initialize();
            void update();
            void render();
        };
    }
}