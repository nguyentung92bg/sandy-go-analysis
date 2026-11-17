// Namespace: Dino.BusSand.View
public sealed class ArtPackData : ScriptableObject // TypeDefIndex: 8413
{
	// Fields
	[Header("Camera (Demo / Main Camera)")]
	public Vector3 cameraPosition; // 0x18
	public Vector3 cameraEuler; // 0x24
	public float fieldOfView; // 0x30
	public float nearClip; // 0x34
	public float farClip; // 0x38
	public Color background; // 0x3C
	[Header("Static scenery (Demo / MainGame renderers)")]
	public List<ArtPackData.Piece> scenery; // 0x50
	[Header("Board (Demo / MainGame / Frame + its Painting quad)")]
	public Vector3 framePosition; // 0x58
	public Quaternion frameRotation; // 0x64
	public Vector2 paintingSize; // 0x74
	public float boardSurfaceZ; // 0x7C
	[Header("Road queue / parking spawn (Demo / MainGame / Queue, Spawn)")]
	public float queueZ; // 0x80
	public float queueScale; // 0x84
	public float spawnZ; // 0x88
	public float spawnScale; // 0x8C
	[Header("Vehicles (MainAssets / Prefabs)")]
	public GameObject car; // 0x90
	[Header("Vehicles (MainAssets / Prefabs)")]
	public GameObject vans; // 0x98
	[Header("Vehicles (MainAssets / Prefabs)")]
	public GameObject bus; // 0xA0
	[Header("Mechanics (MainAssets / Prefabs, art 2026-10-21)")]
	public GameObject fireTruck; // 0xA8
	[Header("Mechanics (MainAssets / Prefabs, art 2026-10-21)")]
	public GameObject chain; // 0xB0
	[Header("Mechanics (MainAssets / Prefabs, art 2026-10-21)")]
	public GameObject gasStation; // 0xB8
	[Header("Mechanics (MainAssets / Prefabs, art 2026-10-21)")]
	public GameObject garage; // 0xC0
	public GameObject[] locks; // 0xC8
	public GameObject[] keys; // 0xD0
	public Mesh highwayModule; // 0xD8
	public Mesh highwayStart; // 0xE0
	public Mesh highwayEnd; // 0xE8
	public Material highwayMaterial; // 0xF0
	public GameObject basement; // 0xF8
	[Header("Boosters (MainAssets / Prefabs)")]
	public GameObject claw; // 0x100
	[Header("Palette (DemoScripts / Color Palette)")]
	public List<ArtPackData.Swatch> palette; // 0x108
	[Header("Rendering: index of the pack's renderer (Settings/Renderer, DNAA anti-aliasing) in the project URP asset")]
	public int rendererIndex; // 0x110

	// Methods

	// RVA: 0x2390A44 Offset: 0x238CA44 VA: 0x2390A44
	public GameObject Prefab(BusKind k) { }

	// RVA: 0x2390A68 Offset: 0x238CA68 VA: 0x2390A68
	public void .ctor() { }
}

