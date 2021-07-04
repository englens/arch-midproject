#ifdef WORLDMAPGEN_EXPORTS
#define WORLDMAPGEN_API __declspec(dllexport)
#else
#define WORLDMAPGEN_API __declspec(dllimport)
#endif

// This class is exported from the dll
class WORLDMAPGEN_API WorlMapLib {
public:
	WorlMapLib(void);
};

extern WORLDMAPGEN_API int worldMapID;
