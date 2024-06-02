#pragma once

static class Game {
    public:
        GameUi gameUi;

        void initUi();
        void run();
    
    private:
        void getRefreshRation();
};
