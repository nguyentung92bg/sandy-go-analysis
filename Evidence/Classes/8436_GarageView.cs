// Namespace: Dino.BusSand.View
public sealed class GarageView : MonoBehaviour // TypeDefIndex: 8436
{
	// Fields
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x20
	private Transform _body; // 0x28
	private TextMeshPro _count; // 0x30
	private Transform _countTf; // 0x38
	private float _scale; // 0x40
	private float _pulse; // 0x44
	private float _sink; // 0x48
	private float _drop; // 0x4C
	private static Mesh _shell; // 0x0
	private static Mesh _roof; // 0x8
	private static Mesh _mouth; // 0x10
	private static Mesh _sleeve; // 0x18
	private static Mesh _stripe; // 0x20
	private static Material _stripeMat; // 0x28
	private const float Wall = 0.95;
	private const float Rise = 0.62;
	private const float ArtW = 3.785;
	private const float ArtL = 4.529;
	private const float ArtCz = 0.0955;
	private Transform _signTf; // 0x50

	// Properties
	public int Id { get; set; }
	private static float BodyL { get; }
	private static float BodyW { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23AFD1C Offset: 0x23ABD1C VA: 0x23AFD1C
	public int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x23AFD24 Offset: 0x23ABD24 VA: 0x23AFD24
	private void set_Id(int value) { }

	// RVA: 0x23AFD2C Offset: 0x23ABD2C VA: 0x23AFD2C
	private static float get_BodyL() { }

	// RVA: 0x23AFD38 Offset: 0x23ABD38 VA: 0x23AFD38
	private static float get_BodyW() { }

	// RVA: 0x23AFD44 Offset: 0x23ABD44 VA: 0x23AFD44
	public static GarageView Create(Transform parent, Garage g, StageLayout layout) { }

	// RVA: 0x23AFE4C Offset: 0x23ABE4C VA: 0x23AFE4C
	private void Build(Garage g, StageLayout L) { }

	// RVA: 0x23B0638 Offset: 0x23AC638 VA: 0x23B0638
	private bool BuildArt() { }

	// RVA: 0x23B0FD8 Offset: 0x23ACFD8 VA: 0x23B0FD8
	private Transform Part(string name, Mesh mesh, Material mat, bool castShadow) { }

	// RVA: 0x23B0B90 Offset: 0x23ACB90 VA: 0x23B0B90
	public void SetCount(int n) { }

	// RVA: 0x23B15B0 Offset: 0x23AD5B0 VA: 0x23B15B0
	private void BuildSignCount() { }

	// RVA: 0x23B18DC Offset: 0x23AD8DC VA: 0x23B18DC
	public void Pulse() { }

	// RVA: 0x23B18E8 Offset: 0x23AD8E8 VA: 0x23B18E8
	public void Spend() { }

	// RVA: 0x23B1900 Offset: 0x23AD900 VA: 0x23B1900
	private void Update() { }

	// RVA: 0x23B0CB4 Offset: 0x23ACCB4 VA: 0x23B0CB4
	private static void EnsureMeshes() { }

	// RVA: 0x23B1C0C Offset: 0x23ADC0C VA: 0x23B1C0C
	private static List<Vector2> Arch(float w, float wall, float rise, int seg = 18) { }

	// RVA: 0x23B28D4 Offset: 0x23AE8D4 VA: 0x23B28D4
	private static Mesh Cap(List<Vector2> o, float z, bool front) { }

	// RVA: 0x23B1EEC Offset: 0x23ADEEC VA: 0x23B1EEC
	private static Mesh Extrude(List<Vector2> o, float z0, float z1, bool caps, bool inside = False) { }

	// RVA: 0x23B3078 Offset: 0x23AF078 VA: 0x23B3078
	private static Mesh Quad(float w, float h) { }

	// RVA: 0x23B1378 Offset: 0x23AD378 VA: 0x23B1378
	private static Material StripeMaterial() { }

	// RVA: 0x23B334C Offset: 0x23AF34C VA: 0x23B334C
	public void .ctor() { }
}

