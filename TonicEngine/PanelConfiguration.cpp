#include "Application.h"
#include "PanelConfiguration.h"
#include "ModuleGUI.h"
#include "ModuleWindow.h"

#include "SDL/include/SDL_opengl.h"
#include "imgui-1.78/imgui_impl_sdl.h"

#include "glew/include/GL/glew.h"
#include <gl/GL.h>
#include <gl/GLU.h>


PanelConfiguration::PanelConfiguration() : PanelManager()
{
	
}

PanelConfiguration::~PanelConfiguration()
{
}

bool PanelConfiguration::Start()
{
	return true;
}

bool PanelConfiguration::Draw()
{
	if (App->gui->configPanel_visible)
	{
		//ImVec4 clear_color = ImVec4(0.15f, 0.15f, 0.15f, 0.50f);
		//static float f = 0.0f;
		//static int counter = 0;

		//ImGui::Begin("Custom Window");                          // Create a window called "Hello, world!" and append into it.

		//ImGui::Text("Welcome to 3D TonicEngine");               // Display some text (you can use a format strings too)
		////ImGui::Checkbox("Demo Window", &show_demo_window);      // Edit bools storing our window open/close state
		////ImGui::Checkbox("Another Window", &show_another_window);

		////ImGui::SliderFloat("float", &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
		////ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color

		////if (ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
		////	counter++;
		////ImGui::SameLine();
		////ImGui::Text("counter = %d", counter);

		////// Random Number Generator
		//////if (ImGui::Button("Random"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
		//////	App->gui->rand = GenerateRandomBetween(100);
		//////ImGui::SameLine();
		//////ImGui::Text("%d", rand);


		//ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
		//ImGui::End();
	}

	return true;
}
