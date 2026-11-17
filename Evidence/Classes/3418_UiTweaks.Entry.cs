// Namespace: 
[Serializable]
public class UiTweaks.Entry // TypeDefIndex: 3418
{
	// Fields
	[Tooltip("Panel key = the panel's GameObject name (e.g. UIGame, UISetting)")]
	public string Panel; // 0x10
	[Tooltip("Path under the panel, e.g. Window/Content/Btn_langBtn")]
	public string Path; // 0x18
	[Tooltip("Moved by (x, y) in canvas pixels (1080 wide), added to the code's position")]
	public Vector2 Move; // 0x20
	[Tooltip("Width / height added to the code's size")]
	public Vector2 Size; // 0x28
	[Tooltip("Scale factor (1 = unchanged)")]
	public Vector2 Scale; // 0x30
	[Tooltip("Text size (0 = the code's size)")]
	public float FontSize; // 0x38
	[Tooltip("Hide this node")]
	public bool Hide; // 0x3C
	[Tooltip("Show this sprite instead (empty = the code's sprite)")]
	public Sprite Sprite; // 0x40
	[Tooltip("Off = entry kept but not applied")]
	public bool Enabled; // 0x48

	// Properties
	public bool IsEmpty { get; }

	// Methods

	// RVA: 0x22A3D10 Offset: 0x229FD10 VA: 0x22A3D10
	public bool get_IsEmpty() { }

	// RVA: 0x22A3E4C Offset: 0x229FE4C VA: 0x22A3E4C
	public void .ctor() { }
}

