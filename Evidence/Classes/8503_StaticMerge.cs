// Namespace: Dino.BusSand.View
public static class StaticMerge // TypeDefIndex: 8503
{
	// Fields
	private static Material _prop; // 0x0
	private static Mesh _cube; // 0x8
	private static Mesh _sphere; // 0x10

	// Properties
	public static Mesh Cube { get; }
	public static Mesh Sphere { get; }

	// Methods

	// RVA: 0x23E9E9C Offset: 0x23E5E9C VA: 0x23E9E9C
	private static bool Bakeable(Material m) { }

	// RVA: 0x23E9F84 Offset: 0x23E5F84 VA: 0x23E9F84
	public static int Combine(Transform root, HashSet<Renderer> keep) { }

	// RVA: 0x23EB8C4 Offset: 0x23E78C4 VA: 0x23EB8C4
	private static Material PropMaterial(Shader sh) { }

	// RVA: 0x23EB67C Offset: 0x23E767C VA: 0x23EB67C
	private static void Spawn(Transform root, Mesh m, Material mat, ShadowCastingMode shadows, bool receive) { }

	// RVA: 0x23EBAB0 Offset: 0x23E7AB0 VA: 0x23EBAB0
	public static Mesh get_Cube() { }

	// RVA: 0x23EC4CC Offset: 0x23E84CC VA: 0x23EC4CC
	public static Mesh get_Sphere() { }

	// RVA: 0x23EC258 Offset: 0x23E8258 VA: 0x23EC258
	private static Mesh Build(string name, List<Vector3> v, List<Vector3> n, List<int> t) { }
}

