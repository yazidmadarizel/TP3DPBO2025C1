class BaseComponent {
    private String id;
    private int warrantyMonths;

    public BaseComponent() {
        this.id = "";
        this.warrantyMonths = 0;
    }

    public BaseComponent(String id, int warrantyMonths) {
        this.id = id;
        this.warrantyMonths = warrantyMonths;
    }

    public void setId(String id) {
        this.id = id;
    }

    public void setWarrantyMonths(int warrantyMonths) {
        this.warrantyMonths = warrantyMonths;
    }

    public String getId() {
        return id;
    }

    public int getWarrantyMonths() {
        return warrantyMonths;
    }

    public void displayInfo() {
        System.out.println("ID: " + id + ", Warranty: " + warrantyMonths + " months");
    }
}
