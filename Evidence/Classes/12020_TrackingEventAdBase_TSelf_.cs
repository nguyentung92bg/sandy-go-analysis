// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventAdBase<TSelf> : TrackingEventBase // TypeDefIndex: 12020
{
	// Fields
	protected readonly string ad_format; // 0x0
	protected readonly string placement; // 0x0
	protected string ad_platform; // 0x0
	protected string ad_network; // 0x0
	protected string ad_unit_id; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(string adFormat, string placement) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F996D4 Offset: 0x2F956D4 VA: 0x2F996D4
	|-TrackingEventAdBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetAdPlatform(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99718 Offset: 0x2F95718 VA: 0x2F99718
	|-TrackingEventAdBase<object>.SetAdPlatform
	*/

	// RVA: -1 Offset: -1
	public TSelf SetAdNetwork(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9977C Offset: 0x2F9577C VA: 0x2F9977C
	|-TrackingEventAdBase<object>.SetAdNetwork
	*/

	// RVA: -1 Offset: -1
	public TSelf SetAdUnitId(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F997E0 Offset: 0x2F957E0 VA: 0x2F997E0
	|-TrackingEventAdBase<object>.SetAdUnitId
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99844 Offset: 0x2F95844 VA: 0x2F99844
	|-TrackingEventAdBase<object>.WriteSharedParameters
	*/
}

