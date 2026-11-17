// Namespace: Dino.BusSand.App.UI
[Serializable]
public sealed class KitValues // TypeDefIndex: 3361
{
	// Fields
	public Vector2 AnchorMin; // 0x10
	public Vector2 AnchorMax; // 0x18
	public Vector2 Pivot; // 0x20
	public Vector2 Pos; // 0x28
	public Vector2 Size; // 0x30
	public Vector3 Scale; // 0x38
	public float RotZ; // 0x44
	public bool Active; // 0x48
	public bool HasImage; // 0x49
	public Sprite Sprite; // 0x50
	public Color ImageColor; // 0x58
	public Image.Type ImageType; // 0x68
	public float Ppu; // 0x6C
	public bool Preserve; // 0x70
	public bool ImageRay; // 0x71
	public bool HasText; // 0x72
	public TMP_FontAsset Font; // 0x78
	public Material TextMat; // 0x80
	public float FontSize; // 0x88
	public float FontMin; // 0x8C
	public float FontMax; // 0x90
	public float CharSpacing; // 0x94
	public float LineSpacing; // 0x98
	public bool AutoSize; // 0x9C
	public Color TextColor; // 0xA0
	public TextAlignmentOptions Align; // 0xB0
	public TextWrappingModes Wrap; // 0xB4
	public TextOverflowModes Overflow; // 0xB8
	public FontStyles Style; // 0xBC

	// Methods

	// RVA: 0x218308C Offset: 0x217F08C VA: 0x218308C
	public static KitValues Read(Transform t) { }

	// RVA: 0x21835E8 Offset: 0x217F5E8 VA: 0x21835E8
	public bool SameAs(KitValues o) { }

	// RVA: 0x21845DC Offset: 0x21805DC VA: 0x21845DC
	public void .ctor() { }
}

