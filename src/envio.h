#ifndef ENVIO_H
#define ENVIO_H

class envio{
    
    protected:
    envio() { }

    public:
    ~envio() {}
    virtual float calculoEnvio() = 0;   
};

#endif