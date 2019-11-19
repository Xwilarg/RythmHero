#include "Scene.hpp"

namespace rythm
{
    void Scene::AddGameObject(std::unique_ptr<AGameObject> gameObject) noexcept
    {
        _gameObjects.push_back(std::move(gameObject));
    }

    void Scene::InvokeEvent(const sf::Event &event) noexcept
    {
        for (auto &go : _gameObjects)
            go->InvokeEvent(event);
    }
}