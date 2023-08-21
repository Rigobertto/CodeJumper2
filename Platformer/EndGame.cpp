#include "Engine.h"
#include "EndGame.h"
#include "Resources.h"
#include "Obstacle.h"

// -----------------------------------------------------------------------------

//Scene* Platformer::scene = nullptr;
//Obstacle* obstacle = nullptr;                // um obstáculo do jogo
//list<Obstacle*> objects;                      // lista de obstáculos em movimento

// -----------------------------------------------------------------------------

void EndGame::Init()
{
    // cria cena do jogo
    //scene = new Scene();

}

// ------------------------------------------------------------------------------

void EndGame::Update()
{
    // sai com o pressionar do ESC
    if (window->KeyDown(VK_ESCAPE))
        window->Close();

    // atualiza cena do jogo
    //sceneEnd->Update();
    //sceneEnd->CollisionDetection();


}

// ------------------------------------------------------------------------------

void EndGame::Draw()
{
    //sceneEnd->Draw();
}

// ------------------------------------------------------------------------------

void EndGame::Finalize()
{
    //delete sceneEnd;
}