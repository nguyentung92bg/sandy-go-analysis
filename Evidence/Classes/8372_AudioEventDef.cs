// Namespace: Dino.BusSand
[Serializable]
public sealed class AudioEventDef // TypeDefIndex: 8372
{
	// Fields
	public string id; // 0x10
	public string key; // 0x18
	public string bus; // 0x20
	public string playMode; // 0x28
	public string notes; // 0x30
	public float volumeDb; // 0x38
	public float volumeRandMin; // 0x3C
	public float volumeRandMax; // 0x40
	public float pitchCents; // 0x44
	public float pitchRandMin; // 0x48
	public float pitchRandMax; // 0x4C
	public float cooldown; // 0x50
	public bool avoidRepeat; // 0x54
	public int maxInstances; // 0x58
	public int priority; // 0x5C
	public bool noPan; // 0x60
	public float panScale; // 0x64
	public float stepCents; // 0x68
	public float stepWindow; // 0x6C
	public int maxSteps; // 0x70
	public float duckLevel; // 0x74
	public float duckSeconds; // 0x78
	public float crossfade; // 0x7C
	public List<AudioClipRef> clips; // 0x80
	public List<string> layers; // 0x88

	// Methods

	// RVA: 0x2372A64 Offset: 0x236EA64 VA: 0x2372A64
	public void .ctor() { }
}

