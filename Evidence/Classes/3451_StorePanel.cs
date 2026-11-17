// Namespace: Dino.BusSand.App.UI
public class StorePanel : UIPanel, IKitPanel // TypeDefIndex: 3451
{
	// Fields
	public const string PrefabKey = "UIStorePanel";
	public const int DefaultStoreId = 7000;
	private const int TypeCoin = 3;
	private const int TypeCard = 4;
	private const int TypeGoldenCoin = 7;
	public static Func<int, bool> CardVisible; // 0x0
	public static Func<int, bool> GoldenCoinVisible; // 0x8
	public static Func<int, bool> CustomItemClick; // 0x10
	public static Action<Transform, int> CustomItemSetup; // 0x18
	private int _storeId; // 0x38
	private RectTransform _grid; // 0x40
	private RectTransform _view; // 0x48
	private bool _buying; // 0x50
	private const float PageFade = 0.14;
	private CanvasGroup[] _page; // 0x58
	private bool _leaving; // 0x60
	private RectTransform _nav; // 0x68
	private HomePanel _home; // 0x70
	private const float BandBottom = 397;
	private const float TileW = 311;
	private const float TileH = 454;
	private const float ColX = 333;
	private const float RowPitch = 493;
	private const float FirstGap = 23;
	private const float NoAdsH = 208;

	// Methods

	// RVA: 0x22B6324 Offset: 0x22B2324 VA: 0x22B6324 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22B7A00 Offset: 0x22B3A00 VA: 0x22B7A00 Slot: 6
	public override void OnClose() { }

	// RVA: 0x22B7B6C Offset: 0x22B3B6C VA: 0x22B7B6C
	private void OnPurchased(int storeItemId) { }

	// RVA: 0x22B7C2C Offset: 0x22B3C2C VA: 0x22B7C2C Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22B7C40 Offset: 0x22B3C40 VA: 0x22B7C40
	private void OnCloseClick() { }

	// RVA: 0x22B7FFC Offset: 0x22B3FFC VA: 0x22B7FFC
	public static List<int> AvailableTabs(int storeId) { }

	// RVA: 0x22B8294 Offset: 0x22B4294 VA: 0x22B8294
	public static List<int> AvailableItems(int tabId) { }

	// RVA: 0x22B87B4 Offset: 0x22B47B4 VA: 0x22B87B4
	public static bool IsItemVisible(int storeItemId) { }

	// RVA: 0x22B851C Offset: 0x22B451C VA: 0x22B851C
	public static bool IsSoldOut(int storeItemId) { }

	// RVA: 0x22B4748 Offset: 0x22B0748 VA: 0x22B4748
	public static string DisplayPrice(int storeItemId) { }

	// RVA: 0x22B72B8 Offset: 0x22B32B8 VA: 0x22B72B8
	private void Refresh() { }

	// RVA: 0x22B930C Offset: 0x22B530C VA: 0x22B930C
	private static long CoinsOf(int itemId) { }

	// RVA: 0x22B8DC8 Offset: 0x22B4DC8 VA: 0x22B8DC8
	private void Tile(int itemId, int index, float centreY, float x) { }

	// RVA: 0x22B9480 Offset: 0x22B5480 VA: 0x22B9480
	internal static RectTransform Price(Transform parent, string name, string text, Vector2 size, Vector2 pos) { }

	// RVA: 0x22B88EC Offset: 0x22B48EC VA: 0x22B88EC
	private void NoAdsTile(int itemId, float top) { }

	// RVA: 0x22B962C Offset: 0x22B562C VA: 0x22B962C
	private void OnNoAds() { }

	// RVA: 0x22B96F4 Offset: 0x22B56F4 VA: 0x22B96F4
	private void OnBuy(int itemId) { }

	// RVA: 0x22B9C04 Offset: 0x22B5C04 VA: 0x22B9C04
	private void OnBuyResult(int itemId, bool ok, bool timeout) { }

	// RVA: 0x22B9FD0 Offset: 0x22B5FD0 VA: 0x22B9FD0
	private static void FlyAndClose(List<KeyValuePair<int, long>> rewards, Vector3 from) { }

	// RVA: 0x22BA0F0 Offset: 0x22B60F0 VA: 0x22BA0F0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x22BA0F8 Offset: 0x22B60F8 VA: 0x22BA0F8
	private void <OnCloseClick>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x22BA178 Offset: 0x22B6178 VA: 0x22BA178
	private void <NoAdsTile>b__39_0() { }

	[CompilerGenerated]
	// RVA: 0x22BA17C Offset: 0x22B617C VA: 0x22BA17C
	private void <NoAdsTile>b__39_1() { }
}

