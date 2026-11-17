// Namespace: Dino.BusSand.App.UI
public static class PackPopup // TypeDefIndex: 3640
{
	// Fields
	public static readonly PackPopup.Look Starter; // 0x0
	public static readonly PackPopup.Look Gift; // 0x8
	private static readonly Vector2 TagRing; // 0x10
	private static readonly Vector2 BuyAt; // 0x18
	private static readonly Vector2 CoinLabel; // 0x20
	private static readonly Vector2 ItemLabel; // 0x28
	private static readonly Vector2 CoinSize; // 0x30
	private const float PlateMinW = 420;
	private const float PlateMaxW = 882;
	private const float RowMargin = 260;
	private const float BoosterBox = 160;
	private const float AmountFont = 56;
	private const float PriceFont = 90;
	private const float PriceUp = 30;
	private const float WasFont = 50;
	private const float WasDown = 43;
	public static readonly Color PriceYellow; // 0x38

	// Methods

	// RVA: 0x232E578 Offset: 0x232A578 VA: 0x232E578
	public static PackPopup.Parts Build(UIPanel panel, PackPopup.Look look, string fallbackTitle, List<KeyValuePair<int, long>> get, string price, string discount, bool wasPrice = False) { }

	// RVA: 0x232FF38 Offset: 0x232BF38 VA: 0x232FF38
	public static string WasPrice(string price, string discount) { }

	// RVA: 0x233063C Offset: 0x232C63C VA: 0x233063C
	private static void WasUnder(RectTransform button, string text) { }

	// RVA: 0x232F900 Offset: 0x232B900 VA: 0x232F900
	public static string Clock(long seconds) { }

	// RVA: 0x23308D4 Offset: 0x232C8D4 VA: 0x23308D4
	private static void .cctor() { }
}

