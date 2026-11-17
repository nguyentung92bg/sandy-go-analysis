// Namespace: Dino.GameCommon
[Service(new[] { typeof(ILevelRemapService) })]
[Serializable]
public class RemoteConfigLevelRemap : RemoteConfigData<RemoveLevelPayload>, ILevelRemapService // TypeDefIndex: 13358
{
	// Properties
	protected override RemoveLevelPayload DefaultValue { get; }
	public override string Rules { get; }

	// Methods

	// RVA: 0x245FE8C Offset: 0x245BE8C VA: 0x245FE8C Slot: 21
	public int GetRemapLevelIndex(int origin) { }

	// RVA: 0x245FF64 Offset: 0x245BF64 VA: 0x245FF64 Slot: 22
	public string GetRemapLevelId(string origin) { }

	// RVA: 0x2460048 Offset: 0x245C048 VA: 0x2460048 Slot: 12
	protected override RemoveLevelPayload get_DefaultValue() { }

	// RVA: 0x2460198 Offset: 0x245C198 VA: 0x2460198 Slot: 13
	public override string get_Rules() { }

	// RVA: 0x24601D8 Offset: 0x245C1D8 VA: 0x24601D8
	public void .ctor() { }
}

