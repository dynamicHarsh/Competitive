import javax.swing.*;
import java.awt.*;

public class ImageApplet extends JFrame {
    private Image img;

    public ImageApplet() {
        
        setTitle("Image Viewer");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        
        ImageIcon icon = new ImageIcon("D:\\Files\\Documents\\GitHub\\Competitive\\AdventOfCode2024\\sih.jpg"); 
        img = icon.getImage();
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g); 
        if (img != null) {
           
            g.drawImage(img, 50, 50, this);
            g.drawString("Image loaded successfully!", 100, 250);
        } else {
            g.drawString("Failed to load image!", 50, 50);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            ImageApplet app = new ImageApplet();
            app.setVisible(true);
        });
    }
}
