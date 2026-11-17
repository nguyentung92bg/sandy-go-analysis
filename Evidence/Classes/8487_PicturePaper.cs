// Namespace: Dino.BusSand.View
public sealed class PicturePaper : IDisposable // TypeDefIndex: 8487
{
	// Fields
	private const int Ids = 128;
	private const int MaxSide = 512;
	private const int PathPoints = 400;
	[CompilerGenerated]
	private Texture2D <Sketch>k__BackingField; // 0x10
	[CompilerGenerated]
	private Texture2D <Palette>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <Width>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <Height>k__BackingField; // 0x24
	[CompilerGenerated]
	private Vector2[] <Path>k__BackingField; // 0x28
	private byte[] _ids; // 0x30
	private Color[] _mains; // 0x38
	[CompilerGenerated]
	private Color <Dominant>k__BackingField; // 0x40
	private static readonly int[] Dx; // 0x0
	private static readonly int[] Dy; // 0x8

	// Properties
	public Texture2D Sketch { get; set; }
	public Texture2D Palette { get; set; }
	public int Width { get; set; }
	public int Height { get; set; }
	public float Aspect { get; }
	public Vector2[] Path { get; set; }
	public Color Dominant { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23DAEF4 Offset: 0x23D6EF4 VA: 0x23DAEF4
	public Texture2D get_Sketch() { }

	[CompilerGenerated]
	// RVA: 0x23DAEFC Offset: 0x23D6EFC VA: 0x23DAEFC
	private void set_Sketch(Texture2D value) { }

	[CompilerGenerated]
	// RVA: 0x23DAF04 Offset: 0x23D6F04 VA: 0x23DAF04
	public Texture2D get_Palette() { }

	[CompilerGenerated]
	// RVA: 0x23DAF0C Offset: 0x23D6F0C VA: 0x23DAF0C
	private void set_Palette(Texture2D value) { }

	[CompilerGenerated]
	// RVA: 0x23DAF14 Offset: 0x23D6F14 VA: 0x23DAF14
	public int get_Width() { }

	[CompilerGenerated]
	// RVA: 0x23DAF1C Offset: 0x23D6F1C VA: 0x23DAF1C
	private void set_Width(int value) { }

	[CompilerGenerated]
	// RVA: 0x23DAF24 Offset: 0x23D6F24 VA: 0x23DAF24
	public int get_Height() { }

	[CompilerGenerated]
	// RVA: 0x23DAF2C Offset: 0x23D6F2C VA: 0x23DAF2C
	private void set_Height(int value) { }

	// RVA: 0x23DAF34 Offset: 0x23D6F34 VA: 0x23DAF34
	public float get_Aspect() { }

	[CompilerGenerated]
	// RVA: 0x23DAF54 Offset: 0x23D6F54 VA: 0x23DAF54
	public Vector2[] get_Path() { }

	[CompilerGenerated]
	// RVA: 0x23DAF5C Offset: 0x23D6F5C VA: 0x23DAF5C
	private void set_Path(Vector2[] value) { }

	[CompilerGenerated]
	// RVA: 0x23DAF64 Offset: 0x23D6F64 VA: 0x23DAF64
	public Color get_Dominant() { }

	[CompilerGenerated]
	// RVA: 0x23DAF70 Offset: 0x23D6F70 VA: 0x23DAF70
	private void set_Dominant(Color value) { }

	// RVA: 0x23DAF7C Offset: 0x23D6F7C VA: 0x23DAF7C
	public Color ColorAt(Vector2 uv) { }

	// RVA: 0x23DB054 Offset: 0x23D7054 VA: 0x23DB054
	public static PicturePaper Build(LevelData level) { }

	// RVA: 0x23DC460 Offset: 0x23D8460 VA: 0x23DC460
	public static Material NewMaterial() { }

	// RVA: 0x23DC5BC Offset: 0x23D85BC VA: 0x23DC5BC
	public void Apply(Material m) { }

	// RVA: 0x23DC770 Offset: 0x23D8770 VA: 0x23DC770
	public Vector2 TipAt(float drawn01) { }

	// RVA: 0x23DC420 Offset: 0x23D8420 VA: 0x23DC420
	private static int PaletteIndex(char ch) { }

	// RVA: 0x23DC83C Offset: 0x23D883C VA: 0x23DC83C Slot: 4
	public void Dispose() { }

	// RVA: 0x23DC8C0 Offset: 0x23D88C0 VA: 0x23DC8C0
	private static void Free(Object o) { }

	// RVA: 0x23DC458 Offset: 0x23D8458 VA: 0x23DC458
	public void .ctor() { }

	// RVA: 0x23DC998 Offset: 0x23D8998 VA: 0x23DC998
	private static void .cctor() { }
}

