class Aquecedor{
  private:
    int temperatura;
    int min_temp;
    int max_temp;
    int inc;
  public:
    Aquecedor();
    // Aquecedor(int);
    Aquecedor(int, int);
    int get_temperatura();
    void resfriar();
    void aquecer();
};
