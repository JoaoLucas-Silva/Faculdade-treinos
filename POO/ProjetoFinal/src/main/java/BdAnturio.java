// João Lucas Silva de Souza; RA: 2649250

import java.util.List;
import java.util.ArrayList;

import javax.swing.JOptionPane;

public class BdAnturio{
    private Anturio ant;
    // Passos para singleton
    private List<Anturio> bdAnt;
    private static BdAnturio oprAntU;
    
    // Passos para singleton
    private BdAnturio(){
        ant = new Anturio();
        bdAnt = new ArrayList<Anturio>();
    }
    // Passos para singleton (fim)
    public static BdAnturio geraOprAnt(){
        if(oprAntU == null){
            oprAntU = new BdAnturio();
        }
        return oprAntU;
    }
    
    public List<Anturio> getBdAnt(){
            return bdAnt;
    }
	
        // consAntNome
	public Anturio consAntNome(Anturio ant){
		for(int i = 0; i < bdAnt.size(); i++){
			if(ant.getNome().equals(bdAnt.get(i).getNome())){
				return bdAnt.get(i);
			}
		}
		return null;
	}	
        
        // insAnt
	public Anturio insAnt(Anturio ant){
		if(consAntNome(ant)== null){
			bdAnt.add(ant);
			return ant;
		}
		else{
			return null;
		}
	}
        
        // removeAntNome
	public Anturio delAntNome(Anturio ant){
            Anturio ant1 = consAntNome(ant);
            if(ant1 != null){
                bdAnt.remove(ant1);
                return null;
            }
            else{
                return ant;
            }
	}
        
        // atualizaAntNome
	public Anturio atualizaAntNome(Anturio ant){
		for(int i = 0; i < bdAnt.size(); i++){
			if(ant.getNome().equalsIgnoreCase(bdAnt.get(i).getNome())){
                            ant = bdAnt.get(i);

                            String nome = JOptionPane.showInputDialog(
                                    null,
                                    "Informe o novo NOME",
                                    "Atulizar dados",
                                    JOptionPane.INFORMATION_MESSAGE
                            );
                            ant.setNome(nome);
                            bdAnt.set(i, ant);  
                            return bdAnt.get(i);
			}
		}
                return null;
	}
}