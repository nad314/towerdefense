class MainWindow: public core::Form {
    private:
    public:
        void onOpening() override;
        void onOpened() override;
        void onClosing() override;

        int onPaint(const core::eventInfo& e) override;
};
