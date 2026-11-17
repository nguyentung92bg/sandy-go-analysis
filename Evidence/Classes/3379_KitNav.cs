// Namespace: Dino.BusSand.App.UI
public static class KitNav // TypeDefIndex: 3379
{
	// Fields
	public const int Shop = 0;
	public const int Home = 1;
	private const float BarH = 281;
	private const float Raise = 80;
	private const float Under = 120;

	// Methods

	// RVA: 0x2286008 Offset: 0x2282008 VA: 0x2286008
	public static RectTransform Build(Transform parent, int selected, Action onShop, Action onHome, bool switches = False) { }

	// RVA: 0x2286BB4 Offset: 0x2282BB4 VA: 0x2286BB4
	public static void Select(RectTransform bar, int tab) { }

	// RVA: 0x2286504 Offset: 0x2282504 VA: 0x2286504
	private static void Tab(RectTransform bar, string name, int i, bool selected, string icon, float iconScale, string label, Action onClick, bool both = False) { }
}

