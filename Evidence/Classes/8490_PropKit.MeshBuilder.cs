// Namespace: 
public sealed class PropKit.MeshBuilder // TypeDefIndex: 8490
{
	// Fields
	private readonly List<Vector3> _v; // 0x10
	private readonly List<Vector3> _n; // 0x18
	private readonly List<Color> _c; // 0x20
	private readonly List<Vector2> _m; // 0x28
	private readonly List<int> _t; // 0x30

	// Methods

	// RVA: 0x23DE7C0 Offset: 0x23DA7C0 VA: 0x23DE7C0
	private int Vert(Vector3 p, Vector3 n, Color c, float emit, float spec) { }

	// RVA: 0x23DEA04 Offset: 0x23DAA04 VA: 0x23DEA04
	private void Quad(Vector3 a, Vector3 b, Vector3 c, Vector3 d, Vector3 n, Color col, float emit, float spec) { }

	// RVA: 0x23DEDE4 Offset: 0x23DADE4 VA: 0x23DEDE4
	public void Box(Vector3 c, Vector3 size, Quaternion r, Color col, float emit = 0, float spec = 0.3) { }

	// RVA: 0x23DF990 Offset: 0x23DB990 VA: 0x23DF990
	public void Cylinder(Vector3 a, Vector3 b, float r0, float r1, int seg, Color col, float emit = 0, float spec = 0.3) { }

	// RVA: 0x23E06A4 Offset: 0x23DC6A4 VA: 0x23E06A4
	public void ConeAt(Vector3 at, Vector3 dir, float radius, float length, Color col, float emit = 0) { }

	// RVA: 0x23E0858 Offset: 0x23DC858 VA: 0x23E0858
	public void Sphere(Vector3 c, float r, int seg, Color col, float emit = 0, float spec = 0.3) { }

	// RVA: 0x23E0DF8 Offset: 0x23DCDF8 VA: 0x23E0DF8
	public void Torus(Vector3 c, float R, float rr, int segU, int segV, Quaternion r, Color col, float emit = 0, float arcDeg = 360, float stretchX = 1, float startDeg = 0) { }

	// RVA: 0x23DCFE4 Offset: 0x23D8FE4 VA: 0x23DCFE4
	public Mesh ToMesh(string name) { }

	// RVA: 0x23DCE3C Offset: 0x23D8E3C VA: 0x23DCE3C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x23DF918 Offset: 0x23DB918 VA: 0x23DF918
	internal static Vector3 <Box>g__P|7_0(float x, float y, float z, ref PropKit.MeshBuilder.<>c__DisplayClass7_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23DF96C Offset: 0x23DB96C VA: 0x23DF96C
	internal static Vector3 <Box>g__N|7_1(Vector3 v, ref PropKit.MeshBuilder.<>c__DisplayClass7_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23E0DA0 Offset: 0x23DCDA0 VA: 0x23E0DA0
	internal static Vector3 <Sphere>g__S|10_0(float t, float p) { }

	[CompilerGenerated]
	// RVA: 0x23E1344 Offset: 0x23DD344 VA: 0x23E1344
	internal static Vector3 <Torus>g__P|11_0(float u, float v, out Vector3 n, ref PropKit.MeshBuilder.<>c__DisplayClass11_0 ) { }
}

