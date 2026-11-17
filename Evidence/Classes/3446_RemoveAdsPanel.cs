// Namespace: Dino.BusSand.App.UI
public class RemoveAdsPanel : UIPanel, IKitPanel // TypeDefIndex: 3446
{
	// Fields
	public const string PrefabKey = "UIRemoveAds2D";
	private int _item; // 0x38
	private bool _buying; // 0x3C
	private bool _waiting; // 0x3D
	private string _source; // 0x40
	private static readonly ArtPopup.Look Look; // 0x0
	private static readonly Vector2[] PerkIcon; // 0x8
	private static readonly float[] PerkY; // 0x10
	private const float LineX = 255;
	private const float LineW = 700;
	private const float LineFont = 50;
	private const float CardTop = 968;
	private const float BtnY = 1336;
	private const float BtnFont = 76;
	private static readonly Vector2 TagRing; // 0x18
	private const string Rim = "Rust";

	// Properties
	public static int StoreItem { get; }
	public static bool Offered { get; }
	public static int BundleItem { get; }

	// Methods

	// RVA: 0x22B3058 Offset: 0x22AF058 VA: 0x22B3058
	public static int get_StoreItem() { }

	// RVA: 0x22B3060 Offset: 0x22AF060 VA: 0x22B3060
	public static bool get_Offered() { }

	// RVA: 0x22B31BC Offset: 0x22AF1BC VA: 0x22B31BC
	public static int get_BundleItem() { }

	// RVA: 0x22B3284 Offset: 0x22AF284 VA: 0x22B3284 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22B4830 Offset: 0x22B0830 VA: 0x22B4830
	private static RectTransform Price(ArtPopup.Parts a, string name, KitColor color, float width, float x, string price) { }

	// RVA: 0x22B43D8 Offset: 0x22B03D8 VA: 0x22B43D8
	private static void Card(ArtPopup.Parts a, float left, float right) { }

	// RVA: 0x22B44E4 Offset: 0x22B04E4 VA: 0x22B44E4
	private static void NoAdsAlone(ArtPopup.Parts a, float x) { }

	// RVA: 0x22B5160 Offset: 0x22B1160 VA: 0x22B5160
	private static void AdsBadge(ArtPopup.Parts a, float x, float y) { }

	// RVA: 0x22B4974 Offset: 0x22B0974 VA: 0x22B4974
	private static void BundleContents(ArtPopup.Parts a, int bundle) { }

	// RVA: 0x22B527C Offset: 0x22B127C VA: 0x22B527C Slot: 6
	public override void OnClose() { }

	// RVA: 0x22B52D4 Offset: 0x22B12D4 VA: 0x22B52D4 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22B52F4 Offset: 0x22B12F4 VA: 0x22B52F4
	private void OnCloseClick() { }

	// RVA: 0x22B5308 Offset: 0x22B1308 VA: 0x22B5308
	private void OnBuy(int item) { }

	// RVA: 0x22B577C Offset: 0x22B177C VA: 0x22B577C
	private void Done(bool ok, bool timeout) { }

	// RVA: 0x22B5F74 Offset: 0x22B1F74 VA: 0x22B5F74
	private void Update() { }

	// RVA: 0x22B607C Offset: 0x22B207C VA: 0x22B607C
	public void .ctor() { }

	// RVA: 0x22B6084 Offset: 0x22B2084 VA: 0x22B6084
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x22B6288 Offset: 0x22B2288 VA: 0x22B6288
	private void <OnBuy>b__31_0() { }

	[CompilerGenerated]
	// RVA: 0x22B6294 Offset: 0x22B2294 VA: 0x22B6294
	private void <OnBuy>b__31_1(bool ok) { }
}

