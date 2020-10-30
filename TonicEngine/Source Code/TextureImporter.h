#ifndef __TEXTURE_IMPORTER_H__
#define __TEXTURE_IMPORTER_H__

#include "Globals.h"
#include "Module.h"

#define CHECKERS_WIDTH 128
#define CHECKERS_HEIGHT 128

struct texData {
	uint id;
	uint width;
	uint height;
	string path;
};

class TextureImporter : public Module
{
public:

	TextureImporter(Application* app, bool start_enabled = true);
	~TextureImporter();

	bool Init();
	bool Start();
	update_status Update(float dt);
	bool CleanUp();

public:

	uint CreateTexture(const void* texture, const char* path, uint width, uint height, int format, uint format2) const;
	uint CreateEmptyTexture() const;

	uint GenerateTexture(const char* path);
	void GenerateCheckersTexture();

	uint id_checkers = 0;
	//texData tData;

	uint texture;
	uint checker_texture;

	uint wi;
	uint he;

	// Textures
	texData CheckersTexture;
	texData AssignedTexture;
};

#endif