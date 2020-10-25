#ifndef __PANELCONSOLE_H__
#define __PANELCONSOLE_H__

#include "Application.h"
#include "ModuleGUI.h"


#include <list>

// Colors for console text
#define TEXT_CONSOLE_COLOR ImColor(192,192,192)
#define ERROR_CONSOLE_COLOR ImColor(220,20,60)

#define LOG_IMGUI_CONSOLE(text, ...) App->gui->LogConsole(text, __VA_ARGS__); 

class PanelConsole : public PanelManager
{
public:
	PanelConsole();
	~PanelConsole();

	bool Start();
	bool Draw();

private:
	void CreateLog(char* info);
	void PrintLogs();
	void EraseLogs();

	bool consoleEmpty = true;
	int maxLogs = 100;

	ImGuiTextBuffer     Buf;
	ImGuiTextFilter     Filter;
	ImVector<int>       LineOffsets;
	
	list<char*> consoleLogs;
};

#endif
