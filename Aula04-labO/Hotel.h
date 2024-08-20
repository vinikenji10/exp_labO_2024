/*
 * Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 */

#define MAXIMO_DE_RESERVAS 10

class Hotel {
    /*
     * Os atributos devem ser acessiveis somente internamente ao escopo
     * da classe
     */

    /*
     * Os metodos devem ser acessíveis de fora do escopo da classe
     */
    bool adicionar(Reserva* reserva);

    bool estaDisponivel(int quarto, int inicio, int fim);

    Reserva* getReserva(int i);
    
    void imprimir();
};