// Namespace: Dino.BusSand.View
public sealed class SuctionBeams : MonoBehaviour // TypeDefIndex: 8505
{
	// Fields
	private readonly Dictionary<int, SuctionBeams.Beam> _beams; // 0x20
	private Mesh _mesh; // 0x28
	private Material _mat; // 0x30
	private Camera _cam; // 0x38
	private readonly List<Vector3> _v; // 0x40
	private readonly List<Vector2> _uv; // 0x48
	private readonly List<Color> _c; // 0x50
	private readonly List<int> _t; // 0x58
	private const int Segments = 10;
	public float Boost; // 0x60
	public float Arc; // 0x64

	// Methods

	// RVA: 0x23EC8A8 Offset: 0x23E88A8 VA: 0x23EC8A8
	public static SuctionBeams Create(Transform parent, Camera cam) { }

	// RVA: 0x23ECC10 Offset: 0x23E8C10 VA: 0x23ECC10
	public void Feed(int id, Vector3 mouth, Transform bus, Vector3 localTarget, float mouthWidth, float busWidth, Color color) { }

	// RVA: 0x23ECD8C Offset: 0x23E8D8C VA: 0x23ECD8C
	public void Remove(int id) { }

	// RVA: 0x23ECDE4 Offset: 0x23E8DE4 VA: 0x23ECDE4
	public void Clear() { }

	// RVA: 0x23ECE34 Offset: 0x23E8E34 VA: 0x23ECE34
	private void LateUpdate() { }

	// RVA: 0x23EDD14 Offset: 0x23E9D14 VA: 0x23EDD14
	private void OnDestroy() { }

	// RVA: 0x23EDDEC Offset: 0x23E9DEC VA: 0x23EDDEC
	public void .ctor() { }
}

