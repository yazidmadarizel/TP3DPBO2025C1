class BaseComponent:
    def __init__(self, id="", warranty_months=0):
        self.id = id
        self.warranty_months = warranty_months

    def set_id(self, id):
        self.id = id

    def set_warranty_months(self, warranty_months):
        self.warranty_months = warranty_months

    def get_id(self):
        return self.id

    def get_warranty_months(self):
        return self.warranty_months

    def display_info(self):
        print(f"ID: {self.id}, Warranty: {self.warranty_months} months")

