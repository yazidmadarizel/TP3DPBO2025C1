import java.util.ArrayList;
import java.util.List;

public class Case extends Komponen {
    private String formFactor;
    private List<String> supportedMotherboards;
    private int fanMounts;
    private boolean hasGlassPanel;

    public Case() {
        super();
        this.formFactor = "";
        this.supportedMotherboards = new ArrayList<>();
        this.fanMounts = 0;
        this.hasGlassPanel = false;
    }

    public Case(String id, int warrantyMonths, String merk, String nama, double harga,
                String formFactor, List<String> supportedMotherboards, int fanMounts, boolean hasGlassPanel) {
        super(id, warrantyMonths, merk, nama, harga);
        this.formFactor = formFactor;
        this.supportedMotherboards = (supportedMotherboards != null) ? new ArrayList<>(supportedMotherboards) : new ArrayList<>();
        this.fanMounts = fanMounts;
        this.hasGlassPanel = hasGlassPanel;
    }

    public void setFormFactor(String formFactor) {
        this.formFactor = formFactor;
    }

    public void setSupportedMotherboards(List<String> supportedMotherboards) {
        this.supportedMotherboards = new ArrayList<>(supportedMotherboards);
    }

    public void addSupportedMotherboard(String motherboardType) {
        this.supportedMotherboards.add(motherboardType);
    }

    public void setFanMounts(int fanMounts) {
        this.fanMounts = fanMounts;
    }

    public void setHasGlassPanel(boolean hasGlassPanel) {
        this.hasGlassPanel = hasGlassPanel;
    }

    public String getFormFactor() {
        return formFactor;
    }

    public List<String> getSupportedMotherboards() {
        return supportedMotherboards;
    }

    public int getFanMounts() {
        return fanMounts;
    }

    public boolean getHasGlassPanel() {
        return hasGlassPanel;
    }

    public void displayInfo() {
        super.displayInfo();
        System.out.println("Case Specs: " + formFactor + ", Fan Mounts: " + fanMounts);
        System.out.println("Glass Panel: " + (hasGlassPanel ? "Yes" : "No"));
        System.out.print("Supported Motherboards: ");
        System.out.println(String.join(", ", supportedMotherboards));
    }
}
