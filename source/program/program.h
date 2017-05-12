class Towerdefense: public core::Module {
    private:
        MainWindow wnd;
    public:
        int onLoad() override;
        int onDispose() override;
        int onStart() override;
        int onStop() override;
        int main() override;
};
