public class TstPes {
    public static void main(String[] args) {
        Pessoa p1 = new Pessoa();
        Leitura4 l = Leitura4.geraLeitura();
        
        p1.setCpf(Integer.parseInt(l.entDados("\nCpf: ")));
        p1.setNome(l.entDados("\nNome: "));
        
        System.out.println("\nCpf: "+p1.getNome());
        System.out.println("\nNome: "+p1.getCpf());
    }
}
