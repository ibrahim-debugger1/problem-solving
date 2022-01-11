package helloo;

import java.awt.Dimension;
import java.awt.Font;
import java.time.LocalDateTime;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextPane;


public class Helloo {

   
    public static void main(String[] args) throws InterruptedException {
        JLabel jtp = new JLabel("go and run for three min");
        jtp.setFont(new Font("Serif", Font.PLAIN, 100));
        jtp.setSize(new Dimension(1000, 1000));
        jtp.setPreferredSize(new Dimension(1000, 1000));
        while(true){
            Thread.sleep(((60-LocalDateTime.now().getMinute())*60)*1000);
            JOptionPane.showMessageDialog(null,jtp,"get up and run for a three min",JOptionPane.INFORMATION_MESSAGE);
        }
    }
}
