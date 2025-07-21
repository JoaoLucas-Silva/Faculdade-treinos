// João Lucas Silva de Souza; RA: 2649250

import java.util.ArrayList;
import java.util.List;

public class BancoVeic {

    // Especificação (b): Duas Collections, uma para cada tipo de veículo.
    private List<Passeio> listaPasseio = new ArrayList<>();
    private List<Carga> listaCarga = new ArrayList<>();

    // --- Início do Padrão Singleton ---
    private static BancoVeic banco;

    // Construtor privado para impedir a criação de instâncias fora desta classe.
    private BancoVeic() {}

    //MÉTODO SINGLETON
    public static BancoVeic getInstance() {
        if (banco == null) {
            banco = new BancoVeic();
        }
        return banco;
    }
    // --- Fim do Padrão Singleton ---


    // --- Início dos Métodos CRUD para Veículos de PASSEIO ---

    // Insere um veículo de passeio na coleção.
    public void inserePasseio(Passeio veiculoPasseio) {
        listaPasseio.add(veiculoPasseio);
    }

    
    // Consulta um veículo de passeio pela placa.
     
    public Passeio consultaPasseioPorPlaca(String placa) {
        for (Passeio p : listaPasseio) {
            if (p.getPlaca().equalsIgnoreCase(placa)) {
                return p;
            }
        }
        return null; // Retorna null se não encontrar
    }
    
    // Altera os dados de um veículo de passeio já existente.
    public void alteraPasseio(Passeio veiculoPasseioAtualizado) {
        for(int i = 0; i < listaPasseio.size(); i++){
            if(listaPasseio.get(i).getPlaca().equalsIgnoreCase(veiculoPasseioAtualizado.getPlaca())){
                listaPasseio.set(i, veiculoPasseioAtualizado);
                break; // Encerra o laço após encontrar e alterar
            }
        }
    }
    
    // Exclui um veículo de passeio da coleção.
    public void excluiPasseio(Passeio veiculoPasseio){
        listaPasseio.remove(veiculoPasseio);
    }
    
    // Retorna a lista completa de veículos de passeio para relatórios.
    public List<Passeio> getListaPasseio(){
        return this.listaPasseio;
    }


    // --- Início dos Métodos CRUD para Veículos de CARGA ---

    // Insere um veículo de carga na coleção.
    public void insereCarga(Carga veiculoCarga) {
        listaCarga.add(veiculoCarga);
    }

    // Consulta um veículo de carga pela placa.
    public Carga consultaCargaPorPlaca(String placa) {
        for (Carga c : listaCarga) {
            if (c.getPlaca().equalsIgnoreCase(placa)) {
                return c;
            }
        }
        return null;
    }

    // Altera os dados de um veículo de carga já existente.
    public void alteraCarga(Carga veiculoCargaAtualizado) {
        for(int i = 0; i < listaCarga.size(); i++){
            if(listaCarga.get(i).getPlaca().equalsIgnoreCase(veiculoCargaAtualizado.getPlaca())){
                listaCarga.set(i, veiculoCargaAtualizado);
                break;
            }
        }
    }
    
    // Exclui um veículo de carga da coleção.
    public void excluiCarga(Carga veiculoCarga){
        listaCarga.remove(veiculoCarga);
    }
    
    // Retorna a lista completa de veículos de carga para relatórios.
    public List<Carga> getListaCarga(){
        return this.listaCarga;
    }

}