#pragma once

# include <SFML/Window/Event.hpp>
# include <SFML/Graphics/RectangleShape.hpp>
# include <SFML/Graphics/RenderWindow.hpp>

namespace rythm
{
    class AGameObject
    {
    public:
        AGameObject(const sf::Vector2f& position, const sf::Vector2f& size, const sf::Color& color) noexcept;
        virtual ~AGameObject() noexcept = default;
        virtual void InvokeEvent(const sf::Event& event) noexcept;
        virtual void Draw(sf::RenderWindow &window) const noexcept;

    protected:
        const sf::Vector2f& GetSize() const noexcept;
        const sf::Vector2f& GetPosition() const noexcept;

    private:
        sf::RectangleShape _shape;
    };
}