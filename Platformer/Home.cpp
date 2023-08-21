/**********************************************************************************
// Home (Código Fonte)
//
// Criação:     14 Fev 2013
// Atualização: 27 Set 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Tela de abertura do jogo
//
**********************************************************************************/

#include "Engine.h"
#include "Platformer.h"
#include "Home.h"
#include "Game.h"
#include "Resources.h"

// ------------------------------------------------------------------------------
Scene * Home::sceneStart = nullptr;

void Home::Init()
{
    sceneStart = new Scene();
    //backg = new Sprite("Resources/spritesInit/telaInicio.png");
    //tileset = new TileSet("Resources/PressEnter.png", 72, 48, 1, 5);
    //anim = new Animation(tileset, 0.180f, true);
    //MoveTo(window->CenterX(), window->CenterY(), Layer::BACK);
    backgroundHome = new BackgroundHome();
    sceneStart->Add(backgroundHome, STATIC);
    //platformer = new Platformer();
    
    
}

// ------------------------------------------------------------------------------

void Home::Update()
{
    // sai com o pressionar do ESC
    if (window->KeyPress(VK_ESCAPE))
        window->Close();

    // se a tecla ENTER for pressionada
    if (window->KeyPress(VK_RETURN))
    {
        //Platformer::audio->Stop(MENU);
        
        //platformer->Init();
    }
    else
    {
        //anim->NextFrame();
    }
}

// ------------------------------------------------------------------------------

void Home::Draw()
{
    //backgroundHome->Draw(window->CenterX(), window->CenterY(), Layer::BACK);
    //anim->Draw(545, 275);
    sceneStart->Draw();
}

// ------------------------------------------------------------------------------

void Home::Finalize()
{
    delete sceneStart;
    delete anim;
    delete tileset;
    delete backg;
    delete backgroundHome;
}

// ------------------------------------------------------------------------------
