#pragma once
#include <SFML/System/String.hpp>
#include "Gameplay/StickCollection/StickModelCollection.h"
#include "Gameplay/StickCollection/StickCollectionController.h"

namespace Gameplay
{
	using namespace Collection;

	class GameplayController;

	class GameplayService
	{
	private:
		GameplayController* gameplay_controller;
		StickCollectionController* collection_controller;

		void initializeRandomSeed();

	public:
		GameplayService();
		~GameplayService();

		void initialize();
		void update();
		void render();

		void reset();

		void searchElement(Collection::SearchType search_type);

		Collection::SearchType getCurrentSearchType();

		int getNumberOfSticks();

	};


}