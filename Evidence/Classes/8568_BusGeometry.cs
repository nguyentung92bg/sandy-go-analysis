// Namespace: Dino.BusSand.Core
public static class BusGeometry // TypeDefIndex: 8568
{
	// Fields
	public const int AngleCount = 24;
	public const double Eps = 1E-05;
	public const double MeshUnitsPerCell = 14994;
	private static readonly double[] Sin; // 0x0
	private static readonly double[] Cos; // 0x8

	// Methods

	// RVA: 0x242BC30 Offset: 0x2427C30 VA: 0x242BC30
	private static void .cctor() { }

	// RVA: 0x242BE2C Offset: 0x2427E2C VA: 0x242BE2C
	public static int MeshWidthUnits(BusKind k) { }

	// RVA: 0x2429DC0 Offset: 0x2425DC0 VA: 0x2429DC0
	public static double LengthCells(BusKind k) { }

	// RVA: 0x242BE4C Offset: 0x2427E4C VA: 0x242BE4C
	public static double WidthCells(BusKind k) { }

	// RVA: 0x242BEC8 Offset: 0x2427EC8 VA: 0x242BEC8
	public static void Heading(int a, out double hx, out double hz) { }

	// RVA: 0x242BFA4 Offset: 0x2427FA4 VA: 0x242BFA4
	public static BusObb Make(double cx, double cz, int a, BusKind k) { }

	// RVA: 0x2422124 Offset: 0x241E124 VA: 0x2422124
	public static BusObb Make(double cx, double cz, int a, double length, double width) { }

	// RVA: 0x242C074 Offset: 0x2428074 VA: 0x242C074
	private static double R(in BusObb o, double lx, double lz) { }

	// RVA: 0x242C124 Offset: 0x2428124 VA: 0x242C124
	private static bool Separated(in BusObb a, in BusObb b, double lx, double lz, double eps) { }

	// RVA: 0x242C220 Offset: 0x2428220 VA: 0x242C220
	public static bool Overlaps(in BusObb a, in BusObb b, double eps = 1E-05) { }

	// RVA: 0x242C34C Offset: 0x242834C VA: 0x242C34C
	public static bool IsInsideYard(in BusObb o, double w, double h, double eps = 1E-05) { }

	// RVA: 0x242C3EC Offset: 0x24283EC VA: 0x242C3EC
	public static BusObb SweptToExit(in BusObb t, double w, double h) { }

	// RVA: 0x242C428 Offset: 0x2428428 VA: 0x242C428
	public static bool CanEscape(in BusObb t, List<BusObb> others, int self, double w, double h, double eps = 1E-05) { }

	// RVA: 0x242C598 Offset: 0x2428598 VA: 0x242C598
	public static double MaxForwardAdvance(in BusObb t, List<BusObb> others, int self, double w, double h) { }

	// RVA: 0x242C960 Offset: 0x2428960 VA: 0x242C960
	public static int FirstContactIndex(in BusObb t, List<BusObb> others, int self) { }

	// RVA: 0x242C6F0 Offset: 0x24286F0 VA: 0x242C6F0
	private static bool TryFirstContact(in BusObb a, in BusObb b, double dx, double dz, out double te) { }
}

