// Namespace: Dino.BusSand.View
public sealed class SandBoardView : MonoBehaviour // TypeDefIndex: 8498
{
	// Fields
	private SandGrid _grid; // 0x20
	private Texture2D _tex; // 0x28
	private Color32[] _buf; // 0x30
	private Material _mat; // 0x38
	private MeshRenderer _mr; // 0x40
	private Mesh _quad; // 0x48
	private bool _pack; // 0x50
	private Texture2D _paletteTex; // 0x58
	private int _drawnVersion; // 0x60
	[CompilerGenerated]
	private float <GrainSize>k__BackingField; // 0x64
	[CompilerGenerated]
	private float <GrainWidth>k__BackingField; // 0x68
	[CompilerGenerated]
	private Vector2 <WorldSize>k__BackingField; // 0x6C
	private bool _pouring; // 0x74
	private float _pourT; // 0x78
	private float _pourDuration; // 0x7C
	private float[] _landTime; // 0x80
	private float[] _rowFall; // 0x88
	private static SandBoardView _current; // 0x0
	public const bool FlatSand = True;
	public const float FlatBrightness = 1.18;

	// Properties
	public float GrainSize { get; set; }
	public float GrainWidth { get; set; }
	public Vector2 WorldSize { get; set; }
	public Material Material { get; }
	public bool Pouring { get; }
	public bool IsPouring { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23E50D0 Offset: 0x23E10D0 VA: 0x23E50D0
	public float get_GrainSize() { }

	[CompilerGenerated]
	// RVA: 0x23E50D8 Offset: 0x23E10D8 VA: 0x23E50D8
	private void set_GrainSize(float value) { }

	[CompilerGenerated]
	// RVA: 0x23E50E0 Offset: 0x23E10E0 VA: 0x23E50E0
	public float get_GrainWidth() { }

	[CompilerGenerated]
	// RVA: 0x23E50E8 Offset: 0x23E10E8 VA: 0x23E50E8
	private void set_GrainWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x23E50F0 Offset: 0x23E10F0 VA: 0x23E50F0
	public Vector2 get_WorldSize() { }

	[CompilerGenerated]
	// RVA: 0x23E50F8 Offset: 0x23E10F8 VA: 0x23E50F8
	private void set_WorldSize(Vector2 value) { }

	// RVA: 0x23E5100 Offset: 0x23E1100 VA: 0x23E5100
	public Material get_Material() { }

	// RVA: 0x23E5108 Offset: 0x23E1108 VA: 0x23E5108
	public bool get_Pouring() { }

	// RVA: 0x23E5110 Offset: 0x23E1110 VA: 0x23E5110
	private void ApplyStyle() { }

	// RVA: 0x23E51BC Offset: 0x23E11BC VA: 0x23E51BC
	public static SandBoardView Create(Transform parent) { }

	// RVA: 0x23E5274 Offset: 0x23E1274 VA: 0x23E5274
	public void Bind(SandGrid grid, float grainSize, float grainWidth = 0) { }

	// RVA: 0x23E5B88 Offset: 0x23E1B88 VA: 0x23E5B88
	private void BindPackPalette() { }

	// RVA: 0x23E60D8 Offset: 0x23E20D8 VA: 0x23E60D8
	private Color32 Texel(byte c, sbyte shade) { }

	// RVA: 0x23E573C Offset: 0x23E173C VA: 0x23E573C
	private void BuildMesh() { }

	// RVA: 0x23E61A0 Offset: 0x23E21A0 VA: 0x23E61A0
	public Vector3 CellWorld(float x, float y) { }

	// RVA: 0x23E61F0 Offset: 0x23E21F0 VA: 0x23E61F0
	public void SetSweep(float position) { }

	// RVA: 0x23E5F68 Offset: 0x23E1F68 VA: 0x23E5F68
	public void Redraw() { }

	// RVA: 0x23E62A8 Offset: 0x23E22A8 VA: 0x23E62A8
	private void LateUpdate() { }

	// RVA: 0x23E66BC Offset: 0x23E26BC VA: 0x23E66BC
	public void BeginPour(float duration = 1.05, int seed = 1) { }

	// RVA: 0x23E6958 Offset: 0x23E2958 VA: 0x23E6958
	public bool get_IsPouring() { }

	// RVA: 0x23E62F8 Offset: 0x23E22F8 VA: 0x23E62F8
	private void AdvancePour(float dt) { }

	// RVA: 0x23E6960 Offset: 0x23E2960 VA: 0x23E6960
	private void OnDestroy() { }

	// RVA: 0x23E6B34 Offset: 0x23E2B34 VA: 0x23E6B34
	public void .ctor() { }
}

