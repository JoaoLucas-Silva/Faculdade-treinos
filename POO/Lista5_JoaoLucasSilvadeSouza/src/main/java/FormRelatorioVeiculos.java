// João Lucas Silva de Souza; RA: 2649250

import java.util.List;
import javax.swing.table.DefaultTableModel;

public class FormRelatorioVeiculos extends javax.swing.JFrame {

    private static FormRelatorioVeiculos instance;

    
    // Construtor privado
    private FormRelatorioVeiculos() {
        initComponents();
        setLocationRelativeTo(null);
        // Vamos chamar o método para carregar os dados aqui depois
        carregarDados(); 
    }

    //MÉTODO SINGLETON
    public static FormRelatorioVeiculos getInstance() {
        if (instance == null) {
            instance = new FormRelatorioVeiculos();
        }
        instance.carregarDados(); // Garante que os dados são sempre os mais recentes ao abrir
        return instance;
    }
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        abasRelatorio = new javax.swing.JTabbedPane();
        jScrollPane4 = new javax.swing.JScrollPane();
        tblPasseio = new javax.swing.JTable();
        jScrollPane5 = new javax.swing.JScrollPane();
        tblCarga = new javax.swing.JTable();
        botaoAtualizar = new javax.swing.JButton();

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane1.setViewportView(jTable1);

        jButton1.setText("jButton1");

        jButton2.setText("jButton2");

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        tblPasseio.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane4.setViewportView(tblPasseio);

        abasRelatorio.addTab("Veículos de Passeio", jScrollPane4);

        tblCarga.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane5.setViewportView(tblCarga);

        abasRelatorio.addTab("Veículos de Carga", jScrollPane5);

        botaoAtualizar.setText("ATUALIZAR");
        botaoAtualizar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botaoAtualizarActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(abasRelatorio, javax.swing.GroupLayout.DEFAULT_SIZE, 514, Short.MAX_VALUE))
            .addGroup(layout.createSequentialGroup()
                .addGap(212, 212, 212)
                .addComponent(botaoAtualizar)
                .addGap(0, 0, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(abasRelatorio, javax.swing.GroupLayout.DEFAULT_SIZE, 377, Short.MAX_VALUE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(botaoAtualizar)
                .addGap(8, 8, 8))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void botaoAtualizarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoAtualizarActionPerformed
         carregarDados();
    }//GEN-LAST:event_botaoAtualizarActionPerformed

    public void carregarDados() {
    carregarTabelaPasseio();
    carregarTabelaCarga();
}

// Método para preencher a tabela de veículos de passeio
private void carregarTabelaPasseio() {
    DefaultTableModel modelo = new DefaultTableModel();
    modelo.addColumn("Placa");
    modelo.addColumn("Marca");
    modelo.addColumn("Modelo");
    modelo.addColumn("Qtd. Passageiros");

    List<Passeio> listaPasseio = BancoVeic.getInstance().getListaPasseio();

    for (Passeio p : listaPasseio) {
        modelo.addRow(new Object[]{
            p.getPlaca(),
            p.getMarca(),
            p.getModelo(),
            p.getQtdePassageiro()
        });
    }
    tblPasseio.setModel(modelo);
}

// Método para preencher a tabela de veículos de carga
private void carregarTabelaCarga() {
    DefaultTableModel modelo = new DefaultTableModel();
    modelo.addColumn("Placa");
    modelo.addColumn("Marca");
    modelo.addColumn("Modelo");
    modelo.addColumn("Tara (kg)");
    modelo.addColumn("Carga Máx. (kg)");

    List<Carga> listaCarga = BancoVeic.getInstance().getListaCarga();

    for (Carga c : listaCarga) {
        modelo.addRow(new Object[]{
            c.getPlaca(),
            c.getMarca(),
            c.getModelo(),
            c.getTara(),
            c.getCargaMax()
        });
    }
    tblCarga.setModel(modelo);
}

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTabbedPane abasRelatorio;
    private javax.swing.JButton botaoAtualizar;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane4;
    private javax.swing.JScrollPane jScrollPane5;
    private javax.swing.JTable jTable1;
    private javax.swing.JTable tblCarga;
    private javax.swing.JTable tblPasseio;
    // End of variables declaration//GEN-END:variables
}
