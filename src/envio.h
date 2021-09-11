#ifndef ENVIO_H
#define ENVIO_H

class Envio{
    
    protected:
    Envio() { }

    public:
    ~Envio() {}
    virtual float calculoEnvio() = 0;   
};

#endif