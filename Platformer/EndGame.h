

#ifndef _CODEJUMPER_BACKGROUND_H_
#define _CODEJUMPER_BACKGROUND_H_

// ---------------------------------------------------------------------------------

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"  
#include "Scene.h"

// ---------------------------------------------------------------------------------

class EndGame : public Game
{
private:
                     // posição horizontal dos sprites
    Image * img;
    Sprite * sky;                       // fundo estático
    Sprite * backgroundHome;

public:
    //static Scene * sceneEnd;
                     
    //Sprite * backgroundHome;
    void Init();                    // inicialização
    void Update();                  // atualização
    void Draw();                    // desenho
    void Finalize();                         // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif
