#include "AClickableGameObject.hpp"

namespace rythm
{
	AClickableGameObject::AClickableGameObject(const sf::Vector2f& position, const sf::Vector2f& size, const sf::Color& color) noexcept
		: AGameObject(position, size, color)
	{ }

	void AClickableGameObject::InvokeEvent(const sf::Event& event) noexcept
	{
		if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
		{
			auto size = GetSize();
			auto pos = GetPosition();
			int mouseX = event.mouseButton.x;
			int mouseY = event.mouseButton.y;
			int sizeX = static_cast<int>(size.x);
			int sizeY = static_cast<int>(size.y);
			int posX = static_cast<int>(pos.x);
			int posY = static_cast<int>(pos.y);
			if (mouseX > posX && mouseX < posX + sizeX
			&& mouseY > posY && mouseY < posY + sizeY)
			{
				OnClick();
			}
		}
	}
}