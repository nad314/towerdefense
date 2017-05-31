class Towerdefense: public core::SIMD32, public core::Module {
    private:
        Controller c;
        MainWindow wnd;
    public:
        int onLoad() override;
        int onDispose() override;
        int onStart() override;
        int onStop() override;
        int main() override;
};
