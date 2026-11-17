// Namespace: Dino.BusSand.View
public sealed class RoadLoopDebug : MonoBehaviour // TypeDefIndex: 8497
{
	// Fields
	private StageLayout _layout; // 0x20
	private LineRenderer _line; // 0x28
	private int _lineVersion; // 0x30
	private PackVehicle _right; // 0x38
	private PackVehicle _left; // 0x40
	private BusKind _kind; // 0x48
	private float _t; // 0x4C

	// Methods

	// RVA: 0x23E4364 Offset: 0x23E0364 VA: 0x23E4364
	public static RoadLoopDebug Attach(Transform parent, StageLayout layout) { }

	// RVA: 0x23E44A0 Offset: 0x23E04A0 VA: 0x23E44A0
	private void Update() { }

	// RVA: 0x23E44F0 Offset: 0x23E04F0 VA: 0x23E44F0
	private void UpdateLine(bool show) { }

	// RVA: 0x23E48B0 Offset: 0x23E08B0 VA: 0x23E48B0
	private void UpdatePreview(RoadLoopConfig cfg) { }

	// RVA: 0x23E50C0 Offset: 0x23E10C0 VA: 0x23E50C0
	public void .ctor() { }
}

