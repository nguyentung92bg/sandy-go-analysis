// Namespace: Dino.BusSand.App.UI
public static class KitParts // TypeDefIndex: 3574
{
	// Fields
	public const float PairLW = 372;
	public const float PairLX = -223;
	public const float PairRW = 445;
	public const float PairRX = 191;
	public const float SingleW = 557;
	public const float FullW = 822;
	public const float HalfW = 409;
	public const float HalfX = 209;
	public const float ButtonFont = 74;
	private const float PanelHalf = 417;
	public const float TagK = 0.76;

	// Properties
	public static bool LifeAtStake { get; }

	// Methods

	// RVA: -1 Offset: -1
	public static T AtTop<T>(T c, float fromTop, float x = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27DB09C Offset: 0x27D709C VA: 0x27DB09C
	|-KitParts.AtTop<object>
	*/

	// RVA: 0x230FF1C Offset: 0x230BF1C VA: 0x230FF1C
	public static RectTransform RewardBox(KitWindow w, float height, float raysY, float raysSize = 620) { }

	// RVA: 0x23100D0 Offset: 0x230C0D0 VA: 0x23100D0
	public static Sprite ItemIcon(int item) { }

	// RVA: 0x23101AC Offset: 0x230C1AC VA: 0x23101AC
	public static TextMeshProUGUI BrownText(Transform parent, string name, string text, float size, Vector2 box, float fromTop) { }

	// RVA: 0x2306A4C Offset: 0x2302A4C VA: 0x2306A4C
	public static RectTransform Button(Transform content, string name, KitColor color, float width, float y, float x, string label, string icon, float font = 74, float height = 236) { }

	// RVA: 0x23102F8 Offset: 0x230C2F8 VA: 0x23102F8
	public static void StreakTag(RectTransform box) { }

	// RVA: 0x2306B88 Offset: 0x2302B88 VA: 0x2306B88
	public static TMP_Text Label(RectTransform button) { }

	// RVA: 0x231069C Offset: 0x230C69C VA: 0x231069C
	public static RectTransform HangTag(Transform parent, string name, string text, out TMP_Text label, float scale = 1, float fontSize = 40, string preset = "Tag", Nullable<Color> color) { }

	// RVA: 0x2310B04 Offset: 0x230CB04 VA: 0x2310B04
	public static TMP_Text MultTag(RectTransform button, string text) { }

	// RVA: 0x2310C28 Offset: 0x230CC28 VA: 0x2310C28
	public static bool get_LifeAtStake() { }
}

