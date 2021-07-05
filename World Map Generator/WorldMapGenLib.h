#ifdef WORLDMAPGEN_EXPORTS
#define WORLDMAPGEN_API __declspec(dllexport)
#else
#define WORLDMAPGEN_API __declspec(dllimport)
#endif

// This class is exported from the dll
class WORLDMAPGEN_API WorldMapLib {
private: 
	int worldMapID;
public:
	WorldMapLib(void);
	void DrawWorld();
};
