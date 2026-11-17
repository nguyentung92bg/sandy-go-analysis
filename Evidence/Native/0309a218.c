/* IL2CPP: Dino.Tracking.TrackingEventIapBase<object>$$.ctor
void Dino_Tracking_TrackingEventIapBase_object____ctor (Dino_Tracking_TrackingEventIapBase_TSelf__o* __this, System_String_o* placement, const MethodInfo_2F9A218* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventIapBase<object>$$.ctor
   void Dino_Tracking_TrackingEventIapBase_object____ctor
   (Dino_Tracking_TrackingEventIapBase_TSelf__o* __this, System_String_o* placement, const
   MethodInfo_2F9A218* method); */

void Dino_Tracking_TrackingEventIapBase_object____ctor_2f9a218(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

