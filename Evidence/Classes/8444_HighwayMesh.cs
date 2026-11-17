// Namespace: Dino.BusSand.View
public static class HighwayMesh // TypeDefIndex: 8444
{
	// Fields
	private static readonly Dictionary<Mesh, HighwayMesh.Src> Cache; // 0x0
	private static readonly List<Vector3> V; // 0x8
	private static readonly List<Vector3> N; // 0x10
	private static readonly List<Vector3> Path; // 0x18
	private static readonly List<Vector2> UV; // 0x20
	private static readonly List<int> T; // 0x28
	private static readonly List<HighwayMesh.Piece> Pieces; // 0x30
	private static float[] _cum; // 0x38
	private static readonly List<Vector3> Q; // 0x40

	// Methods

	// RVA: 0x23B70F0 Offset: 0x23B30F0 VA: 0x23B70F0
	private static HighwayMesh.Src Read(Mesh m) { }

	// RVA: 0x23B73E4 Offset: 0x23B33E4 VA: 0x23B73E4
	public static void Fill(Mesh m, Transform space, List<Vector3> path, Mesh start, Mesh module, Mesh end, float scale, float widthScale, float lift) { }

	// RVA: 0x23B8EEC Offset: 0x23B4EEC VA: 0x23B8EEC
	private static Vector3 Flat(Vector3 v) { }

	// RVA: 0x23B8C70 Offset: 0x23B4C70 VA: 0x23B8C70
	private static void Sample(List<Vector3> p, float[] cum, float s, float delta, out Vector3 pos, out Vector3 fwd) { }

	// RVA: 0x23B8EF4 Offset: 0x23B4EF4 VA: 0x23B8EF4
	private static Vector3 At(List<Vector3> p, float[] cum, float s) { }

	// RVA: 0x23B8428 Offset: 0x23B4428 VA: 0x23B8428
	private static List<Vector3> Smooth(List<Vector3> path, float radius) { }

	// RVA: 0x23B9330 Offset: 0x23B5330 VA: 0x23B9330
	private static void .cctor() { }
}

