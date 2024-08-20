/*
 * Coloque a definicao da classe aqui. Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 *
 *  Os atributos devem ser acessiveis somente internamente ao escopo
 *  da classe
 */
class Reserva
{
private:
    int quarto;
    int inicio = 0;
    int fim = 0;

public:
    void setQuarto(int numeroDoQuarto);
    void setInicio(int inicio);
    void setFim(int fim);
    
    int getInicio();
    int getFim();
    int getQuarto();
    double getPreco();
    
    void imprimir();
};