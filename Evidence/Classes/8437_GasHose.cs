// Namespace: Dino.BusSand.View
public static class GasHose // TypeDefIndex: 8437
{
	// Fields
	public const float Radius = 0.12;
	private const int Along = 20;
	private const int Around = 8;
	private const float InReach = 1.1;
	public static readonly Vector3 OutletLocal; // 0x0
	public static readonly Vector3 OutletDirLocal; // 0xC

	// Methods

	// RVA: 0x23B335C Offset: 0x23AF35C VA: 0x23B335C
	public static void Build(Mesh m, Transform space, Vector3 a, Vector3 aDir, Vector3 b, Vector3 bDir, float reach = 1) { }

	// RVA: 0x23B40B0 Offset: 0x23B00B0 VA: 0x23B40B0
	private static Vector3 Bezier(Vector3 a, Vector3 b, Vector3 c, Vector3 d, float t) { }

	// RVA: 0x23B414C Offset: 0x23B014C VA: 0x23B414C
	private static Vector3 BezierTangent(Vector3 a, Vector3 b, Vector3 c, Vector3 d, float t) { }

	// RVA: 0x23B41EC Offset: 0x23B01EC VA: 0x23B41EC
	private static void .cctor() { }
}

