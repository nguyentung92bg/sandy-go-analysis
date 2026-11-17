// Namespace: Dino.BusSand.App.UI
public static class ArtPopup // TypeDefIndex: 3346
{
	// Fields
	public static readonly Color TimeBrown; // 0x0
	public const float DimAlpha = 0.88;
	private const float TimeX = 34;
	private const float TimeW = 162;
	private static readonly Vector2 PillSize; // 0x10
	public const float LabelUp = 6;
	private const float PillDx = 111;
	private const float PillDy = 2;

	// Methods

	// RVA: 0x217E350 Offset: 0x217A350 VA: 0x217E350
	public static ArtPopup.Parts Build(UIPanel panel, ArtPopup.Look look, string fallbackTitle) { }

	// RVA: 0x217E948 Offset: 0x217A948 VA: 0x217E948
	public static Image Plate(ArtPopup.Parts p, string name, string key, Vector2 size, float x, float y) { }

	// RVA: 0x217EA8C Offset: 0x217AA8C VA: 0x217EA8C
	public static TextMeshProUGUI Clock(ArtPopup.Parts a, Vector2 clock) { }

	// RVA: 0x217EDA8 Offset: 0x217ADA8 VA: 0x217EDA8
	public static RectTransform Intro(ArtPopup.Parts a, string plate, Vector2 clock, Rect plateRect, Vector2 start, string text, out TextMeshProUGUI timer) { }

	// RVA: 0x217F374 Offset: 0x217B374 VA: 0x217F374
	private static void .cctor() { }
}

