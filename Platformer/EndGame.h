

#ifndef _CODEJUMPER_BACKGROUND_H_
#define _CODEJUMPER_BACKGROUND_H_

// ---------------------------------------------------------------------------------

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"  
#include "Scene.h"

// ---------------------------------------------------------------------------------

class EndGame : public Game
{
private:
                     // posi��o horizontal dos sprites
    Image * img;
    Sprite * sky;                       // fundo est�tico
    Sprite * backgroundHome;

public:
    //static Scene * sceneEnd;
                     
    //Sprite * backgroundHome;
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                         // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif
