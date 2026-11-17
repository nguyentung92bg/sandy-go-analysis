// Namespace: Dino.BusSand.App.UI
internal static class AtelierArt // TypeDefIndex: 3510
{
	// Fields
	private static Sprite _peg; // 0x0
	private static Sprite _pencil; // 0x8
	private static Sprite _shadow; // 0x10
	private static Sprite _twinkle; // 0x18
	private static Sprite _grain; // 0x20

	// Properties
	public static Sprite Peg { get; }
	public static Sprite Pencil { get; }
	public static Sprite Shadow { get; }
	public static Sprite Twinkle { get; }
	public static Sprite Grain { get; }

	// Methods

	// RVA: 0x22D64E0 Offset: 0x22D24E0 VA: 0x22D64E0
	public static Sprite get_Peg() { }

	// RVA: 0x22DA5BC Offset: 0x22D65BC VA: 0x22DA5BC
	public static Sprite get_Pencil() { }

	// RVA: 0x22D642C Offset: 0x22D242C VA: 0x22D642C
	public static Sprite get_Shadow() { }

	// RVA: 0x22DA158 Offset: 0x22D6158 VA: 0x22DA158
	public static Sprite get_Twinkle() { }

	// RVA: 0x22D983C Offset: 0x22D583C VA: 0x22D983C
	public static Sprite get_Grain() { }

	// RVA: 0x22DE70C Offset: 0x22DA70C VA: 0x22DE70C
	private static Texture2D Tex(int w, int h, string name) { }

	// RVA: 0x22DE7BC Offset: 0x22DA7BC VA: 0x22DE7BC
	private static Sprite Done(Texture2D t, Color32[] px, Vector4 border) { }

	// RVA: 0x22DE880 Offset: 0x22DA880 VA: 0x22DE880
	private static float Box(Vector2 p, Vector2 half, float r) { }

	// RVA: 0x22DE954 Offset: 0x22DA954 VA: 0x22DE954
	private static Color32 C(Color c, float a) { }

	// RVA: 0x22DD74C Offset: 0x22D974C VA: 0x22DD74C
	private static Sprite MakePeg() { }

	// RVA: 0x22DDB7C Offset: 0x22D9B7C VA: 0x22DDB7C
	private static Sprite MakePencil() { }

	// RVA: 0x22DE960 Offset: 0x22DA960 VA: 0x22DE960
	private static Color Facet(float fx) { }

	// RVA: 0x22DDFE0 Offset: 0x22D9FE0 VA: 0x22DDFE0
	private static Sprite MakeShadow() { }

	// RVA: 0x22DE528 Offset: 0x22DA528 VA: 0x22DE528
	private static Sprite MakeGrain() { }

	// RVA: 0x22DE250 Offset: 0x22DA250 VA: 0x22DE250
	private static Sprite MakeTwinkle() { }
}

