#pragma once

#pragma comment(lib, "irrKlang.lib")

# include <irrKlang.h>
# include <string>

namespace rythm
{
    class MusicLoader final
    {
    public:
        MusicLoader() = delete;
        ~MusicLoader() noexcept;
        static bool LoadMusic(const std::string& path) noexcept;
        static void PlayMusic() noexcept;
        static void StopMusic() noexcept;

    private:
        static irrklang::ISoundEngine* _engine;
        static irrklang::ISound* _music;
        static std::string _path;
    };
}