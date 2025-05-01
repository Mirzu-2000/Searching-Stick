#pragma once

namespace Gameplay
{
	class GameplayController;

	class GameplayView
	{
	private:

		GameplayController* gameplay_controller;


	public:
		GameplayView(GameplayController* gameplay_controller);
		~GameplayView();

		void initialize();
		void update();
		void render();



	};
}