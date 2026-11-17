// Namespace: Dino.BusSand.App.UI
public static class ScreenSafe // TypeDefIndex: 3953
{
	// Fields
	public static Nullable<Rect> Override; // 0x0
	public static Rect[] CutoutsOverride; // 0x18
	public const float TopRoom = 58;
	public const float CutoutGap = 10;
	private static readonly Rect[] None; // 0x20
	private static Rect[] s_cutouts; // 0x28
	private static int s_cutoutsFrame; // 0x30

	// Properties
	public static Rect Raw { get; }
	public static Rect[] Cutouts { get; }
	public static float Unit { get; }
	public static Rect Area { get; }

	// Methods

	// RVA: 0x21FF5AC Offset: 0x21FB5AC VA: 0x21FF5AC
	public static Rect get_Raw() { }

	// RVA: 0x21FF634 Offset: 0x21FB634 VA: 0x21FF634
	public static Rect[] get_Cutouts() { }

	// RVA: 0x21FF7A8 Offset: 0x21FB7A8 VA: 0x21FF7A8
	public static float get_Unit() { }

	// RVA: 0x21FF838 Offset: 0x21FB838 VA: 0x21FF838
	public static float TopClearPx(float xMin, float xMax) { }

	// RVA: 0x21FF9F4 Offset: 0x21FB9F4 VA: 0x21FF9F4
	public static Rect get_Area() { }

	// RVA: 0x21FFB1C Offset: 0x21FBB1C VA: 0x21FFB1C
	private static void .cctor() { }
}

