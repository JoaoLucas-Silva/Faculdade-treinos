public class Pessoa {
    private int cpf;
    private String nome;

    public Pessoa() {
        int cpf = 0;
        String nome = "";
    }

    public int getCpf() {
        return cpf;
    }

    public void setCpf(int cpf) {
        this.cpf = cpf;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
}
