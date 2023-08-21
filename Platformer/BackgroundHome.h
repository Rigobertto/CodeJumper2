

#ifndef _CODEJUMPER_BACKGROUNDOME_H_
#define _CODEJUMPER_BACKGROUNDHOME_H_

// ---------------------------------------------------------------------------------

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // background � composto por sprites

// ---------------------------------------------------------------------------------

class BackgroundHome : public Object
{
private:
                          // posi��o horizontal dos sprites
    //Image * imgF;                       // imagem de fundo traseira    

    Sprite * backgroundHome;                       // fundo est�tico
                // pano de fundo din�mico (traseiro 2)

public:
    BackgroundHome();                       // construtor
    ~BackgroundHome();                      // destrutor
    
    void Update();                      // atualiza��o do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif