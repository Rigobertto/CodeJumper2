#include "BackgroundHome.h"

// ---------------------------------------------------------------------------------

BackgroundHome::BackgroundHome()
{
    MoveTo(window->CenterX(), window->CenterY(), Layer::BACK);

    backgroundHome = new Sprite("Resources/spritesInit/telaInicio.png");

}

// ---------------------------------------------------------------------------------

BackgroundHome::~BackgroundHome()
{
    delete backgroundHome;
}

// -------------------------------------------------------------------------------

void BackgroundHome::Update()
{
    // move sprites com velocidades diferentes
    //yF += 200 * gameTime;
}

// -------------------------------------------------------------------------------

void BackgroundHome::Draw()
{
    // desenha pano de fundo
    backgroundHome->Draw(window->CenterX(), window->CenterY(), Layer::BACK);

   
}

// -------------------------------------------------------------------------------
