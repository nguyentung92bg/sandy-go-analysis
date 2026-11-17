// Namespace: Dino.BusSand.App.UI
public static class BoosterFly // TypeDefIndex: 3350
{
	// Fields
	private const float Pop = 0.16;
	private const float WindUp = 0.12;
	private const float Flight = 0.5;
	private const float Stagger = 0.09;
	private const float Lift = 40;
	private static readonly List<RectTransform> s_flying; // 0x0

	// Properties
	public static bool InFlight { get; }

	// Methods

	// RVA: 0x217F4B0 Offset: 0x217B4B0 VA: 0x217F4B0
	public static bool get_InFlight() { }

	// RVA: 0x217F61C Offset: 0x217B61C VA: 0x217F61C
	public static bool IsBooster(int id) { }

	// RVA: 0x217F630 Offset: 0x217B630 VA: 0x217F630
	public static void Fly(int id, Sprite icon, Vector3 from, float size, int index = 0, Action landed) { }

	// RVA: 0x217FFE0 Offset: 0x217BFE0 VA: 0x217FFE0
	private static void Impact(RectTransform layer, RectTransform target, Vector2 at, bool home) { }

	// RVA: 0x217FCF0 Offset: 0x217BCF0 VA: 0x217FCF0
	private static RectTransform Target(int id, out bool home) { }

	// RVA: 0x218049C Offset: 0x217C49C VA: 0x218049C
	private static void .cctor() { }
}

