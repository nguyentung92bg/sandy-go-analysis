// Namespace: Dino.BusSand.View
public sealed class PackVehicle : MonoBehaviour // TypeDefIndex: 8484
{
	// Fields
	[CompilerGenerated]
	private BusKind <Kind>k__BackingField; // 0x20
	private Transform _body; // 0x28
	private MeshRenderer _bodyMr; // 0x30
	private MeshRenderer _sandMr; // 0x38
	private Transform _sandTf; // 0x40
	private Transform _shadow; // 0x48
	private GameObject _arrow; // 0x50
	private MaterialPropertyBlock _mpb; // 0x58
	private float _scale; // 0x60
	private float _sq; // 0x64
	private float _sqV; // 0x68
	private float _hop; // 0x6C
	private float _hopV; // 0x70
	private float _pop; // 0x74
	private float _introDelay; // 0x78
	private float _introT; // 0x7C
	private Quaternion _lean; // 0x80
	private Vector3 _offset; // 0x90
	private MaterialPropertyBlock _sandMpb; // 0xA0
	public bool ManualTick; // 0xA8

	// Properties
	public BusKind Kind { get; set; }
	public Transform Body { get; }
	public Material BodyMaterial { get; set; }
	public Vector3 SandLocal { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23D70E8 Offset: 0x23D30E8 VA: 0x23D70E8
	public BusKind get_Kind() { }

	[CompilerGenerated]
	// RVA: 0x23D70F0 Offset: 0x23D30F0 VA: 0x23D70F0
	private void set_Kind(BusKind value) { }

	// RVA: 0x23D70F8 Offset: 0x23D30F8 VA: 0x23D70F8
	public Transform get_Body() { }

	// RVA: 0x23D7100 Offset: 0x23D3100 VA: 0x23D7100
	public Material get_BodyMaterial() { }

	// RVA: 0x23D7188 Offset: 0x23D3188 VA: 0x23D7188
	public void set_BodyMaterial(Material value) { }

	// RVA: 0x23D7220 Offset: 0x23D3220 VA: 0x23D7220
	public static PackVehicle Create(Transform parent, BusKind kind, byte color, bool roofOff, float fill, bool arrow, float scale) { }

	// RVA: 0x23D7394 Offset: 0x23D3394 VA: 0x23D7394
	private void Build(BusKind kind, byte color, bool roofOff, float fill, bool arrow, float scale) { }

	// RVA: 0x23D78FC Offset: 0x23D38FC VA: 0x23D78FC
	public void SetLook(byte color, bool roofOff, float fill) { }

	// RVA: 0x23D7D74 Offset: 0x23D3D74 VA: 0x23D7D74
	public void Tint(Color main, Color shadow) { }

	// RVA: 0x23D7EBC Offset: 0x23D3EBC VA: 0x23D7EBC
	public void SetSand(float fill, Color main, Color shadow) { }

	// RVA: 0x23D81CC Offset: 0x23D41CC VA: 0x23D81CC
	public void Lean(float pitch, float roll, Vector3 offset) { }

	// RVA: 0x23D8224 Offset: 0x23D4224 VA: 0x23D8224
	public void Step(float dt) { }

	// RVA: 0x23D83A8 Offset: 0x23D43A8 VA: 0x23D83A8
	public void PopIn(float delay) { }

	// RVA: 0x23D83BC Offset: 0x23D43BC VA: 0x23D83BC
	public void Hop(float height = 0.9) { }

	// RVA: 0x23D83F8 Offset: 0x23D43F8 VA: 0x23D83F8
	public void Kick(float squash) { }

	// RVA: 0x23D8410 Offset: 0x23D4410 VA: 0x23D8410
	public Vector3 get_SandLocal() { }

	// RVA: 0x23D8578 Offset: 0x23D4578 VA: 0x23D8578
	private void Update() { }

	// RVA: 0x23D8228 Offset: 0x23D4228 VA: 0x23D8228
	private void Tick(float dt) { }

	// RVA: 0x23D7B90 Offset: 0x23D3B90 VA: 0x23D7B90
	private void Apply(float intro) { }

	// RVA: 0x23D85A0 Offset: 0x23D45A0 VA: 0x23D85A0
	public void .ctor() { }
}

