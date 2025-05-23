#pragma once
#include<SFML/Graphics.hpp>

namespace Gameplay
{
	namespace Collection
	{
		enum class SearchType
		{
			LINEAR_SEARCH,
			BINARY_SEARCH,
		};

		class StickModelCollection
		{
		private:


		public:

			const float max_element_height = 820.f;
			float elements_spacing = 25.f;
			const float element_y_position = 1020.f;
			float space_percentage = 0.50f;

			const sf::Color element_color = sf::Color::White;
			const sf::Color search_element_color = sf::Color::Blue;
			const sf::Color found_element_color = sf::Color::Green;
			const sf::Color processing_element_color = sf::Color::Red;

			int linear_search_delay = 120;
			int binary_search_delay = 120;
			int number_of_elements = 100;


			StickModelCollection();
			~StickModelCollection();

			void initialize();
			void update();

			void setElementSpacing(float space);

		};
	}
}