// Namespace: Dino.BusSand.App.Meta.Journey
[DefaultMember("Item")]
public sealed class JourneyBytes // TypeDefIndex: 4179
{
	// Fields
	private byte[] _buf; // 0x10
	private int _len; // 0x18
	public readonly int Capacity; // 0x1C
	public int Limit; // 0x20
	[CompilerGenerated]
	private bool <Overflow>k__BackingField; // 0x24

	// Properties
	public bool Overflow { get; set; }
	public int Length { get; }
	public byte Item { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2295308 Offset: 0x2291308 VA: 0x2295308
	public bool get_Overflow() { }

	[CompilerGenerated]
	// RVA: 0x2295310 Offset: 0x2291310 VA: 0x2295310
	private void set_Overflow(bool value) { }

	// RVA: 0x2295318 Offset: 0x2291318 VA: 0x2295318
	public void .ctor(int capacity) { }

	// RVA: 0x22953D0 Offset: 0x22913D0 VA: 0x22953D0
	public int get_Length() { }

	// RVA: 0x22953D8 Offset: 0x22913D8 VA: 0x22953D8
	public byte get_Item(int i) { }

	// RVA: 0x2295408 Offset: 0x2291408 VA: 0x2295408
	public void Clear() { }

	// RVA: 0x229541C Offset: 0x229141C VA: 0x229541C
	public int Mark() { }

	// RVA: 0x2295424 Offset: 0x2291424 VA: 0x2295424
	public void Rewind(int mark) { }

	// RVA: 0x22954AC Offset: 0x22914AC VA: 0x22954AC
	private bool Room(int n) { }

	// RVA: 0x229560C Offset: 0x229160C VA: 0x229560C
	public void U8(int v) { }

	// RVA: 0x2295664 Offset: 0x2291664 VA: 0x2295664
	public void VarU(ulong v) { }

	// RVA: 0x2295764 Offset: 0x2291764 VA: 0x2295764
	public void VarU(long v) { }

	// RVA: 0x2295738 Offset: 0x2291738 VA: 0x2295738
	public static int VarLen(ulong v) { }

	// RVA: 0x2295778 Offset: 0x2291778 VA: 0x2295778
	public void U32(uint v) { }

	// RVA: 0x2295854 Offset: 0x2291854 VA: 0x2295854
	public void F32(float f) { }

	// RVA: 0x229585C Offset: 0x229185C VA: 0x229585C
	public void Ascii(string s, int start, int max) { }

	// RVA: 0x2295954 Offset: 0x2291954 VA: 0x2295954
	public void PatchU8(int at, int v) { }

	// RVA: 0x2295994 Offset: 0x2291994 VA: 0x2295994
	public byte[] ToArray() { }

	// RVA: 0x2295A08 Offset: 0x2291A08 VA: 0x2295A08
	public string ToBase64Url() { }

	// RVA: 0x2295DB8 Offset: 0x2291DB8 VA: 0x2295DB8
	public static float FloatOf(uint bits) { }

	// RVA: 0x2295DC0 Offset: 0x2291DC0 VA: 0x2295DC0
	public static uint BitsOf(float f) { }
}

