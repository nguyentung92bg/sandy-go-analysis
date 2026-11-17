// Namespace: Dino.BusSand.View
public sealed class WorldView : MonoBehaviour // TypeDefIndex: 8519
{
	// Fields
	private StageLayout _L; // 0x20
	[CompilerGenerated]
	private Transform <Tunnel>k__BackingField; // 0x28
	[CompilerGenerated]
	private float <TunnelMinX>k__BackingField; // 0x30
	[CompilerGenerated]
	private float <TunnelMaxX>k__BackingField; // 0x34
	private MeshRenderer _trafficLight; // 0x38
	private int _lampState; // 0x40
	public static bool ShowTrafficLight; // 0x0
	public static bool ShowStreetProps; // 0x1
	public static readonly Color Plaza; // 0x4
	public static readonly Color PlazaFar; // 0x14
	public static readonly Color Asphalt; // 0x24
	public static readonly Color RoadColor; // 0x34
	public static readonly Color KerbColor; // 0x44
	public static readonly Color FrameOrange; // 0x54
	public static readonly Color Sky; // 0x64
	private List<Color> _hopperColors; // 0x48
	private bool _pack; // 0x50
	private readonly HashSet<Renderer> _unmerged; // 0x58

	// Properties
	public Transform Tunnel { get; set; }
	public float TunnelMinX { get; set; }
	public float TunnelMaxX { get; set; }
	private float BoardBaseZ { get; }
	public Vector3 CounterWorld { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24020D8 Offset: 0x23FE0D8 VA: 0x24020D8
	public Transform get_Tunnel() { }

	[CompilerGenerated]
	// RVA: 0x24020E0 Offset: 0x23FE0E0 VA: 0x24020E0
	private void set_Tunnel(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x24020E8 Offset: 0x23FE0E8 VA: 0x24020E8
	public float get_TunnelMinX() { }

	[CompilerGenerated]
	// RVA: 0x24020F0 Offset: 0x23FE0F0 VA: 0x24020F0
	private void set_TunnelMinX(float value) { }

	[CompilerGenerated]
	// RVA: 0x24020F8 Offset: 0x23FE0F8 VA: 0x24020F8
	public float get_TunnelMaxX() { }

	[CompilerGenerated]
	// RVA: 0x2402100 Offset: 0x23FE100 VA: 0x2402100
	private void set_TunnelMaxX(float value) { }

	// RVA: 0x2402108 Offset: 0x23FE108 VA: 0x2402108
	public static WorldView Create(Transform parent, StageLayout layout, List<Color> hopperColors) { }

	// RVA: 0x2402204 Offset: 0x23FE204 VA: 0x2402204
	private void Build() { }

	// RVA: 0x24022A8 Offset: 0x23FE2A8 VA: 0x24022A8
	public static void BuildPackScenery(Transform parent) { }

	// RVA: 0x24049A4 Offset: 0x24009A4 VA: 0x24049A4
	private static Material SlotMaterial(string slot) { }

	// RVA: 0x24054F0 Offset: 0x24014F0 VA: 0x24054F0
	private MeshRenderer Model(string name, Vector3 pos, Quaternion rot, Vector3 scale, bool castShadows = False) { }

	// RVA: 0x2405A18 Offset: 0x2401A18 VA: 0x2405A18
	private float get_BoardBaseZ() { }

	// RVA: 0x2402758 Offset: 0x23FE758 VA: 0x2402758
	private void BuildGround() { }

	// RVA: 0x2402B80 Offset: 0x23FEB80 VA: 0x2402B80
	private void BuildBackdrop() { }

	// RVA: 0x2406868 Offset: 0x2402868 VA: 0x2406868
	private Texture2D Tex(string n) { }

	// RVA: 0x2406938 Offset: 0x2402938 VA: 0x2406938
	private void FacingQuad(string name, Vector3 centre, Quaternion rot, float w, float h, Material mat, Rect uv) { }

	// RVA: 0x24061AC Offset: 0x24021AC VA: 0x24061AC
	private void Tree(Vector3 p, float s) { }

	// RVA: 0x2403938 Offset: 0x23FF938 VA: 0x2403938
	private void BuildBoardFrame() { }

	// RVA: 0x24070D0 Offset: 0x24030D0 VA: 0x24070D0
	public void SetTrafficLight(int state) { }

	// RVA: 0x2406C48 Offset: 0x2402C48 VA: 0x2406C48
	private void ProceduralFrame() { }

	// RVA: 0x2403C34 Offset: 0x23FFC34 VA: 0x2403C34
	private void BuildRoad() { }

	// RVA: 0x240894C Offset: 0x240494C VA: 0x240894C
	public void BuildPad(Vector3 min, Vector3 max, float laneW) { }

	// RVA: 0x240AAFC Offset: 0x2406AFC VA: 0x240AAFC
	private MeshRenderer PlanterModel(Vector3 pos, Quaternion rot, Vector3 scale) { }

	// RVA: 0x240A510 Offset: 0x2406510 VA: 0x240A510
	private static List<Vector3> Rounded(List<Vector3> q, float r, int seg) { }

	// RVA: 0x240AC64 Offset: 0x2406C64 VA: 0x240AC64
	public Vector3 get_CounterWorld() { }

	// RVA: 0x240ACAC Offset: 0x2406CAC VA: 0x240ACAC
	public void SetRoadLoad(int active, int capacity) { }

	// RVA: 0x2405C94 Offset: 0x2401C94 VA: 0x2405C94
	private MeshRenderer MeshObject(string name, Mesh mesh, Material mat, bool castShadow, bool receive) { }

	// RVA: 0x2405EE4 Offset: 0x2401EE4 VA: 0x2405EE4
	private MeshRenderer Box(string name, Vector3 centre, Vector3 size, Material mat, bool castShadow) { }

	// RVA: 0x2405A40 Offset: 0x2401A40 VA: 0x2405A40
	private static Mesh Quad(Vector3 min, Vector3 max, float uvx, float uvy) { }

	// RVA: 0x240ACD4 Offset: 0x2406CD4 VA: 0x240ACD4
	private static List<Vector3> RoundedRectRing(float x0, float z0, float x1, float z1, float r, int seg) { }

	// RVA: 0x240889C Offset: 0x240489C VA: 0x240889C
	private static Mesh RoundedRect(float x0, float z0, float x1, float z1, float r, int seg) { }

	// RVA: 0x240B70C Offset: 0x240770C VA: 0x240B70C
	private static Mesh RoundedRing(float x0, float z0, float x1, float z1, float r, float width, float height, int seg) { }

	// RVA: 0x2407D34 Offset: 0x2403D34 VA: 0x2407D34
	private static Mesh Curb(List<Vector3> path, float width, float height) { }

	// RVA: 0x2407640 Offset: 0x2403640 VA: 0x2407640
	private static Mesh Ribbon(List<ValueTuple<Vector3, float, float>> pts, float width) { }

	// RVA: 0x240AFF8 Offset: 0x2406FF8 VA: 0x240AFF8
	private static Mesh FanPolygon(List<Vector3> ring, Vector3 centre) { }

	// RVA: 0x240C3DC Offset: 0x24083DC VA: 0x240C3DC
	public void .ctor() { }

	// RVA: 0x240C478 Offset: 0x2408478 VA: 0x240C478
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x24074CC Offset: 0x24034CC VA: 0x24074CC
	private void <ProceduralFrame>g__Bar|41_0(Vector3 a, Vector3 b, ref WorldView.<>c__DisplayClass41_0 ) { }

	[CompilerGenerated]
	// RVA: 0x240A1D0 Offset: 0x24061D0 VA: 0x240A1D0
	private void <BuildPad>g__Lane|43_0(Vector3 a, Vector3 b, float yaw, string name, ref WorldView.<>c__DisplayClass43_0 ) { }

	[CompilerGenerated]
	// RVA: 0x240AEB8 Offset: 0x2406EB8 VA: 0x240AEB8
	internal static void <RoundedRectRing>g__Arc|52_0(float cx, float cz, float a0, ref WorldView.<>c__DisplayClass52_0 ) { }
}

