// Namespace: Dino.BusSand.App.UI
public static class KitPopup // TypeDefIndex: 3374
{
	// Fields
	public const float BodyW = 980;
	public const float HeaderW = 1036;
	public const float HeaderH = 303;
	public const float HeaderK = 1;
	public const float HeaderLift = 7.5;
	public const float PanelTop = 304;
	public const float PanelW = 834;
	public const float HolderH = 236;
	public const float ButtonGap = 17.5;
	public const float BottomPad = 96;
	public const float TitleY = 139;
	public const float CloseY = 144.5;
	public const float CloseX = 457.5;
	public const float TitleFont = 112;
	public const float TitleSpacing = -0.7;
	public const float TitleX = 8;
	public const float BodyTop = 150;
	public const float DefaultTop = 455.5;

	// Methods

	// RVA: 0x2280B34 Offset: 0x227CB34 VA: 0x2280B34
	public static float Height(float contentH) { }

	// RVA: 0x2280B50 Offset: 0x227CB50 VA: 0x2280B50
	public static float RowY(float panelH, float gap = 17.5) { }

	// RVA: 0x2280B64 Offset: 0x227CB64 VA: 0x2280B64
	public static float PanelAndRow(float panelH, float gap = 17.5) { }

	// RVA: 0x2280B78 Offset: 0x227CB78 VA: 0x2280B78
	public static KitTheme Theme(KitTier t) { }

	// RVA: 0x2280B8C Offset: 0x227CB8C VA: 0x2280B8C
	private static string BodyKey(KitTheme t) { }

	// RVA: 0x2280C10 Offset: 0x227CC10 VA: 0x2280C10
	private static string HeaderKey(KitTheme t) { }

	// RVA: 0x2280C94 Offset: 0x227CC94 VA: 0x2280C94
	public static string CloseKey(KitTheme t) { }

	// RVA: 0x2280D18 Offset: 0x227CD18 VA: 0x2280D18
	public static KitWindow Build(UIPanel panel, string title, float width, float height, KitTier tier = 0, bool close = True, float top = 455.5) { }

	// RVA: 0x2280D34 Offset: 0x227CD34 VA: 0x2280D34
	public static KitWindow Build(UIPanel panel, string title, float width, float height, KitTheme theme, KitTier skulls, bool close = True, float top = 455.5) { }

	// RVA: 0x2282888 Offset: 0x227E888 VA: 0x2282888
	public static Image TitleImage(KitWindow w, string key, float width) { }

	// RVA: 0x2282A2C Offset: 0x227EA2C VA: 0x2282A2C
	public static RectTransform Panel(Transform parent, string name, Vector2 size, Vector2 pos) { }

	// RVA: 0x2282AF4 Offset: 0x227EAF4 VA: 0x2282AF4
	public static RectTransform TopPanel(KitWindow w, float height, string name = "Rect_Center") { }

	// RVA: 0x2282BC0 Offset: 0x227EBC0 VA: 0x2282BC0
	public static TextMeshProUGUI LevelPlate(Transform panel, int level) { }
}

