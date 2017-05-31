class Controller: public core::SIMD32, public core::EventListener, public core::Getter<Controller> {
    public:
        Controller(){set(*this);}

        int onMouseMove(const core::eventInfo& e) override;
};
