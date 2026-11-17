// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventResourceBase<TSelf> : TrackingEventBase // TypeDefIndex: 12066
{
	// Fields
	protected readonly EResourceType resource_type; // 0x0
	protected readonly string resource_name; // 0x0
	protected readonly long resource_amount; // 0x0
	protected Nullable<long> resource_balance; // 0x0
	protected string placement; // 0x0
	protected string placement_detail; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(EResourceType resourceType, string resourceName, long resourceAmount) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9B4A8 Offset: 0x2F974A8 VA: 0x2F9B4A8
	|-TrackingEventResourceBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetResourceBalance(Nullable<long> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9B4F4 Offset: 0x2F974F4 VA: 0x2F9B4F4
	|-TrackingEventResourceBase<object>.SetResourceBalance
	*/

	// RVA: -1 Offset: -1
	public TSelf SetPlacement(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9B550 Offset: 0x2F97550 VA: 0x2F9B550
	|-TrackingEventResourceBase<object>.SetPlacement
	*/

	// RVA: -1 Offset: -1
	public TSelf SetPlacementDetail(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9B5B4 Offset: 0x2F975B4 VA: 0x2F9B5B4
	|-TrackingEventResourceBase<object>.SetPlacementDetail
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9B618 Offset: 0x2F97618 VA: 0x2F9B618
	|-TrackingEventResourceBase<object>.WriteSharedParameters
	*/
}

