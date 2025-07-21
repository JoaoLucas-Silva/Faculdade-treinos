// João Lucas Silva de Souza; RA: 2649250

import java.util.Date; 
import javax.swing.JOptionPane;

public class FormPrincipal extends javax.swing.JFrame {

    private static FormPrincipal instance;

    // Torne o construtor PRIVADO
    private FormPrincipal() {
        initComponents();
        setLocationRelativeTo(null); // Centraliza a janela
    }

    //MÉTODO SINGLETON
    public static FormPrincipal getInstance() {
        if (instance == null) {
            instance = new FormPrincipal();
        }
        return instance;
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        jMenu2 = new javax.swing.JMenu();
        jMenuBar3 = new javax.swing.JMenuBar();
        jMenu5 = new javax.swing.JMenu();
        jMenu6 = new javax.swing.JMenu();
        jMenuBar2 = new javax.swing.JMenuBar();
        jMenu3 = new javax.swing.JMenu();
        ItemMenuPasseio = new javax.swing.JMenuItem();
        ItemMenuCarga = new javax.swing.JMenuItem();
        jMenu4 = new javax.swing.JMenu();
        ItemMenuRelatorio = new javax.swing.JMenuItem();
        MenuSair = new javax.swing.JMenu();
        ItemMenuSair = new javax.swing.JMenuItem();

        jMenu1.setText("File");
        jMenuBar1.add(jMenu1);

        jMenu2.setText("Edit");
        jMenuBar1.add(jMenu2);

        jMenu5.setText("File");
        jMenuBar3.add(jMenu5);

        jMenu6.setText("Edit");
        jMenuBar3.add(jMenu6);

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jMenu3.setText("Cadastros");

        ItemMenuPasseio.setText("Veículos de Passeio");
        ItemMenuPasseio.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ItemMenuPasseioActionPerformed(evt);
            }
        });
        jMenu3.add(ItemMenuPasseio);

        ItemMenuCarga.setText("Veículos de Carga");
        ItemMenuCarga.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ItemMenuCargaActionPerformed(evt);
            }
        });
        jMenu3.add(ItemMenuCarga);

        jMenuBar2.add(jMenu3);

        jMenu4.setText("Relatórios");

        ItemMenuRelatorio.setText("Relatório Geral");
        ItemMenuRelatorio.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ItemMenuRelatorioActionPerformed(evt);
            }
        });
        jMenu4.add(ItemMenuRelatorio);

        jMenuBar2.add(jMenu4);

        MenuSair.setText("Saída");

        ItemMenuSair.setText("Sair do Sistema");
        ItemMenuSair.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ItemMenuSairActionPerformed(evt);
            }
        });
        MenuSair.add(ItemMenuSair);

        jMenuBar2.add(MenuSair);

        setJMenuBar(jMenuBar2);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 277, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ItemMenuPasseioActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ItemMenuPasseioActionPerformed
         FormPasseio.getInstance().setVisible(true);
    }//GEN-LAST:event_ItemMenuPasseioActionPerformed

    private void ItemMenuCargaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ItemMenuCargaActionPerformed
         FormCarga.getInstance().setVisible(true);
    }//GEN-LAST:event_ItemMenuCargaActionPerformed

    private void ItemMenuRelatorioActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ItemMenuRelatorioActionPerformed
       FormRelatorioVeiculos.getInstance().setVisible(true);
    }//GEN-LAST:event_ItemMenuRelatorioActionPerformed

    private void ItemMenuSairActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ItemMenuSairActionPerformed
        int resposta = JOptionPane.showConfirmDialog(
        null,
        "Deseja realmente sair do sistema?", 
        "Confirmação de Saída", 
        JOptionPane.YES_NO_OPTION
      );

    if (resposta == JOptionPane.YES_OPTION) {
        System.exit(0); // Fecha a aplicação
    }
    }//GEN-LAST:event_ItemMenuSairActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FormPrincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FormPrincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FormPrincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FormPrincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FormPrincipal().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenuItem ItemMenuCarga;
    private javax.swing.JMenuItem ItemMenuPasseio;
    private javax.swing.JMenuItem ItemMenuRelatorio;
    private javax.swing.JMenuItem ItemMenuSair;
    private javax.swing.JMenu MenuSair;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu2;
    private javax.swing.JMenu jMenu3;
    private javax.swing.JMenu jMenu4;
    private javax.swing.JMenu jMenu5;
    private javax.swing.JMenu jMenu6;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JMenuBar jMenuBar2;
    private javax.swing.JMenuBar jMenuBar3;
    // End of variables declaration//GEN-END:variables
}
