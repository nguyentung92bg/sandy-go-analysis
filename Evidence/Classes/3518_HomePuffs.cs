// Namespace: Dino.BusSand.App.UI
internal sealed class HomePuffs // TypeDefIndex: 3518
{
	// Fields
	private readonly List<HomePuffs.P> _p; // 0x10
	private readonly List<HomePuffs.P> _glow; // 0x18
	private readonly Mesh _mesh; // 0x20
	private readonly Mesh _glowMesh; // 0x28
	private readonly Material _mat; // 0x30
	private readonly Material _glowMat; // 0x38
	private readonly Texture2D _tex; // 0x40
	private readonly List<Vector3> _vert; // 0x48
	private readonly List<Vector2> _uv; // 0x50
	private readonly List<Color32> _col; // 0x58
	private readonly List<int> _tri; // 0x60
	private readonly float[] _depth; // 0x68
	private readonly int[] _order; // 0x70

	// Methods

	// RVA: 0x22E534C Offset: 0x22E134C VA: 0x22E534C
	public void .ctor(Transform parent, int layer) { }

	// RVA: 0x22E5B88 Offset: 0x22E1B88 VA: 0x22E5B88
	private static Mesh Renderer(Transform parent, string name, int layer, Material mat) { }

	// RVA: 0x22E582C Offset: 0x22E182C VA: 0x22E582C
	private static Texture2D MakeTexture() { }

	// RVA: 0x22E5D7C Offset: 0x22E1D7C VA: 0x22E5D7C
	public void Emit(Vector3 world, Vector3 vel, float life, float s0, float s1, float alpha, Color c) { }

	// RVA: 0x22E5F2C Offset: 0x22E1F2C VA: 0x22E5F2C
	public void Glow(Vector3 world, float size, Color c, float alpha) { }

	// RVA: 0x22E607C Offset: 0x22E207C VA: 0x22E607C
	public void Step(float dt, Camera cam) { }

	// RVA: 0x22E6710 Offset: 0x22E2710 VA: 0x22E6710
	private void Begin() { }

	// RVA: 0x22E67C0 Offset: 0x22E27C0 VA: 0x22E67C0
	private void Quad(Vector3 at, float size, float spin, Vector3 right, Vector3 up, Color c) { }

	// RVA: 0x22E6F3C Offset: 0x22E2F3C VA: 0x22E6F3C
	private void End(Mesh m) { }

	// RVA: 0x22E7078 Offset: 0x22E3078 VA: 0x22E7078
	public void Dispose() { }
}

