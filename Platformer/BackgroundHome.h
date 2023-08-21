

#ifndef _CODEJUMPER_BACKGROUNDOME_H_
#define _CODEJUMPER_BACKGROUNDHOME_H_

// ---------------------------------------------------------------------------------

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // background é composto por sprites

// ---------------------------------------------------------------------------------

class BackgroundHome : public Object
{
private:
                          // posição horizontal dos sprites
    //Image * imgF;                       // imagem de fundo traseira    

    Sprite * backgroundHome;                       // fundo estático
                // pano de fundo dinâmico (traseiro 2)

public:
    BackgroundHome();                       // construtor
    ~BackgroundHome();                      // destrutor
    
    void Update();                      // atualização do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif